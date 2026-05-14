#include <stdio.h>

void processarCarga(float *ptr_vetor, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(ptr_vetor + i) = *(ptr_vetor + i) * 1.05;
    }
}

int main() {
    float vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        vetor[i] = 0;
    }

    printf("Digite o peso de 10 pacotes:\n");
    for (i = 0; i < 10; i++) {
        printf("Pacote %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("\nPesos antes do processamento:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }

    processarCarga(vetor, 10);

    printf("\n\nPesos depois do processamento (+5%%):\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\n");

    return 0;
}