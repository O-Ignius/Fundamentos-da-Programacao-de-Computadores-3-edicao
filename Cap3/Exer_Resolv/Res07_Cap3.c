#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal, grat, imp, sal_final;
    // Coleta de dados
    printf("Digite Salário inicial! \n");
    scanf("%f", &sal);
    grat = 50;
    imp = sal * 0.1;
    sal_final = sal + (grat - imp);
    printf("O salário inicial de R$%0.2f, após adição de R$50,00 de gratificação e pagamento de 10%% de impostos resultou em um total de R$%0.2f", sal, sal_final);
    // Fim operação
    
    return 0;
}