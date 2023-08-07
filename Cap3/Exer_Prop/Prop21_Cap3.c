    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float sal_min, hora_ext, hora_trab, sal_tot, sal_bruto, sal_ext, val_hr_trab, val_hr_ext;

        // Coleta de dados
        printf("Digite valor do salário mínimo: \n");
        scanf("%f", &sal_min);
        printf("Digite a quantia de horas trabalhadas: \n");
        scanf("%f", &hora_trab);
        printf("Digite a quantia de horas extras trabalhadas: \n");
        scanf("%f", &hora_ext);
        
        // Operações
        val_hr_trab = sal_min / 8;
        val_hr_ext = sal_min / 4;
        sal_bruto = hora_trab * val_hr_trab;
        sal_ext = hora_ext * val_hr_ext;
        sal_tot = sal_bruto + sal_ext;
        
        printf("O salário do funcionário é de: R$%0.2f \n", sal_tot);
        printf("Valor do salário mínimo: R$%0.2f\nHoras Trabalhadas: %0.2f \nHoras Extras: %0.2f \nSalário Bruto: R$%0.2f \nSalário Extra: R$%0.2f", sal_min, hora_trab, hora_ext, sal_bruto, sal_ext);
                
        
        return 0;
    }