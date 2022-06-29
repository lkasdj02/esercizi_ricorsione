#include <stdio.h>


int f(int n, int m) {
    if (m == 0 || n == 0) { // errore
        return -1;
    }
    if (n == m) { // CASO BASE
        return n;
    } 
    return n * f(n-1, m);
}

int main() {
    int res = f(6, 1);
    printf("%d", res);
}
