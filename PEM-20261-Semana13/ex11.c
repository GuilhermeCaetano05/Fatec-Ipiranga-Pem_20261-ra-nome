#include <stdio.h>

void estatisticas(int *v, int n, int *soma, float *media, int *maior, int *menor) {
    *soma = 0;
    *maior = v[0];
    *menor = v[0];
    for (int i = 0; i < n; i++) {
        *soma += *(v + i);
        if (*(v + i) > *maior) *maior = *(v + i);
        if (*(v + i) < *menor) *menor = *(v + i);
    }
    *media = (float)(*soma) / n;
}

int main() {
    int array[6] = {10, 45, 3, 89, 21, 12};
    int s, ma, me;
    float med;

    estatisticas(array, 6, &s, &med, &ma, &me);
    printf("Soma: %d | Media: %.2f | Maior: %d | Menor: %d\n", s, med, ma, me);
    return 0;
}