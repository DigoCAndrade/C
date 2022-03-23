// Exercício 10

#include <stdio.h>

double numero;

int main() {
    printf("Digite um número:");
    scanf("%lf", &numero);

    if (numero >= 20 && numero <= 50)
        printf("O número %.2lf está entre 20 e 50.", numero);
    else
        printf("O número %.2lf não está entre 20 e 50.", numero);
}
