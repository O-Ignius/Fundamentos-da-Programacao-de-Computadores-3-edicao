#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float sal_min, impos, novo_sal;
    int vari;
   
    // Coleta de dados
    printf("Menu de opções: \n\n");
    printf("Selecione a opção desejada: \n1: Imposto \n2: Novo Salário \n3: Classificação\n\n");
    scanf("%d", &vari);
   
    // Inicio if-else
    if (vari == 1) {
        // Coleta de dados
        printf("Digite o valor do salário minimo! \n");
        scanf("%f", &sal_min);
       
        if (sal_min > 0 && sal_min < 500) {
            // Operações
            impos = sal_min * 0.05;
                   
            printf("O imposto sobre um salário de R$%0.2f é de R$%0.2f", sal_min, impos);
        }
       
        else if (sal_min >= 500 && sal_min <= 850) {
            // Operações
            impos = sal_min * 0.1;
                   
            printf("O imposto sobre um salário de R$%0.2f é de R$%0.2f", sal_min, impos);
        }
       
        else if (sal_min > 850) {
            // Operações
            impos = sal_min * 0.15;
                   
            printf("O imposto sobre um salário de R$%0.2f é de R$%0.2f", sal_min, impos);
        }
       
        else {
            printf ("Reveja o salário digitado!");
        }
    }
   
    else if (vari == 2) {
        // Coleta de dados
        printf("Digite o valor do salário minimo! \n");
        scanf("%f", &sal_min);
       
        if (sal_min > 0 && sal_min < 450) {
            // Operações
            novo_sal = sal_min + 100;
                   
            printf("O novo salário tendo um aumento de R$100 sobre o salário minimo é de R$%0.2f", novo_sal);
        }
       
        else if (sal_min < 750 && sal_min >= 450) {
            // Operações
            novo_sal = sal_min + 75;
                   
            printf("O novo salário tendo um aumento de R$75 sobre o salário minimo é de R$%0.2f", novo_sal);
        }
       
        else if (sal_min >= 750 && 1500 >= sal_min) {
            // Operações
            novo_sal = sal_min + 50;
                   
            printf("O novo salário tendo um aumento de R$50 sobre o salário minimo é de R$%0.2f", novo_sal);
        }
       
        else if (sal_min > 1500) {
            // Operações
            novo_sal = sal_min + 25;
                   
            printf("O novo salário tendo um aumento de R$25 sobre o salário minimo é de R$%0.2f", novo_sal);
        }
       
        else {
            printf ("Reveja o salário digitado!");
        }
    }
   
    else if (vari == 3) {
        // Coleta de dados
        printf("Digite o valor do salário minimo! \n");
        scanf("%f", &sal_min);
       
        if (sal_min <= 700 && sal_min > 0) {      
            printf("O profissional ganha R$%0.2f, logo é Mal Remunerado", sal_min);
        }
       
        else if (sal_min > 700) {
            printf("O profissional ganha R$%0.2f, logo é Bem Remunerado", sal_min);
        }
       
        else {
            printf ("Reveja o salário digitado!");
        }
    }
   
    else {
        printf("\nOpção inválida, tente denovo!");
    }
    // Fim if-else
   
   
    return 0;
}