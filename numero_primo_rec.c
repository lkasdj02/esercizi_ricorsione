#include <stdio.h>

int numero_primo(int n, int d) {
    if (d == 1) { // CASO BASE: se siamo arrivati ad un divisore pari ad un, vuol dire che il numero è primo.
        return 1;
    } else {
        if (n%d == 0 && n != d) // PASSO INDUTTIVO: se n ha un divisore non banale, allora non è sicuramente primo.
            return 0;      
        return numero_primo(n, d-1);
    }

} 

int main() {

    int numero;

    printf("inserire un numero: ");
    scanf("%d", &numero);

    int res = numero_primo(numero, numero);
    if (res) {
        printf("il numero è primo");
    } else {
        printf("il numero ha un divisore non banale");
    }
}

