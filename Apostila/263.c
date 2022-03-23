// Exercício 9

#include <stdio.h>

double salario_bruto, prestacao;

int main() {
    printf("Digite seu salario bruto:");
    scanf("%lf", &salario_bruto);

    printf("Digite o valor da prestação:");
    scanf("%lf", &prestacao);

    if (prestacao > ((salario_bruto * 30) / 100))
        printf("O empréstimo não pode ser concedido.");
    else
        printf("O empréstimo pode ser concedido.");
}
