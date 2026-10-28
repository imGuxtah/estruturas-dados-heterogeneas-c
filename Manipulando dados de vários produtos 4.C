#include <stdio.h>
#include <string.h>

#define NUM_PRODUCTS 5

struct Produto {
    char nome[50];
    int codigo; ;
    int quantitade;
    float preco;
};

int main() {
    int i;
    struct Produto produtos[NUM_PRODUCTS];

// preencher os dados dos produtos
    strcpy(produtos[0].nome, "Camiseta");
    produtos[0].codigo = 101;
    produtos[0].quantitade = 50;
    produtos[0].preco = 29.99;

    strcpy(produtos[1].nome, "Calça");
    produtos[1].codigo = 102;
    produtos[1].quantitade = 30;
    produtos[1].preco = 49.99;

    strcpy(produtos[2].nome, "Tênis");
    produtos[2].codigo = 103;
    produtos[2].quantitade = 20;
    produtos[2].preco = 79.99;  

    strcpy(produtos[3].nome, "Jaqueta");
    produtos[3].codigo = 104;
    produtos[3].quantitade = 15;
    produtos[3].preco = 99.99;

    strcpy(produtos[4].nome, "Boné");
    produtos[4].codigo = 105;
    produtos[4].quantitade = 40;
    produtos[4].preco = 19.99;

    printf("estoque de produtos:\n");
    for (i = 0; i < NUM_PRODUCTS; i++) {
        printf("Produto: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantitade);
        printf("Preço: R$ %.2f\n", produtos[i].preco);
    }
        return 0;


}
