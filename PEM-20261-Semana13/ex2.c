#include <stdio.h>

int main() {
    printf("Tamanho ponteiro int: %lu bytes\n", sizeof(int*));
    printf("Tamanho ponteiro float: %lu bytes\n", sizeof(float*));
    printf("Tamanho ponteiro double: %lu bytes\n", sizeof(double*));
    printf("Tamanho ponteiro char: %lu bytes\n", sizeof(char*));

    /* * COMENTÁRIO EXPLICATIVO:
     * O tamanho do ponteiro NÃO varia com o tipo apontado. Todos possuem o mesmo tamanho 
     * (geralmente 8 bytes em sistemas de 64 bits ou 4 bytes em sistemas de 32 bits).
     * Isso acontece porque um ponteiro guarda apenas um endereço de memória, e o tamanho 
     * de um endereço de memória é fixo para a arquitetura do processador, independentemente 
     * se o dado guardado naquele endereço ocupa 1 byte (char) ou 8 bytes (double).
     */

    return 0;
}