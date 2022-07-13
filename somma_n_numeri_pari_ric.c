#include <stdio.h>


int somma(int n);

int main() {
    int num;
    printf("inserisci un numero");
    scanf("%d", &num);
    printf("la somma dei primi %d numeri pari è: %d.\n", num, somma(num));
}

int somma(int n) {

    if (n == 1) // CASO BASE
        return 2 * 1;

    return (n*2) + somma(n - 1); // CASO RICORSIVO: n-esimo numero pari.
}
