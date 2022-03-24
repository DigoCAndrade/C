// Exercício 17

#include <stdio.h>

int numeros[2];

int main() {
    printf("Digite três números inteiros:");
    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("A ordem crescente dos números digitados é:\n%d\n%d\n%d", numeros[0], numeros[1], numeros[2]);
}
