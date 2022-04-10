#include <stdio.h>

int somma_n_numeri(int n); 

int main() {
    int risultato = somma_n_numeri(100);
    printf("somma primi 100 numeri: %d\n", risultato);
} 

int somma_n_numeri(int n) {
    /* PRE: n è un numero naturale
     * POST: ritorna la somma dei primi n numeri
     * questa equivale ad ( n * (n + 1)) / 2
     */
    if (n == 0)
        return 0;
    return n + somma_n_numeri(n - 1);
} 
