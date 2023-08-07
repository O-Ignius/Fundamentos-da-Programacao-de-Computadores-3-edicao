#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    float sal, impos, aument;
    int vari;
   
   
    printf("Selecione a opção \n\n");
   
    do {
        //coleta de variaveis
        printf("\n1: Imposto \n2: Novo salário \n3: Classificação \n4: Finalizar programa \n");
        scanf("%d", &vari);
       
        //fim
        if (vari == 4) {
            continue;
        }
       
        //para Imposto
        else if (vari == 1) {
            //coleta de dados
            printf("Digite o salário do funcionário \n");
            scanf("%f", &sal);
           
            //mudança de valor de imposto
            if (sal < 500) {
                impos = sal * 0.05;
            }
           
            else if (sal >= 500 && sal <= 850) {
                impos = sal * 0.1;
            }
           
            else if (sal > 850) {
                impos = sal * 0.15;
            }
           
            //saida
            printf("\nO valor do imposto é R$%0.2f sobre o salário R$%0.2f \n", impos, sal);
        }
       
        //Para novo salário
        else if (vari == 2) {
            //coleta de dados
            printf("Digite o salário do funcionário \n");
            scanf("%f", &sal);
           
            if (sal < 450) {
                aument = 100;
            }
           
            else if (sal >= 450 && sal < 750) {
                aument = 75;
            }
           
            else if (sal >= 750 && sal <= 1500) {
                aument = 50;
            }
           
            else if (sal > 1500) {
                aument = 25;
            }
           
            //operações
            sal = sal + aument;
           
            //saida
            printf("\nO salário final é de R$%0.2f, pois teve um aumento de R$%0.2f sobre o valor inicial \n", sal, aument);
        }
       
        //Para classificação
        else if (vari == 3) {
            //coleta de dados
            printf("Digite o salário do funcionário \n");
            scanf("%f", &sal);
       
            if (sal <= 700) {
                printf("\nO funcionário é mal remunerado! \n");
            }
           
            else if (sal > 700) {
                printf("\nO funcionário é bem remunerado! \n");
            }
        }
    }
    while (vari != 4);
   

    return 0;
}