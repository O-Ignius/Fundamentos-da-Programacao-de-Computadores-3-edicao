#include <stdio.h>
#include <stdlib.h>

int main() {
    float s1, pa, novo_salario;
    // Coleta de dados
    printf("Digite Salário inicial! \n");
    scanf("%f", &s1);
    printf("Digite a porcentagem de aumento salárial! \n");
    scanf("%f", &pa);
    novo_salario = s1 + (s1 * (pa / 100));
    printf("O salário anterior de R$%0.2f, após sofrer aumento de %0.0f%% passou a ser de R$%0.2f", s1, pa, novo_salario);
    // Fim operação
    
    return 0;
}