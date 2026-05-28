#include <stdio.h>
#include "stringutil.h" // Inclui a biblioteca local criada

int main() {
    char texto[50] = "arara";

    printf("String de teste: %s\n", texto);
    printf("Quantidade de vogais: %d\n", contaVogais(texto));
    
    if (ePalindromo(texto)) {
        printf("Resultado: Eh um palindromo!\n");
    } else {
        printf("Resultado: Nao eh um palindromo.\n");
    }

    inverteCString(texto);
    printf("String invertida: %s\n", texto);

    return 0;
}