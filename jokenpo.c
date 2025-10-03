#include <stdio.h>

int main() {
    int jogador1, jogador2;

    // Pede as escolhas dos jogadores
    printf("Escolhas:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");

    printf("\nJogador 1, digite sua escolha: ");
    scanf("%d", &jogador1);

    printf("Jogador 2, digite sua escolha: ");
    scanf("%d", &jogador2);

    // Lógica do jogo
    if (jogador1 == jogador2) {
        printf("\nEmpate!\n");
    } else if ((jogador1 == 1 && jogador2 == 3) ||
               (jogador1 == 2 && jogador2 == 1) ||
               (jogador1 == 3 && jogador2 == 2)) {
        printf("\nJogador 1 ganhou!\n");
    } else {
        printf("\nJogador 2 ganhou!\n");
    }

    return 0;
}