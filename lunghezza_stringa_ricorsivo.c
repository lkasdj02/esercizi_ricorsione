#include <stdio.h>
#define MAX_LENGTH 255
 
// definizione protoipo funzione
int lunghezza_stringa(char *s);

int main() {
    char s[MAX_LENGTH];
    scanf("%255s", s);
    int len = lunghezza_stringa(s); 
    printf("la lunghezza della stringa è: %d\n", len);
}

int lunghezza_stringa(char *s) {
    if (*s == '\0')
        return 0;    
    else {
        return 1 + lunghezza_stringa(s + 1);
    }
}
