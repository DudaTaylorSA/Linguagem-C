#include <stdio.h>

int main() {
    float numero;
    float soma = 0.0;

    // Loop infinito
    while (1) {
        // Pede o numero
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%f", &numero);
        
        // Verifica se o numero e 0 para sair do loop
        if (numero == 0) {
            break;
        }

        // Soma o numero ao total e imprime a soma atual
        soma += numero;
        printf("Soma atual: %.2f\n", soma);
    }

    printf("\nPrograma finalizado.\n");

    return 0;
}