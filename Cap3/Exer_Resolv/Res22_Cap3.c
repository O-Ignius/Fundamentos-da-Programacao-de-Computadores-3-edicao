#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float kw, sal_min, kw_val, gasto, conta_desc;
    printf("Qual o valor do salário minimo? \n");
    scanf("%f", &sal_min);
    printf("Quanto foi o gasto elétrico |em kW|? \n");
    scanf("%f", &kw);
    
    kw_val = sal_min / 5;
    gasto = kw_val * kw;
    conta_desc = gasto * 0.85;
    // Fim operações
    
    printf("O valor do kW com base no salário minimo é de R$%0.2f, o valor da conta de energia da casa é de R$%0.2f e o valor da conta com 15%% de desconto é de R$%0.2f", kw_val, gasto, conta_desc);
    
    return 0;
}