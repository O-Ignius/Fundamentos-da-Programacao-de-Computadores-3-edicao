#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   // Variaveis
   float num1, num2, cub1, cub2, quad1, quad2, elev1, elev2;
   int vari;

   // Coleta de dados
   printf("Algumas operações com 2 números: \n\n");
   printf("O que fazer? \n1: O primeiro número elevado ao segundo \n2: Raíz quadrada de dois números \n3: Raíz cúbica de dois números \n");
   scanf("%d", &vari);


   // Inicio if-else
   // um elevado ao outro
   if (vari == 1) {
       // Coleta de dados
       printf("Digite os 2 números: \n");
       scanf("%f %f", &num1, &num2);
       
       // operações
       elev1 = pow(num1 , num2);
       elev2 = pow(num2 , num1);
       
      printf("\n%0.2f elevado a %0.2f é igual a %0.2f", num1, num2, elev1);
      printf("\n%0.2f elevado a %0.2f é igual a %0.2f", num2, num1, elev2);
   }

   //raiz quadrada
   else if (vari == 2) {
        // Coleta de dados
        printf("Digite os 2 números: \n");
        scanf("%f %f", &num1, &num2);
            
        if (num1 >= 0 && num2 >= 0) {
            // operações
            quad1 = sqrt(num1);
            quad2 = sqrt(num2);

            printf("\nA raíz quadrada de %0.2f é %0.2f \nA raíz quadrada de %0.2f é %0.2f", num1, quad1, num2, quad2);
        }
       
        else {
            printf("Um dos números é negativo, ou seja, não possui raíz quadrada dentro do intervalo dos números reais!");
        }
   }

   //raiz cubica
   else if (vari == 3) {
        // Coleta de dados
        printf("Digite os 2 números: \n");
        scanf("%f %f", &num1, &num2);

        // operações
        cub1 = cbrt(num1);
        cub2 = cbrt(num2);

        printf("\nA raíz cúbica de %0.2f é %0.2f \nA raíz cúbica de %0.2f é %0.2f", num1, cub1, num2, cub2);
   }

   else {
      printf("Escolha inválida, tente novamente!");
   }

   // Fim if-else  
 

   return 0;
}