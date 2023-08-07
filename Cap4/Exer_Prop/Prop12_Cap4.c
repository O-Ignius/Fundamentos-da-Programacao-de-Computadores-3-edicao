#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float sal_brut, impos, gratif, sal_fin;

   // Coleta de dados
   printf("Calcular valor do salário final\n\n");
   printf("Digite o valor do salário bruto: \n");
   scanf("%f", &sal_brut);


   // Inicio if-else
   if (sal_brut > 900) {
      // operacoes
      impos = sal_brut * 0.07;
      gratif = 35;
      sal_fin = sal_brut + gratif - impos;

      printf("Um funcionário que receba R$%0.2f, pagará R$%0.2f de impostos e receberá gratificação de R$35.00, resultando em um salário final de R$%0.2f", sal_brut, impos, sal_fin);
   }

   else if (sal_brut >= 600 && sal_brut <= 900) {
      // operacoes
      impos = sal_brut * 0.07;
      gratif = 50;
      sal_fin = sal_brut + gratif - impos;

      printf("Um funcionário que receba R$%0.2f, pagará R$%0.2f de impostos e receberá gratificação de R$50.00, resultando em um salário final de R$%0.2f", sal_brut, impos, sal_fin);
   }
   
   else if (sal_brut > 350 && sal_brut < 600) {
      // operacoes
      impos = sal_brut * 0.07;
      gratif = 75;
      sal_fin = sal_brut + gratif - impos;

      printf("Um funcionário que receba R$%0.2f, pagará R$%0.2f de impostos e receberá gratificação de R$75.00, resultando em um salário final de R$%0.2f", sal_brut, impos, sal_fin);
   }

   else if (sal_brut > 0 && sal_brut <= 350) {
      // operacoes
      impos = sal_brut * 0.07;
      gratif = 100;
      sal_fin = sal_brut + gratif - impos;

      printf("Um funcionário que receba R$%0.2f, pagará R$%0.2f de impostos e receberá gratificação de R$100.00, resultando em um salário final de R$%0.2f", sal_brut, impos, sal_fin);
   }

   else {
      printf("Reveja os valores digitados!");
   }

   // Fim if-else  
 

   return 0;
}