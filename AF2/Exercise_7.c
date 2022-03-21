// Exercício 7
// Feito por Rodrigo Andrade

#include <stdio.h>

char nome[100], endereco[100], telefone[100];

int main() {
    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("Digite seu endereço:");
    scanf("%s", endereco);

    printf("Digite seu telefone:");
    scanf("%s", telefone);

    printf("Seu nome é: %s\nSeu endereço é: %s\nSeu telefone é:%s", nome, endereco, telefone);
}
