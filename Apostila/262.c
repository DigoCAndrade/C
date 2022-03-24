// Exercício 8

#include <stdio.h>

int planeta;
double peso_terra, gravidade_relativa;

int main() {
    printf("Digite o peso na terra em Kg:");
    scanf("%lf", &peso_terra);

    printf("Tabela de Planetas:\n 1 - Mercúrio;\n 2 - Vênus;\n 3 - Marte;\n 4 - Júpiter;\n 5 - Saturno;\n 6 - Urano;\n");
    printf("Digite o número do planeta a ser convertido:");
    scanf("%d", &planeta);

    switch (planeta) {
        case 1:
            gravidade_relativa = 0.37;
            break;
        case 2:
            gravidade_relativa = 0.88;
            break;
        case 3:
            gravidade_relativa = 0.38;
            break;
        case 4:
            gravidade_relativa = 2.64;
            break;
        case 5:
            gravidade_relativa = 1.15;
            break;
        case 6:
            gravidade_relativa = 1.17;
            break;
        default:
            printf("Nenhum planeta referente a este número foi encontrado.");
            return 0;
    }

    printf("O peso relativo de %.2lf Kg no planeta %d é de: %.2lf", peso_terra, planeta, (peso_terra / 10) * gravidade_relativa);
}
