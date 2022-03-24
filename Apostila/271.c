// Exercício 17

#include <stdio.h>

double percurso_km, consumo;
char tipo_carro;

int main() {
    printf("Digite o percurso percorrido em Km:");
    scanf("%lf", &percurso_km);

    printf("Digite a classe do carro (A, B e C):");
    scanf("%s", &tipo_carro);

    switch (tipo_carro) {
        case 'A':
            consumo = (percurso_km/12);
            break;
        case 'B':
            consumo = (percurso_km/9);
            break;
        case 'C':
            consumo = (percurso_km/8);
            break;
        default:
            printf("Esta classe de carro não foi encontrada.");
            return 0;
    }
    printf("O consumo estimado de combustível é de: %.2lfL", consumo);
}
