#include <stdio.h>

int main() {
    int i;

    // Loop para contar de 1 a 50
    for (i = 1; i <= 50; i++) {
        // Verifica se é múltiplo de 3 e 5
        if ((i % 3 == 0) && (i % 5 == 0)) {
            printf("FizzBuzz\n");
        }
        // Verifica se é múltiplo de 3
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // Verifica se é múltiplo de 5
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // Se não for múltiplo de nenhum
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}