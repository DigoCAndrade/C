// Exercício 12

#include <stdio.h>

int ano_nascimento, ano_atual;

int main() {
    ano_atual = 2022;
    printf("Digite o seu ano de nascimento:");
    scanf("%d", &ano_nascimento);

    if (ano_nascimento > ano_atual)
        printf("O ano de nascimento é inválido.");
    else printf("Você possui %d anos.", (ano_atual - ano_nascimento));
}
