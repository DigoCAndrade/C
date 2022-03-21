// Exercício 8
// Feito por Rodrigo Andrade

#include <stdio.h>

int numero1, numero2;

int main() {
  printf("Digite dois números inteiros:");
  scanf("%d %d", &numero1, &numero2);

  printf("A subtração entre %d e %d é: %d", numero1, numero2, (numero1 - numero2));
  return 0;
}
