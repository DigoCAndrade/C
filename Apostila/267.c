// Exercício 13

#include <stdio.h>

int idade;

int main() {
    printf("Digite a idade:");
    scanf("%d", &idade);

    if (idade < 18)
        printf("Esta pessoa é menor de idade.");
    else if (idade >= 18 && idade <= 65)
        printf("Esta pessoa é maior de idade.");
    else printf("Esta pessoa é maior de 65 anos.");
}
