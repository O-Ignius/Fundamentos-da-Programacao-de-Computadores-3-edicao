#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float sal_min, hr_trab, hr_ext, val_hr_ext, val_hr_trab, depend, sal_bruto, sal_liq, sal_tot, impos, gratif;
   
    // Coleta de dados
    printf("Cálculo do salário final do funcionário: \n\n");
    printf("Digite o valor do salário minimo: \n");
    scanf("%f", &sal_min);
    printf("Digite a quantia de horas trabalhadas: \n");
    scanf("%f", &hr_trab);
    printf("Digite a quantia de horas extras: \n");
    scanf("%f", &hr_ext);
    printf("Digite o número de dependentes do funcionário: \n");
    scanf("%f", &depend);
    
    // Operações
    val_hr_trab = sal_min / 5;
    val_hr_ext = val_hr_trab + (val_hr_trab * 0.5);
    sal_bruto = (depend * 32) + (hr_trab * val_hr_trab) + (hr_ext * val_hr_ext);
    
   
    // Inicio if-else
    if (sal_bruto < 200) {
        // Operações
        gratif = 100;
        sal_tot = sal_bruto + gratif;
        
        printf("O salário a ser recebido pelo funcionário é de R$%0.2f", sal_tot);
    }
    
    else if (sal_bruto >= 200 && sal_bruto <= 500) {
        // Operações
        impos = sal_bruto * 0.1;
        sal_liq = sal_bruto - impos;
        
        if (sal_liq <=350){
            // Operações
            gratif = 100;
            sal_tot = sal_liq + gratif;

            printf("O salário a ser recebido pelo funcionário é de R$%0.2f", sal_tot);
            }
        
        else {
            // Operações
            gratif = 50;
            sal_tot = sal_liq + gratif;

            printf("O salário a ser recebido pelo funcionário é de R$%0.2f", sal_tot);
        }
    }
    
    else if (sal_bruto > 500) {
        // Operações
        impos = sal_bruto * 0.2;
        sal_liq = sal_bruto - impos;
        gratif = 50;
        sal_tot = sal_liq + gratif;
        
        printf("O salário a ser recebido pelo funcionário é de R$%0.2f", sal_tot);
    }
    
    else {
        printf("Revise o salário minimo digitado");
    }
    // Fim if-else
   
   
    return 0;
}