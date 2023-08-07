    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float salario, cont1, cont2, cont1_incl_juros, cont2_incl_juros, sal_final;

        // Coleta de dados
        printf("Digite o salário ganho: \n");
        scanf("%f", &salario);
        printf("Digite o valor de cada conta em ordem: \n");
        scanf("%f %f", &cont1, &cont2);
        
        // Operações
        cont1_incl_juros = cont1 * 1.02;
        cont2_incl_juros = cont2 * 1.02;       
        sal_final = salario - (cont1_incl_juros + cont2_incl_juros);
        
        printf("Após receber um salário de R$%0.2f, pagar 2 contas no valor de R$%0.2f e R$%0.2f, restou R$%0.2f", salario, cont1_incl_juros, cont2_incl_juros, sal_final);
                
        
        return 0;
    }