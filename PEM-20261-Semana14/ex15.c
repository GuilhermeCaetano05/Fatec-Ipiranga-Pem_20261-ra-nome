#include <stdio.h>
#include <math.h>

int movimentos = 0;

void hanoi(int n, char origem, char destino, char auxiliar) {
    // CASO BASE: Apenas 1 disco restante
    if (n == 1) {
        printf("Mova o disco 1 de %c para %c\n", origem, destino);
        movimentos++;
        return;
    }
    // PASSO RECURSIVO (Corrigido para 'origem' sem o 's' ou erro de digitação)
    hanoi(n - 1, origem, auxiliar, destino);
    printf("Mova o disco %d de %c para %c\n", n, origem, destino);
    movimentos++;
    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int discos = 3; // Teste padrão da atividade
    printf("Resolvendo Torre de Hanoi para %d discos:\n", discos);
    
    hanoi(discos, 'A', 'C', 'B');
    
    double esperado = pow(2, discos) - 1;
    printf("\nMovimentos realizados: %d\n", movimentos);
    printf("Esperado pela formula (2^n - 1): %.0f\n", esperado);
    return 0;
}