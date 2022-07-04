#include <stdio.h>

int mcd(int n1, int n2, int n) {
    if (n1 % n == 0 && n2 % n == 0) { // CASO BASE
            return n;
    }
    return mcd(n1, n2, n - 1);
}

int main() {
    int n1;
    int n2;
    printf("inserire il primo numero: "); 
    scanf("%d", &n1);
    printf("inserire il secondo numero: "); 
    scanf("%d", &n2);
    int minore = n1 < n2 ? n1 : n2;

    printf("\n"); 
    
    int MCD = mcd(n1, n2, minore);
    if (MCD == 1) {
        printf("%d e %d sono coprimi tra loro.\n", n1, n2); 
    }
    printf("il massimo comune divisore tra n1 ed n2 è: %d\n", MCD); 
}

