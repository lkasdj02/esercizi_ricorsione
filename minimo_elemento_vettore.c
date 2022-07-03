#include <stdio.h>

int minimo(int *X, int dim) {
    if (dim == 1) { // CASO BASE: dimensione dell'array = 1 --> l'unico suo elemento è uguale ad 1.
        return X[0];
    }
    int min = minimo(X + 1, dim - 1);
    return (X[0] < min) ? X[0] : min;
}

int massimo(int *X, int dim) {
    if (dim == 1) { // CASO BASE: dimensione dell'array = 1 --> l'unico suo elemento è uguale ad 1.
        return X[0];
    }
    int max = X[1];
    return (X[0] < min) ? X[0] : massimo(X + 1, dim - 1);
}

int main() {
    int v[8] = {2, 7, 3, 4, 5, 6, 2, 1};
    int m = massimo(v, sizeof(v) / sizeof(int));
    printf("il massimo del vettore in questione è: %d\n", m);
} 
