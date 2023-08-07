#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float val_hr, sal_bruto, sal_liq_mas, sal_liq_fem, sal_fem_tot, sal_mas_tot;
    int cod, horas, f, m;
    char sex;
    
    //definidos
    val_hr = 30;
    sal_fem_tot = 0;
    sal_mas_tot = 0;
    f = 0;
    m = 0;

    // o que faz:
    printf("Salário dos professores: \n\n");
    


    //operações



    // repetição
    do {
        // coleta de dados
        printf("\nDigite o código do funcionário: \n");
        scanf("%d%*c", &cod);
        printf("Digite o número de horas trabalhadas: \n");
        scanf("%d%*c", &horas);
        printf("Digite o sexo do funcionário: M: Masculino      F: Feminino \n");
        scanf("%c%*c", &sex);
        
        // operações
        sal_bruto = horas * val_hr;
        
        // Sexo
        if (sex == 'm' || sex == 'M') {
            //operações
            sal_liq_mas = sal_bruto - (sal_bruto * 0.1);         
            sal_mas_tot = sal_mas_tot + sal_liq_mas;
            m++;
            
            //saida
            printf("O salário bruto do funcionário #%d é de R$%0.2f, o salário líquido é de R$%0.2f \n", cod, sal_bruto, sal_liq_mas);
        }
        
        else if (sex == 'f' || sex == 'F') {
            //operações
            sal_liq_fem = sal_bruto - (sal_bruto * 0.05);
            sal_fem_tot = sal_fem_tot + sal_liq_fem;
            f++;
            
            //saida
            printf("O salário bruto do funcionário #%d é de R$%0.2f, o salário líquido é de R$%0.2f \n", cod, sal_bruto, sal_liq_fem);
        }       
    }
    while (cod != 99999);

    //operações
    sal_fem_tot = sal_fem_tot / f;
    sal_mas_tot = sal_mas_tot / m;

    // saida
    printf("\nMédia do salário minimo dos funcionário: \nMasculinos: R$%0.2f \nFemininos: R$%0.2f", sal_liq_mas, sal_fem_tot);
    
    return 0;
}