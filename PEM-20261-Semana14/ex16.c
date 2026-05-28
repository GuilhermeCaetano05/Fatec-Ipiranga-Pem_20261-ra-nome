#include <stdio.h>

int c_busca = 0, c_soma = 0;
int p_busca = 0, p_soma = 0;

// Busca Recursiva avançando o ponteiro
int buscaRec(int *v, int n, int chave, int prof) {
    c_busca++;
    if (prof > p_busca) p_busca = prof;

    if (n == 0) return -1; // Caso Base 1: Fim do vetor
    if (v[0] == chave) return 0; // Caso Base 2: Encontrado

    int res = buscaRec(v + 1, n - 1, chave, prof + 1);
    return (res == -1) ? -1 : res + 1;
}

// Soma Recursiva por Divisão e Conquista
int somaRec(int *v, int ini, int fim, int prof) {
    c_soma++;
    if (prof > p_soma) p_soma = prof;

    if (ini == fim) return v[ini]; // Caso Base: Elemento único

    int meio = (ini + fim) / 2;
    return somaRec(v, ini, meio, prof + 1) + somaRec(v, meio + 1, fim, prof + 1);
}

int main() {
    int vetor[8] = {12, 45, 7, 23, 89, 14, 56, 2};
    int chave = 23;

    int total_soma = somaRec(vetor, 0, 7, 1);
    printf("Soma Recursiva Total: %d\n", total_soma);
    printf("Chamadas Soma: %d | Profundidade Maxima: %d\n\n", c_soma, p_soma);

    int pos = buscaRec(vetor, 8, chave, 1);
    if (pos != -1) {
        printf("Chave %d encontrada no indice: %d\n", chave, pos);
    } else {
        printf("Chave nao encontrada.\n");
    }
    printf("Chamadas Busca: %d | Profundidade Maxima: %d\n", c_busca, p_busca);

    return 0;
}