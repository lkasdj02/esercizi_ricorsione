#include <stdio.h>

int trova_elemento(int *X, int dim, int elem) {
    /* PRE: assunto che in input io abbia un array di dimensione maggiore di - ed un elemento da cercare
     * POST: restituisce 1 se elem è in X; o altrimenti
     */
    if (dim == 0)
        return 0;
    if (*X == elem){
        printf("trovato in posizione %d\n", dim - 1);
        return 1;
    }
    printf("non ancora %d\n", dim);
    trova_elemento(X - 1, dim - 1, elem); 
}

int main() {
// richiamare la funzione 
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dimensione = sizeof(array) / sizeof (int);
    int elemento = 3;
    int risultato = trova_elemento(array + dimensione - 1, dimensione, elemento);
    if (risultato == 1)
        printf("trovato");
} 


