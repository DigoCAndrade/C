// Exercício 6
// Feito por Rodrigo Andrade

#include <stdio.h>

int numero;

int main() {
  printf("Digite um número inteiro:");
  scanf("%d", &numero);

  printf("O antecessor de %d é: %d\n", numero, (numero - 1));
  printf("O sucessor de %d é: %d", numero, (numero + 1));
  return 0;
}
