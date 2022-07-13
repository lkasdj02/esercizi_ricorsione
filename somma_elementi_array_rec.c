#include <stdio.h>


int somma(int *X, int dim);

int main() {
    int v[] = { 1, 2, 3, 4, 5 , 6};
    int res = somma(v, sizeof(v) / sizeof(int)); 
    printf("la somma è: %d\n", res);
}

int somma(int *X, int dim) {
    if (dim == 1) // CASO BASE
        return *X;
    return X[0] + somma(X + 1, dim - 1);
}
