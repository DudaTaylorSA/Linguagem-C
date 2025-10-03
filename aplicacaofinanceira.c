#include <stdio.h>

int main() {
    float deposito_inicial, deposito_mensal, taxa_juros_percentual, valor_final;
    int t_meses, i;

    // Pede os dados da aplicacao
    printf("Digite o valor do deposito inicial: ");
    scanf("%f", &deposito_inicial);
    
    printf("Digite o valor do deposito mensal: ");
    scanf("%f", &deposito_mensal);

    printf("Digite a taxa de juros mensais (em %%): ");
    scanf("%f", &taxa_juros_percentual);

    printf("Digite o numero de meses: ");
    scanf("%d", &t_meses);

    // Converte a taxa de juros para decimal
    float taxa_juros = taxa_juros_percentual / 100.0;
    
    // Inicia o valor final com o deposito inicial
    valor_final = deposito_inicial;

    // Loop para cada mes
    for (i = 0; i < t_meses; i++) {
        valor_final += deposito_mensal;
        valor_final *= (1 + taxa_juros);
    }
    
    // Imprime o valor final com 2 casas decimais
    printf("\nO valor final da aplicacao apos %d meses sera: %.2f reais\n", t_meses, valor_final);

    return 0;
}