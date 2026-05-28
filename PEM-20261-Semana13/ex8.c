#include <stdio.h>

int main() {
    double v[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double *p3 = &v[2]; // 3º elemento (índice 2)
    double *p8 = &v[7]; // 8º elemento (índice 7)

    long diferenca = p8 - p3;
    printf("Diferenca entre os ponteiros: %ld elementos\n", diferenca);

    /*
     * COMENTÁRIO EXPLICATIVO:
     * A subtração entre ponteiros do mesmo tipo não retorna a diferença em bytes, 
     * mas sim a quantidade de ELEMENTOS daquele tipo que cabem no intervalo. 
     * O compilador divide automaticamente a distância em bytes pelo sizeof(double).
     */

    printf("Intervalo entre p3 e p8: ");
    for (double *i = p3; i <= p8; i++) {
        printf("%.1f ", *i);
    }
    printf("\n");

    return 0;
}