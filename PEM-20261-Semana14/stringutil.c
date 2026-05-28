#include <string.h>
#include "stringutil.h"

int contaVogais(char *s) {
    int contador = 0;
    while (*s) {
        char c = *s;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
        s++; // Avança o ponteiro de caractere em caractere
    }
    return contador;
}

void inverteCString(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}

int ePalindromo(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return 0; 
        }
    }
    return 1;
}