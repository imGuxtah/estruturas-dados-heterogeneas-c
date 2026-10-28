#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa Lista[3]; // Declarando um array de estruturas

    // Atribuindo valores aos campos da estrutura
    strcpy(Lista[0].nome, "João");
    Lista[0].idade = 30;
    Lista[0].altura = 1.75;

    strcpy(Lista[1].nome, "Maria");
    Lista[1].idade = 25;
    Lista[1].altura = 1.65;
    
    strcpy(Lista[2].nome, "Carlos");
    Lista[2].idade = 28;
    Lista[2].altura = 1.80; 
    
    // Exibindo os valores
// Escolhendo a pessoa
int opcao;

printf("Digite um numero (0, 1 ou 2): ");
scanf("%d", &opcao);

if (opcao >= 0 && opcao <= 2) {
    printf("\nNome: %s\n", Lista[opcao].nome);
    printf("Idade: %d\n", Lista[opcao].idade);
    printf("Altura: %.2f\n", Lista[opcao].altura);
} else {
    printf("Numero invalido!\n");
}

return 0;
}