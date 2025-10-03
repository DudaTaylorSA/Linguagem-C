#include <stdio.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    // Pede o valor em segundos
    printf("Digite o valor em segundos: ");
    scanf("%d", &total_segundos);

    // Calcula as horas
    horas = total_segundos / 3600;

    // Calcula os minutos (resto da divisao por 3600, depois divide por 60)
    minutos = (total_segundos % 3600) / 60;

    // Calcula os segundos restantes (resto da divisao por 60)
    segundos = total_segundos % 60;

    // Imprime o resultado no formato HH:MM:SS, com duas casas decimais
    printf("\n%02dh%02dm%02ds\n", horas, minutos, segundos);

    return 0;
}