#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float n1, n2, media;

   // Coleta de dados
   printf("Calcular média de 2 notas e definir o que acontece com o aluno \n\n");
   printf("Digite as duas notas\n");
   scanf("%f %f", &n1, &n2);
   
   
   // Operações
   media = (n1 + n2) / 2;

   // Inicio if-else
   if (media >= 0 && media < 3) {
      printf("Aluno reprovado pois sua média foi de %0.2f", media);
   }

   else if (media >= 3 && media < 7) {
      printf("Aluno precisa ser submetido a um teste pois sua média foi de %0.2f", media);
   }

   else if (media >= 7) {
      printf("Aluno aprovado pois sua média foi de %0.2f", media);
   }

   else {
      printf("Verifique as notas digitadas!");
   }

   // Fim if-else  
 

   return 0;
}