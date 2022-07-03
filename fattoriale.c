#include <stdio.h>


int f(int n) {
    if (n == 1) { // CASO BASE: caso risolvibile direttamente.
        return 1;
    }
    return n * f(n - 1); // CASO RICORSIVO: in questo caso is passano dei dati ridotti.
} 

int main() {
    int n = 5;
    printf("il fattoriale di %d risulta: %d", n, f(n));
}
