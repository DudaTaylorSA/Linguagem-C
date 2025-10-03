#include <stdio.h>

int main() {
    int N;
    int i;

    // Pede o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    // Cria o vetor com o tamanho N
    int vetor[N];

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

    return 0;
}