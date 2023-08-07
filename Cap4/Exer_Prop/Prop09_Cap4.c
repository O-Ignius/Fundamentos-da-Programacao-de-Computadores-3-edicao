#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float sal_med, cred;

   // Coleta de dados
   printf("Calcular valor do crédito segundo saldo médio do último ano \n\n");
   printf("Digite o saldo médio \n");
   scanf("%f", &sal_med);


   // Inicio if-else
   if (sal_med > 400) {
      // operacoes
      cred = sal_med * 0.3;

      printf("Alguém que tinha saldo médio ano passado igual a R$%0.2f, terá direito a R$%0.2f de crédito", sal_med, cred);
   }

   else if (sal_med > 300 && sal_med <= 400) {
      // operacoes
      cred = sal_med * 0.25;

      printf("Alguém que tinha saldo médio ano passado igual a R$%0.2f, terá direito a R$%0.2f de crédito", sal_med, cred);
   }

   else if (sal_med > 200 && sal_med <= 300) {
      // operacoes
      cred = sal_med * 0.2;

      printf("Alguém que tinha saldo médio ano passado igual a R$%0.2f, terá direito a R$%0.2f de crédito", sal_med, cred);
   }
   
   else if (sal_med > 0 && sal_med <= 200) {
      // operacoes
      cred = sal_med * 0.1;

      printf("Alguém que tinha saldo médio ano passado igual a R$%0.2f, terá direito a R$%0.2f de crédito", sal_med, cred);
   }

   else {
      printf("Saldo negativo no ano anterior!");
   }

   // Fim if-else  
 

   return 0;
}