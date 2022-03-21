// Exercício 5
// Feito por Rodrigo Andrade

#include <stdio.h>

double numero1, numero2;

int main() {
  printf("Digite um número real:");
  scanf("%lf", &numero1);

  printf("Digite um segundo número real:");
  scanf("%lf", &numero2);

  printf("O primeiro número real foi: %1.2f\nO segundo número real foi: %1.2f", numero1, numero2);
  return 0;
}
