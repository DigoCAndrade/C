// Exercício 15

#include <stdio.h>

int numero;

int main() {
    printf("Digite um número: ");
    scanf("%d", &numero);

    if ((numero % 7) == 0 && (numero % 3) == 0)
        printf("O número %d é divisível por 3 e por 7.", numero);
    else
        printf("O número %d não é divisível por e 3 por 7.", numero);
}
