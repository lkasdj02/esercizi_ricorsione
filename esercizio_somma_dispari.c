#include <stdio.h>

int sd(int n) {
    if (n < 0) { // caso base.
        return 0;
    }
    else {
        return n + sd(n - 2);
    }
}

int main() {
    int x = 21;
    int somma_dispari = sd(x);
    printf("%d", somma_dispari);
}
