// Exercício 18

#include <stdio.h>
#include <stdlib.h>

int prato, sobremesa, bebida, calorias;

int main() {
    printf("Tabela de Pratos:\n1. Vegetariano - 180cal\n2. Peixe - 230cal\n3. Frango - 250cal\n4. Carne - 350cal\n\n");
    printf("Digite o número do seu Prato conforme a tabela acima:");
    scanf("%d", &prato);
    system("cls");

    printf("Tabela de Sobremesas:\n1. Abacaxi - 75cal\n2. Sorvete diet - 110cal\n3. Mousse diet - 170cal\n4. Mousse chocolate - 200cal\n\n");
    printf("Digite o número da sua Sobremesa conforme a tabela acima:");
    scanf("%d", &sobremesa);
    system("cls");

    printf("Tabela de Bebidas:\n1. Chá - 20cal\n2. Suco de Laranja - 70cal\n3. Suco de Melão - 100cal\n4. Refrigerante diet - 65cal\n\n");
    printf("Digite o número da sua Bebida conforme a tabela acima:");
    scanf("%d", &bebida);
    system("cls");

    switch (prato) {
        case 1:
            calorias += 180;
            break;
        case 2:
            calorias += 230;
            break;
        case 3:
            calorias += 250;
            break;
        case 4:
            calorias += 350;
            break;
        default:
            printf("O Prato escolhido não corresponde a nenhum da tabela, portanto não iremos considera-lô.");
    }

    switch (sobremesa) {
        case 1:
            calorias += 75;
            break;
        case 2:
            calorias += 110;
            break;
        case 3:
            calorias += 170;
            break;
        case 4:
            calorias += 200;
            break;
        default:
            printf("A Sobremesa escolhida não corresponde a nenhuma da tabela, portanto não iremos considera-la.");
    }

    switch (bebida) {
        case 1:
            calorias += 20;
            break;
        case 2:
            calorias += 70;
            break;
        case 3:
            calorias += 100;
            break;
        case 4:
            calorias += 65;
            break;
        default:
            printf("A Sobremesa escolhida não corresponde a nenhuma da tabela, portanto não iremos considera-la.");
    }

    printf("Suas escolhas:\n Prato: %d\n Sobremesa: %d\n Bebida: %d\n\nTotal de Calorias: %d", prato, sobremesa, bebida, calorias);
}
