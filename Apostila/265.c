// Exercício 11

#include <stdio.h>

double numero;

int main() {
    printf("Digite um número:");
    scanf("%lf", &numero);

    if (numero > 10)
        printf("O número %.2lf é maior que 10.", numero);
    else if (numero < 10)
        printf("O número %.2lf é menor que 10.", numero);
    else
        printf("O número %.2lf é igual a 10.", numero);
}
