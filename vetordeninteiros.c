#include <stdio.h>
#include <stdlib.h> // Necessario para as funcoes malloc e free

int main() {
    int N;
    int i;
    int *vetor; // Declara um ponteiro para o vetor

    // Pede o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    // Aloca dinamicamente o vetor com o tamanho N
    vetor = malloc(N * sizeof(int));

    // Verifica se a alocacao de memoria falhou
    if (vetor == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Pede e preenche os valores do vetor
    printf("\nDigite os %d valores do vetor:\n", N);
    for (i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Imprime o vetor na ordem inversa
    printf("\nO vetor na ordem inversa e:\n");
    for (i = N - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memoria alocada
    free(vetor);

    return 0;
}