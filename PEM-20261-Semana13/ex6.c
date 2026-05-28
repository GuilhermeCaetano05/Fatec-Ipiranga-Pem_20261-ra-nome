#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[40];
    float preco;
    int estoque;
};

int main() {
    struct Produto prod;
    struct Produto *p = &prod;

    // 1. Usando (*p).campo (Sem usar ->)
    strcpy((*p).nome, "Teclado");
    (*p).preco = 150.00f;
    (*p).estoque = 10;
    printf("Via (*p).: %s | Preço: %.2f | Estoque: %d\n", (*p).nome, (*p).preco, (*p).estoque);

    // 2. Usando ->
    strcpy(p->nome, "Mouse");
    p->preco = 80.00f;
    p->estoque = 25;
    printf("Via ->: %s | Preço: %.2f | Estoque: %d\n", p->nome, p->preco, p->estoque);

    return 0;
}   