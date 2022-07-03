#include <stdio.h>

int trova_occorrenze(int *X, int dim, int x, int n); 
int trova_occorrenze_2(int *X, int dim, int x);
int trova_occorrenze_3(int *X, int dim, int x);

int main() {
   int numeri[8]; 
   int n;
   printf("inserisci il numero da trovare: ");
   scanf("%d", &n);
   printf("inserisci l'insieme di numeri di riferimento: ");

   for (int i = 0; i < 8; i++) {
       scanf("%d", &numeri[i]);
   }
   int n_occorrenze = trova_occorrenze_3(numeri, 8, n);
   printf("il numero di occorrenze di %d: %d", n, n_occorrenze);
}

int trova_occorrenze(int *X, int dim, int x, int n) {
    /* PRE: X è un array conenente dim elementi
     * POST: il numero n contiene il numero di occorenze di x i 
     */
    if (dim == 0) // CASO BASE: ritorna n = 0; questo in quanto non vi sono elementi nell'array (dim == 0).
        return n; 
    /* CASO RICORSIVO:
     * X[0] == x si richiama la funzione, la cui POST supponiamo essere vera. 
     * in questo caso n = n + 1
     * X[0] != x richiamiammo la funzione, la cui POST supponiamo vera.
     * decrementiamo la dimensione dell'array nel quale cercare
     * così facendo al passo induttivo, supponendo la POST vera, si aumenta o meno il valore
     * di n al passo X[0], X[1]....X[dim -1]
     */
    if (*X == x)  
        return trova_occorrenze(X + 1, dim - 1, x, n+=1);
    else
        return trova_occorrenze(X + 1, dim - 1, x, n); 

}

int trova_occorrenze_2(int X[], int dim, int x) {
    /* PRE: X è un array conenente dim elementi
     * POST: ritorna il numero di occorrenze di x 
     */
    if (dim == 0) // CASO BASE: ritorno 0; se l'array è vuoto, non ci sono elementi x al suo interno.
       return 0;
    /* CASO RICORSIVO
     * ipotesi induttiva: supponendo vera la POST per un generico elemento dell'array.
     * al passo n, questa funzione ritorna il numero di occorenze di x
     * al passo n + 1, per l'ipotesi induttiva abbiamo che restituisce il numero di occerenze di x
     * + 1 nel caso in cui al passo n + 1 ne abbia trovata un'altra
     * + 0 nel caso contrario.
     */
    if (X[0] == x)
       return 1 + trova_occorrenze_2(X + 1, dim - 1, x);
    else
       return trova_occorrenze_2(X + 1, dim - 1, x);
    
}

int trova_occorrenze_3(int X[], int dim, int x) {

    /* PRE: X è un array conenente dim elementi
     * POST: ritorna il numero di occorrenze di x 
     */
    if (dim == 0) // CASO BASE: ritorno 0; se l'array è vuoto, non ci sono elementi x al suo interno.
       return 0;
    /* CASO RICORSIVO
     * ipotesi induttiva: supponendo vera la POST per un generico elemento dell'array.
     * al passo n, questa funzione ritorna il numero di occorenze di x
     * al passo n + 1, per l'ipotesi induttiva abbiamo che restituisce il numero di occerenze di x
     * + 1 nel caso in cui al passo n + 1 ne abbia trovata un'altra
     * + 0 nel caso contrario.
     */
    return (X[0] == x) ?  1 + trova_occorrenze_2(X + 1, dim - 1, x) : trova_occorrenze_2(X + 1, dim - 1, x);
    
}
