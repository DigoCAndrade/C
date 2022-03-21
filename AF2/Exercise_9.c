// Exercício 9
// Feito por Rodrigo Andrade

#include <stdio.h>

double numero;

int main() {
  printf("Digite um número real:");
  scanf("%lf", &numero);

  printf("1/4 de %1.2lf é: %1.2lf", numero, (numero / 4));
  return 0;
}
