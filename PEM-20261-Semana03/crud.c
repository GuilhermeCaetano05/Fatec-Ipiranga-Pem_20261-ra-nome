#include <stdio.h>

#define TAM 10

int main() {

    int idProduto[TAM];
    int opcao = -1;
    int i, id, encontrado, novoId;

    for(i = 0; i < TAM; i++) {
        idProduto[i] = 0;
    }

    while(opcao != 0) {

        printf("\n--- MENU CRUD ---\n");
        printf("1 - Inclusao\n");
        printf("2 - Consulta\n");
        printf("3 - Alteracao\n");
        printf("4 - Exclusao\n");
        printf("5 - Listar Todos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Digite o ID do produto: ");
                scanf("%d", &id);

                for(i = 0; i < TAM; i++) {
                    if(idProduto[i] == 0) {
                        idProduto[i] = id;
                        printf("Produto cadastrado na posicao %d\n", i);
                        break;
                    }
                }
                if(i == TAM) {
                    printf("Limite de produtos atingido!\n");
                }
                break;

            case 2:
                printf("Digite o ID para consultar: ");
                scanf("%d", &id);

                encontrado = 0;
                for(i = 0; i < TAM; i++) {
                    if(idProduto[i] == id) {
                        printf("Produto encontrado na posicao %d\n", i);
                        encontrado = 1;
                        break;
                    }
                }
                if(!encontrado) {
                    printf("Produto nao encontrado.\n");
                }
                break;

            case 3:
                printf("Digite o ID para alterar: ");
                scanf("%d", &id);

                encontrado = 0;
                for(i = 0; i < TAM; i++) {
                    if(idProduto[i] == id) {
                        printf("Digite o novo ID: ");
                        scanf("%d", &novoId);
                        idProduto[i] = novoId;
                        printf("Produto alterado com sucesso.\n");
                        encontrado = 1;
                        break;
                    }
                }
                if(!encontrado) {
                    printf("Produto nao encontrado.\n");
                }
                break;

            case 4:
                printf("Digite o ID para excluir: ");
                scanf("%d", &id);

                encontrado = 0;
                for(i = 0; i < TAM; i++) {
                    if(idProduto[i] == id) {
                        idProduto[i] = 0;
                        printf("Produto excluido com sucesso.\n");
                        encontrado = 1;
                        break;
                    }
                }
                if(!encontrado) {
                    printf("Produto nao encontrado.\n");
                }
                break;

            case 5:
                printf("\n--- LISTA DE PRODUTOS ---\n");
                for(i = 0; i < TAM; i++) {
                    if(idProduto[i] != 0) {
                        printf("Posicao %d: ID %d\n", i, idProduto[i]);
                    }
                }
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
