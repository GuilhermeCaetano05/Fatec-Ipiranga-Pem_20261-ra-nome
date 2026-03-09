#include <stdio.h>

char tabuleiro[3][3];
char jogador = 'X';

void inicializarTabuleiro() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

void mostrarTabuleiro() {
    printf("\n");
    for(int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if(i < 2) printf("\n---+---+---\n");
    }
    printf("\n\n");
}

int verificarVitoria() {

    for(int i = 0; i < 3; i++) {
        if(tabuleiro[i][0] == jogador &&
           tabuleiro[i][1] == jogador &&
           tabuleiro[i][2] == jogador)
           return 1;
    }

    for(int j = 0; j < 3; j++) {
        if(tabuleiro[0][j] == jogador &&
           tabuleiro[1][j] == jogador &&
           tabuleiro[2][j] == jogador)
           return 1;
    }

    if(tabuleiro[0][0] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][2] == jogador)
       return 1;

    if(tabuleiro[0][2] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][0] == jogador)
       return 1;

    return 0;
}

int verificarEmpate() {

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(tabuleiro[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

int main() {

    int linha, coluna;

    inicializarTabuleiro();

    while(1) {

        mostrarTabuleiro();

        printf("Jogador %c\n", jogador);
        printf("Digite linha (0-2): ");
        scanf("%d", &linha);

        printf("Digite coluna (0-2): ");
        scanf("%d", &coluna);

        if(tabuleiro[linha][coluna] != ' ') {
            printf("Posicao ocupada! Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;

        if(verificarVitoria()) {
            mostrarTabuleiro();
            printf("O jogador %c venceu!\n", jogador);
            break;
        }

        if(verificarEmpate()) {
            mostrarTabuleiro();
            printf("O jogo terminou em empate.\n");
            break;
        }

        if(jogador == 'X')
            jogador = 'O';
        else
            jogador = 'X';
    }

    return 0;
}