#include <stdio.h>
#include <stdlib.h>

int main() {
    //variáveis
    float sal_base, aument, sal_fin;
   
    // coleta de dados
    printf("Calcular novo salário de um funcionário: \n\n");
    printf("Digite o valor do salário inicial: \n");
    scanf("%f", &sal_base);
   
    // inicio if-else
    if (sal_base <= 300 && sal_base > 0) {
        // operações
        aument = sal_base * 0.5;
        sal_fin = sal_base + aument;
       
        printf("Um funcionário que receba um salário igual a R$%0.2f, tem aumento de R$%0.2f, resultando num salário final de R$%0.2f", sal_base, aument, sal_fin);
    }
   
    else if (sal_base > 300 && sal_base <= 500) {
        // operações
        aument = sal_base * 0.4;
        sal_fin = sal_base + aument;
       
        printf("Um funcionário que receba um salário igual a R$%0.2f, tem aumento de R$%0.2f, resultando num salário final de R$%0.2f", sal_base, aument, sal_fin);
    }
   
    else if (sal_base > 500 && sal_base <= 700) {
        // operações
        aument = sal_base * 0.3;
        sal_fin = sal_base + aument;
       
        printf("Um funcionário que receba um salário igual a R$%0.2f, tem aumento de R$%0.2f, resultando num salário final de R$%0.2f", sal_base, aument, sal_fin);
    }
   
    else if (sal_base > 700 && sal_base <= 800) {
        // operações
        aument = sal_base * 0.2;
        sal_fin = sal_base + aument;
       
        printf("Um funcionário que receba um salário igual a R$%0.2f, tem aumento de R$%0.2f, resultando num salário final de R$%0.2f", sal_base, aument, sal_fin);
    }
   
    else if (sal_base > 800 && sal_base <= 1000) {
        // operações
        aument = sal_base * 0.1;
        sal_fin = sal_base + aument;
       
        printf("Um funcionário que receba um salário igual a R$%0.2f, tem aumento de R$%0.2f, resultando num salário final de R$%0.2f", sal_base, aument, sal_fin);
    }
   
    else if (sal_base > 1000) {
        // operações
        aument = sal_base * 0.05;
        sal_fin = sal_base + aument;
       
        printf("Um funcionário que receba um salário igual a R$%0.2f, tem aumento de R$%0.2f, resultando num salário final de R$%0.2f", sal_base, aument, sal_fin);
    }
   
    else {
        printf("Verifique o salário digitado!");
    }
   
   
    // fim if-else
   
   
   
    return 0;
}