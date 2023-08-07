#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float num1, num2, num3;

   // Coleta de dados
   printf("Qual o maior de tres números \n\n");
   printf("Digite os 3 números \n");
   scanf("%f %f %f", &num1, &num2, &num3);


   // Inicio if-else
   if (num1 > num2 && num2 > num3) {
      printf("%0.2f maior que %0.2f maior que %0.2f", num1, num2, num3);
   }

   else if (num1 > num3 && num2 < num3) {
      printf("%0.2f maior que %0.2f maior que %0.2f", num1, num3, num2);
   }

   else if (num2 > num3 && num3 > num1) {
      printf("%0.2f maior que %0.2f maior que %0.2f", num2, num3, num1);
   }
   
   else if (num2 > num1 && num1 > num3) {
      printf("%0.2f maior que %0.2f maior que %0.2f", num2, num1, num3);
   }
   
   else if (num3 > num1 && num1 > num2) {
      printf("%0.2f maior que %0.2f maior que %0.2f", num3, num1, num2);
   }

   else {
      printf("%0.2f maior que %0.2f maior que %0.2f", num3, num2, num1);
   }

   // Fim if-else  
 

   return 0;
}