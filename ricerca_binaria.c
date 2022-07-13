#include <stdio.h>

int search(int *X, int dim, int elem);

int main() {

    // porca di quella puttana è arrivato il momento.
    // ipotesi fondamentale affinchè questo algoritmo funzioni.
    // l'array deve essere ordinato (in modo crescente preferibilmente).
    int a[10] = { 2, 4, 5, 6, 7, 9, 10, 12, 13 };

    
    // ricerca di un elemento all'intero dell'array
    
    int search_for;
    printf("inserisci un favoloso numero: ");
    scanf("%d", &search_for);
    int el = search(a, sizeof(a) / sizeof(int), search_for);

    (el == -1) ? 
        printf("elemento non trovato.\n") :
        printf("elemento %d trovato\n", el);
}

int search(int *X, int dim, int elem) {
    
    // PRE: X è un puntatore ad un vettore di interi. elem è l'elemento che si vuole cercare all'interno di esso.
    // e dim è la dimensione del vettore X.
    
    // POST: la funzione ritorna elem  se l'elemento si trova all'interno del sottoinsieme di dimensione X / 2.
    
    int pos = dim/2;    

    // CASI BASE
    if (dim < 1) // nel caso in cui elem non sia nel vettore.
        return -1;
    if (X[pos] == elem && dim == 1) // CASI BASE.
        return X[pos];
    
    // casi ricorsivi    
    if (elem < X[pos])
        return search(X, dim/2, elem);
    else
        return search(X + pos, dim/2, elem);
}
