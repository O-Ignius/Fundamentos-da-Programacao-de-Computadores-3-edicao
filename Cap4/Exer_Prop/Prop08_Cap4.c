#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   // Variaveis
   float sal_base, sal_fin, aument;

   // Coleta de dados
   printf("Cálculo de aumento salárial: \n\n");
   printf("Digite o valor do salário base do funcionário: \n");
   scanf("%f", &sal_base);


   // Inicio if-else
   if (sal_base <= 300 && sal_base > 0) {
       aument = sal_base * 0.35;
       sal_fin = sal_base + aument;
       
       printf("O funcionário ganha R$%0.2f, logo, receberá aumento de 35%% (R$%0.2f), resultando em um salário final de R$%0.2f", sal_base, aument, sal_fin);
   }

   else if (sal_base > 300) {
       aument = sal_base * 0.15;
       sal_fin = sal_base + aument;
       
       printf("O funcionário ganha R$%0.2f, logo, receberá aumento de 15%% (R$%0.2f), resultando em um salário final de R$%0.2f", sal_base, aument, sal_fin);
   }
   
   else {
       printf("Salário inválido, verifique os valores digitados e tente novamente!");
   }
   // Fim if-else  
 

   return 0;
}