#include <stdio.h>

int main() {
    int arr[8] = {12, 5, 23, 8, 45, 3, 14, 22};
    int *p = arr;
    
    int soma = 0, maior = *p, menor = *p;

    for (int i = 0; i < 8; i++) {
        int valor_atual = *(p + i);
        printf("Elemento [%d] - Endereco: %p - Valor: %d\n", i, (void*)(p + i), valor_atual);

        soma += valor_atual;
        if (valor_atual > maior) maior = valor_atual;
        if (valor_atual < menor) menor = valor_atual;
    }

    printf("\nSoma: %d\nMedia: %.2f\nMaior: %d\nMenor: %d\n", soma, (float)soma/8, maior, menor);
    return 0;
}