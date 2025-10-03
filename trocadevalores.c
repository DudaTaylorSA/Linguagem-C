#include <stdio.h>

int main() {
    int a, b;
    int temp; // Variavel auxiliar

    // Pede os valores de A e B
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    printf("\nValores antes da troca: A = %d, B = %d\n", a, b);

    // Realiza a troca usando a variavel auxiliar
    temp = a;
    a = b;
    b = temp;

    // Imprime os valores apos a troca
    printf("Valores apos a troca: A = %d, B = %d\n", a, b);

    return 0;
}