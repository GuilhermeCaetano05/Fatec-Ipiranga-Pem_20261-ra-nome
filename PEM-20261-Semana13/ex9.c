#include <stdio.h>

void inverter(int *arr, int n) {
    int *inicio = arr;
    int *fim = arr + (n - 1);
    while (inicio < fim) {
        int tmp = *inicio;
        *inicio = *fim;
        *fim = tmp;
        inicio++;
        fim--;
    }
}

int main() {
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    
    printf("Antes: ");
    for(int i=0; i<7; i++) printf("%d ", array[i]);

    inverter(array, 7);

    printf("\nDepois: ");
    for(int i=0; i<7; i++) printf("%d ", array[i]);
    printf("\n");
    return 0;
}