#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float num1, num2;

   // Coleta de dados
   printf("Qual o menor de dois números \n\n");
   printf("Digite as dois números \n");
   scanf("%f %f", &num1, &num2);


   // Inicio if-else
   if (num1 > num2) {
      printf("%0.2f maior que %0.2f", num1, num2);
   }

   else {
      printf("%0.2f maior que %0.2f", num2, num1);
   }

   // Fim if-else  
 

   return 0;
}