#include <stdio.h>
#include <stdlib.h>

int main() {
    float s1, novo_salario;
    // Coleta de dados
    printf("Digite Salário inicial! \n");
    scanf("%f", &s1);
    novo_salario = s1 * 1.25;
    printf("O salário anterior de R$%0.2f, após sofrer aumento de 25%% passou a ser de R$%0.2f", s1, novo_salario);
    // Fim operação
    
    return 0;
}