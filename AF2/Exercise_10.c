// Exercício 10
// Feito por Rodrigo Andrade

#include <stdio.h>

double numero1, numero2, numero3;

int main() {
  printf("Digite três números:");
  scanf("%lf %lf %lf", &numero1, &numero2, &numero3);

  printf("A média entre %1.2lf, %1.2lf e %1.2lf é: %1.2lf", numero1, numero2, numero3, (numero1 + numero2 + numero3) / 3);
  return 0;
}
