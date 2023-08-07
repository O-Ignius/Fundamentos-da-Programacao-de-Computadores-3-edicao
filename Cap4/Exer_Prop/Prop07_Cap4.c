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
   if (sal_base < 500 && sal_base > 0) {
       aument = sal_base * 0.3;
       sal_fin = sal_base + aument;
       
       printf("O funcionário ganha R$%0.2f, logo, receberá aumento de 30%% (R$%0.2f), resultando em um salário final de R$%0.2f", sal_base, aument, sal_fin);
   }

   else if (sal_base >= 500) {
       printf("O salário do funcionário é maior que R$500.00, logo, não tem direito a aumento!");
   }
   
   else {
       printf("Salário inválido, verifique os valores digitados e tente novamente!");
   }
   // Fim if-else  
 

   return 0;
}