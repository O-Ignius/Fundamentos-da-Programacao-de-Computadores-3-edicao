#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float sal_base, comiss, vendas, sal_tot;
    printf("Digite o salário base do funcionário: \n");
    scanf("%f", &sal_base);
    printf("Digite o valor total de vendas: \n");
    scanf("%f", &vendas);
    
    comiss = vendas * 0.04;
    sal_tot = sal_base + comiss;
    //fim operação
            
    printf("O funcionário tem um salário base de R$%0.2f, após receber mais R$%0.2f de comissão sobre as vendas, seu salário final é de R$%0.2f", sal_base, comiss, sal_tot);
    
    return 0;
}