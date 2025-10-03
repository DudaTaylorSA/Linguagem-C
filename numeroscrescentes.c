#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Pede os tres numeros
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    // Ordena os numeros usando o metodo de selecao
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Imprime os numeros em ordem crescente
    printf("\nOs numeros em ordem crescente sao: %d, %d, %d\n", a, b, c);

    return 0;
}