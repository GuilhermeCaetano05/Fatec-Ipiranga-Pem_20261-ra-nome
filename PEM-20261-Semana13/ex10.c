#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1,  2,  3,  4},
        {5,  45, 7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    int *p = &matriz[0][0]; // Ponteiro linear para o início
    int maior = *p;
    int pos_maior = 0;

    for (int i = 0; i < 16; i++) {
        if (*(p + i) > maior) {
            maior = *(p + i);
            pos_maior = i;
        }
    }

    int linha = pos_maior / 4;
    int coluna = pos_maior % 4;

    printf("Maior valor: %d na Linha %d, Coluna %d\n", maior, linha, coluna);
    return 0;
}