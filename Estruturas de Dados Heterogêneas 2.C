#include <stdio.h>
#include <string.h>

struct Paciente {
    char nome[50];
    int idade;
    char telefone[15];
};

void exibirPaciente(struct Paciente p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Telefone: %s\n", p.telefone);   
}

int main() {
    struct Paciente paciente1 = {"João Silva", 30, "1234-5678"};
    exibirPaciente(paciente1);
    return 0;
}
