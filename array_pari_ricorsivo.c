#include <stdio.h>

int array_pari(int *p) {
    if (*p == 0)
        return 0; 
    if (*p%2 != 0) // caso in cui l'elemento sia dispari
        return 0;
    return array_pari(p + 1);
}
int main() {
    int numeri[] = {2, 3, 4, 6};
    int pari = array_pari(numeri);
    if (pari)
        printf("l'array è pari");
    else
        printf("l'array contiene almeno un elemento dispari");
}
