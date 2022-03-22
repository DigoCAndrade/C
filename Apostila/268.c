// Exercício 14

#include <stdio.h>

int detectMes() {
    int numero;

    printf("Digite um número inteiro entre 1 e 12:");
    scanf("%d", &numero);

    if (numero < 1 || numero > 12) {
        printf("Não foi encontrado nenhum mês correspondente com este número, por favor tente novamente.");
        detectMes();
    }else return numero;
}

int main() {
    switch (detectMes()) {
        case 1:
            printf("O mês 1 corresponde a: Janeiro.");
            break;
        case 2:
            printf("O mês 2 corresponde a: Fevereiro.");
            break;
        case 3:
            printf("O mês 3 corresponde a: Março.");
            break;
        case 4:
            printf("O mês 4 corresponde a: Abril.");
            break;
        case 5:
            printf("O mês 5 corresponde a: Maio.");
            break;
        case 6:
            printf("O mês 6 corresponde a: Junho.");
            break;
        case 7:
            printf("O mês 7 corresponde a: Julho.");
            break;
        case 8:
            printf("O mês 8 corresponde a: Agosto.");
            break;
        case 9:
            printf("O mês 9 corresponde a: Setembro.");
            break;
        case 10:
            printf("O mês 10 corresponde a: Outubro.");
            break;
        case 11:
            printf("O mês 12 corresponde a: Novembro.");
            break;
        case 12:
            printf("O mês 12 corresponde a: Dezembro.");
            break;
    }
}
