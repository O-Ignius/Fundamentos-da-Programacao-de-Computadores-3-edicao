#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float sal_at, aument, sal_fin;

   // Coleta de dados
   printf("Calcular valor de aumento de salário \n\n");
   printf("Digite o valor do salário atual: \n");
   scanf("%f", &sal_at);


   // Inicio if-else
   if (sal_at > 900) {
      // operacoes
      aument = sal_at * 0;
      sal_fin = sal_at + aument;

      printf("Um funcionário que receba R$%0.2f, terá aumento de R$%0.2f, resultando em um salário final de R$%0.2f", sal_at, aument, sal_fin);
   }

   else if (sal_at >= 600 && sal_at <= 900) {
      // operacoes
      aument = sal_at * 0.05;
      sal_fin = sal_at + aument;

      printf("Um funcionário que receba R$%0.2f, terá aumento de R$%0.2f, resultando em um salário final de R$%0.2f", sal_at, aument, sal_fin);
   }
   
   else if (sal_at > 300 && sal_at < 600) {
      // operacoes
      aument = sal_at * 0.1;
      sal_fin = sal_at + aument;

      printf("Um funcionário que receba R$%0.2f, terá aumento de R$%0.2f, resultando em um salário final de R$%0.2f", sal_at, aument, sal_fin);
   }

   else if (sal_at > 0 && sal_at <= 300) {
      // operacoes
      aument = sal_at * 0.15;
      sal_fin = sal_at + aument;

      printf("Um funcionário que receba R$%0.2f, terá aumento de R$%0.2f, resultando em um salário final de R$%0.2f", sal_at, aument, sal_fin);
   }

   else {
      printf("Reveja os valores digitados!");
   }

   // Fim if-else  
 

   return 0;
}