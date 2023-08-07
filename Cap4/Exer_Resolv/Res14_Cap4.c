#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

   float sal_in, sal_fin, bon, aux_esc;
   
   // Coleta de dados
   printf("Salário com Acréscimos: \n\n");
   printf("Qual o salário inicial? \n");
   scanf("%f", &sal_in);

   // Inicio if-else
   if (sal_in <= 600 && sal_in > 0) {
      if (sal_in <= 500) {
          // Operações
          bon = sal_in * 0.05;
          aux_esc = 150;
          sal_fin = sal_in + bon + aux_esc;
          
          printf("Alguém que ganhe R$%0.2f, ganhará uma bonificação de R$%0.2f e um auxilio-escola de R$%0.2f, ganhando no total R$%0.2f", sal_in, bon, aux_esc, sal_fin);
  
       }
    
       else {
          // Operações
          bon = sal_in * 0.12;
          aux_esc = 150;
          sal_fin = sal_in + bon + aux_esc;
          
          printf("Alguém que ganhe R$%0.2f, ganhará uma bonificação de R$%0.2f e um auxilio-escola de R$%0.2f, ganhando no total R$%0.2f", sal_in, bon, aux_esc, sal_fin);
  
       }
   }
   
   else if (sal_in > 600 && sal_in > 0) {
       if (sal_in <= 1200) {
          // Operações
          bon = sal_in * 0.12;
          aux_esc = 100;
          sal_fin = sal_in + bon + aux_esc;
          
          printf("Alguém que ganhe R$%0.2f, ganhará uma bonificação de R$%0.2f e um auxilio-escola de R$%0.2f, ganhando no total R$%0.2f", sal_in, bon, aux_esc, sal_fin);
        }
    
        else {
           // Operações
           bon = sal_in * 0;
           aux_esc = 100;
           sal_fin = sal_in + bon + aux_esc;
          
           printf("Alguém que ganhe R$%0.2f, ganhará uma bonificação de R$%0.2f e um auxilio-escola de R$%0.2f, ganhando no total R$%0.2f", sal_in, bon, aux_esc, sal_fin);
  
        }
   }

   else {
      printf("Reveja o salário digitado!");
   }


   return 0;
}