#include <stdio.h>

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    // Pede a primeira data
    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    // Pede a segunda data
    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    // Compara as datas
    if (ano1 < ano2) {
        printf("\nA primeira data ocorreu primeiro.\n");
    } else if (ano2 < ano1) {
        printf("\nA segunda data ocorreu primeiro.\n");
    } else {
        // Se os anos sao iguais, compara os meses
        if (mes1 < mes2) {
            printf("\nA primeira data ocorreu primeiro.\n");
        } else if (mes2 < mes1) {
            printf("\nA segunda data ocorreu primeiro.\n");
        } else {
            // Se os anos e meses sao iguais, compara os dias
            if (dia1 < dia2) {
                printf("\nA primeira data ocorreu primeiro.\n");
            } else if (dia2 < dia1) {
                printf("\nA segunda data ocorreu primeiro.\n");
            } else {
                printf("\nAs datas sao iguais.\n");
            }
        }
    }

    return 0;
}