#include <stdio.h>
#include <string.h>

#define TAM 8

/*
    Função: imprimirTabuleiro
    Objetivo: Exibir o tabuleiro no console
*/
void imprimirTabuleiro(char tab[TAM][TAM][6]) {
    printf("\n========================================\n");
    
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%-5s ", tab[i][j]);
        }
        printf("\n\n");
    }
}

/*
    Função: inicializarTabuleiro
    Objetivo: Preencher o tabuleiro com as peças iniciais
*/
void inicializarTabuleiro(char tab[TAM][TAM][6]) {

    // Preenche o tabuleiro com espaços vazios
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            strcpy(tab[i][j], "---");
        }
    }

    // Inicializa os peões
    for (int j = 0; j < TAM; j++) {
        strcpy(tab[1][j], "PB"); // Peões brancos
        strcpy(tab[6][j], "PP"); // Peões pretos
    }

    // Inicializa apenas as peças utilizadas no Xeque Pastor
    strcpy(tab[0][3], "DB"); // Dama branca
    strcpy(tab[0][5], "BB"); // Bispo branco

    strcpy(tab[7][3], "DP"); // Dama preta
    strcpy(tab[7][1], "CP"); // Cavalo preto
    strcpy(tab[7][6], "CP"); // Cavalo preto
}

/*
    Função: moverPeca
    Objetivo: Realizar a movimentação de uma peça no tabuleiro
*/
void moverPeca(char tab[TAM][TAM][6], int origemLinha, int origemColuna, int destinoLinha, int destinoColuna, char nome[]) {
    
    // Marca a posição de origem
    strcpy(tab[origemLinha][origemColuna], "...");

    // Define a nova posição da peça
    strcpy(tab[destinoLinha][destinoColuna], nome);
}

/*
    Função principal
*/
int main() {

    char tabuleiro[TAM][TAM][6];

    // Inicializa o tabuleiro
    inicializarTabuleiro(tabuleiro);

    printf("\nPOSICAO INICIAL:\n");
    imprimirTabuleiro(tabuleiro);

    // ================= JOGADA 1 =================
    printf("\nJOGADA 1:\n");
    moverPeca(tabuleiro, 1, 4, 3, 4, "PB5"); // Peão branco
    moverPeca(tabuleiro, 6, 4, 4, 4, "PP5"); // Peão preto
    imprimirTabuleiro(tabuleiro);

    // ================= JOGADA 2 =================
    printf("\nJOGADA 2:\n");
    moverPeca(tabuleiro, 0, 5, 3, 2, "BB"); // Bispo branco
    moverPeca(tabuleiro, 7, 1, 5, 2, "CP"); // Cavalo preto
    imprimirTabuleiro(tabuleiro);

    // ================= JOGADA 3 =================
    printf("\nJOGADA 3:\n");
    moverPeca(tabuleiro, 0, 3, 3, 7, "DB"); // Dama branca
    moverPeca(tabuleiro, 7, 6, 5, 5, "CP"); // Cavalo preto
    imprimirTabuleiro(tabuleiro);

    // ================= JOGADA 4 =================
    printf("\nJOGADA 4 - XEQUE MATE:\n");
    moverPeca(tabuleiro, 3, 7, 6, 5, "DB"); // Dama captura (Dxf7)
    imprimirTabuleiro(tabuleiro);

    return 0;
}