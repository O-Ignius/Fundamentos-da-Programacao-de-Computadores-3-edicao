    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float sal_min, sal_func, qnt_in_sal_min;

        // Coleta de dados
        printf("Digite o valor do salário mínimo: \n");
        scanf("%f", &sal_min);
        printf("Digite o valor do salário recebido pelo funcionário: \n");
        scanf("%f", &sal_func);
        
        // Operações
        qnt_in_sal_min = sal_func / sal_min;
        
        printf("Uma vez que o salário mínimo seja de R$%0.2f, um funcionário que ganha R$%0.2f recebe %0.2f salários minimos", sal_min, sal_func, qnt_in_sal_min);
        
        
        return 0;
    }