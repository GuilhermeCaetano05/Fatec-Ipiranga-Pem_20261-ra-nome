#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int *p = vetor;

    printf("Antes da operacao: ");
    for(int i = 0; i < 5; i++) printf("%d ", *(p + i));

    // Multiplicação usando apenas ponteiros
    for(int i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 2;
    }

    printf("\nDepois da operacao: ");
    for(int i = 0; i < 5; i++) printf("%d ", *(p + i));
    printf("\n");

    return 0;
}