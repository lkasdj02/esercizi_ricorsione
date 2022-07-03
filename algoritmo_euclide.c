#include <stdio.h>


int euclide(int a, int b);
int euclide_rec(int a, int b);

int main() {

    int n1;
    int n2;  

    printf("inserisci il primo numero: ");
    scanf("%d", &n1);   
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);   
   
    int MCD = euclide_rec(n1, n2); 
    printf("massimo comune divisore tra %d | %d è: %d.\n", n1, n2, MCD);
}

int euclide(int a, int b) {
    // definizione della procedura.

    int resto = a%b;
    // int appoggio = 0;
    while (resto != 0) {
        a = b;
        b = resto;
        resto = a%b;
    }
    return b;
}

int euclide_rec(int a, int b) {

    int resto = a%b;

    if (resto == 0) { // caso base.
        return b;
    }
    
    return euclide_rec(b, resto); // caso ricorsivo (induttivo)
}
