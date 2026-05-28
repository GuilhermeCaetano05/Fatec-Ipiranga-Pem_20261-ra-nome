#include <stdio.h>

void trocar(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void mostrar(int *arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
}

void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int *min = arr + i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *min) min = arr + j;
        }
        if (min != (arr + i)) {
            trocar(arr + i, min);
            printf("Durante troca: ");
            mostrar(arr, n);
        }
    }
}

int main() {
    int dados[8] = {24, 10, 85, 3, 44, 12, 70, 1};
    printf("Antes: ");
    mostrar(dados, 8);
    
    selectionSort(dados, 8);
    
    printf("Depois: ");
    mostrar(dados, 8);
    return 0;
}