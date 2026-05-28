#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long potencia(int base, int exp) {
    long long resultado = 1;
    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }
    return resultado;
}

int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void exibeBinario(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int bin[32], i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}

int main() {
    int opcao, v1, v2;
    do {
        printf("\n--- MENU CALCULADORA MODULAR ---\n");
        printf("1. MDC | 2. Potencia | 3. Primo | 4. Binario | 5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o valor principal: ");
            scanf("%d", &v1);
            if (opcao == 1 || opcao == 2) {
                printf("Digite o segundo valor (peso/exp): ");
                scanf("%d", &v2);
            }
        }

        switch (opcao) {
            case 1: printf("MDC = %d\n", mdc(v1, v2)); break;
            case 2: printf("Potencia = %lld\n", potencia(v1, v2)); break;
            case 3: printf(ehPrimo(v1) ? "Eh primo.\n" : "Nao eh primo.\n"); break;
            case 4: printf("Binario: "); exibeBinario(v1); printf("\n"); break;
            case 5: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 5);
    return 0;
}