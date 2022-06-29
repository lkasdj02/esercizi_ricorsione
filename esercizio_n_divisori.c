#include <stdio.h>


int f(int n, int d) {
    if (d == 0) {
        return -1;
    }
    else if (n == 0 || n == d) { // CASO BASE: 0 è divisibile per un numero solamente una volta.
        return 1;
    }
    else if (n % d > 0) {
        return 0;
    } 
    else {
        return 1 + f(n / d, d); 
    }
}

int main() {
    int n = 32;
    int d = 2;
    int q = f(n, d);

    if (q == -1) {
        printf("impossibile dividere per 0");
    } else {
        printf("%d", q); 
    }
}
