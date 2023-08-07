#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float n1, n2, n3, n4, media;

   // Coleta de dados
   printf("Cálcular média de 4 notas \n\n");
   printf("Digite as quatro notas\n");
   scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
   
   
   // Operações
   media = (n1 + n2 + n3 + n4) / 4;

   // Inicio if-else
   if (media >= 7) {
      printf("A média foi de %0.2f, Logo o aluno foi Aprovado", media);
   }

   else {
      printf("A média foi de %0.2f, Logo o aluno foi Reprovado", media);
   }
   // Fim if-else  
 

   return 0;
}