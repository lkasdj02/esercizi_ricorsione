#include <stdio.h>

int search(int *X, int dim, int elem);


int main() {

    // porca di quella puttana è arrivato il momento.
    // ipotesi fondamentale affinchè questo algoritmo funzioni.
    // l'array deve essere ordinato (in modo crescente preferibilmente).
    int a[8] = { 1, 2, 4, 5, 6, 7, 8, 10};
    printf("vettore:\n");
    for (int i = 0; i < sizeof(a) / sizeof(int); i += 1)
        if (i == (sizeof(a) / sizeof(int)) - 1) 
            printf("%d. \n", a[i]);
        else
            printf("%d, ", a[i]);
                
    // ricerca di un elemento all'intero dell'array
    
    int search_for;
    printf("inserisci un favoloso numero: ");
    scanf("%d", &search_for);
    int el = search(a, sizeof(a) / sizeof(int), search_for);

    (el) ? 
        printf("elemento trovato\n") :
        printf("elemento non trovato.\n");
}

int search(int *X, int dim, int elem) {
    
    // PRE: X è un puntatore ad un vettore di interi. elem è l'elemento che si vuole cercare all'interno di esso.
    // e dim è la dimensione del vettore X.
    
    // POST: la funzione ritorna 1 se l'elemento si trova all'interno di X 0, altrimenti.
    
    int pos = dim/2;    
    printf("pos: %d \t x[pos]: %d \t dim: %d\n", pos, X[pos], dim); // DEBUG

    // CASI BASE
    if (dim <= 0) // nel caso in cui elem non sia nel vettore.
        return 0;
    if (X[pos] == elem) // CASI BASE.
        return 1;
    
    // casi ricorsivi    
    if (elem < X[pos])
        return search(X, pos, elem);
    else
        return search(X + pos, dim - pos - 1, elem);
}
