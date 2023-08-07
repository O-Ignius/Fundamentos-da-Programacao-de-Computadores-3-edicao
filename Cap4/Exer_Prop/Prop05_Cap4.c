#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float num1, num2, media, dife, prod, divis;
   int vari;

   // Coleta de dados
   printf("Algumas operações com 2 números: \n\n");
   printf("O que fazer? \n1: Média entre 2 números \n2: Diferença do maior pelo menor \n3: Produto entre 2 números \n4: Divisão do primeiro pelo segundo \n");
   scanf("%d", &vari);


   // Inicio if-else
   // media
   if (vari == 1) {
       // Coleta de dados
       printf("Digite os 2 números: \n");
       scanf("%f %f", &num1, &num2);
       
       // operações
       media = (num1 + num2) / 2;
       
       printf("\nA média entre %0.2f e %0.2f é igual a %0.2f", num1, num2, media);
   }

   //subtração maior pelo menor
   else if (vari == 2) {
       // Coleta de dados
       printf("Digite os 2 números: \n");
       scanf("%f %f", &num1, &num2);

       if (num1 > num2) {

            // operações
            dife = num1 - num2;

            printf("\nA diferença entre %0.2f e %0.2f é igual a %0.2f", num1, num2, dife);
       }
       
       else {

            // operações
            dife = num2 - num1;

            printf("\nA diferença entre %0.2f e %0.2f é igual a %0.2f", num2, num1, dife);
       }
   }

   else if (vari == 3) {
            // Coleta de dados
            printf("Digite os 2 números: \n");
            scanf("%f %f", &num1, &num2);

            // operações
            prod = num1 * num2;

            printf("\nA multiplicação entre %0.2f e %0.2f é igual a %0.2f", num1, num2, prod);
   }
   
   else if (vari == 4) {
       // Coleta de dados
        printf("Digite o dividendo: \n");
        scanf("%f", &num1);
        printf("Digite o divisor: \n");
        scanf("%f", &num2);
            
       if (num2 != 0) {
           // Coleta de dados
            printf("Digite o dividendo: \n");
            scanf("%f", &num1);
            printf("Digite o divisor: \n");
            scanf("%f", &num2);

            // operações
            divis = num1 / num2;

            printf("\nA divisão entre %0.2f e %0.2f é igual a %0.2f", num1, num2, divis);
       }
        
       else {
           printf("\nImpossível dividir por zero até o presente momento!");
       }
   }

   else {
      printf("Escolha inválida, tente novamente!");
   }

   // Fim if-else  
 

   return 0;
}