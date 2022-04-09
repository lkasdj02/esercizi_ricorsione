#include <stdio.h>

int trova_elemento(int *X, int dim, int elem) {
    if (dim == 0)
        return 0;
    if (X[0] == elem) // caso in cui si trova almento un elemento
        return 1;
    else
        return trova_elemento(X + 1, dim - 1, elem);
} 
int main() {
    int numeri[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int dimensione = sizeof(numeri) / sizeof(int);
    int t = trova_elemento(numeri, dimensione, 8);
    if (t)
        printf("trovato");
}
