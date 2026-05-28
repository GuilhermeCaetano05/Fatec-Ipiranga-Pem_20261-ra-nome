#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno aluno1 = {"Guilherme", 20261, 9.5f};

    printf("Endereço do campo nome: %p\n", (void*)&aluno1.nome);
    printf("Endereço do campo matricula: %p\n", (void*)&aluno1.matricula);
    printf("Endereço do campo media: %p\n", (void*)&aluno1.media);

    /*
     * COMENTÁRIO EXPLICATIVO:
     * Os endereços são consecutivos na memória porque os membros de uma estrutura são 
     * alocados de forma sequencial na ordem em que são declarados. No entanto, o compilador 
     * pode inserir pequenos espaços vazios entre eles (alinhamento de memória ou "padding") 
     * para que o processador consiga ler os dados de forma mais rápida.
     */

    return 0;
}