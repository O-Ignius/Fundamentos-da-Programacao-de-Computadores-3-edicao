#include <stdio.h>
#include <stdlib.h>

int main() {
   // Variaveis
   float val_fabr, impos, distr, val_fin;

   // Coleta de dados
   printf("Calcular valor final de venda de um veículo \n\n");
   printf("Digite o valor de fabricação do veículo \n");
   scanf("%f", &val_fabr);


   // Inicio if-else
   if (val_fabr > 25000) {
      // operacoes
      impos = val_fabr * 0.2;
      distr = val_fabr * 0.15;
      val_fin = val_fabr + impos + distr;

      printf("Um carro com valor de fábrica igual a R$%0.2f, tem acréscimos de R$%0.2f de impostos e R$%0.2f do distribuidor. \nSeu valor final é de R$%0.2f", val_fabr, impos, distr, val_fin);
   }

   else if (val_fabr > 12000 && val_fabr <= 25000) {
      // operacoes
      impos = val_fabr * 0.15;
      distr = val_fabr * 0.1;
      val_fin = val_fabr + impos + distr;

      printf("Um carro com valor de fábrica igual a R$%0.2f, tem acréscimos de R$%0.2f de impostos e R$%0.2f do distribuidor. \nSeu valor final é de R$%0.2f", val_fabr, impos, distr, val_fin);
   }
   
   else if (val_fabr > 0 && val_fabr <= 12000) {
      // operacoes
      impos = val_fabr * 0;
      distr = val_fabr * 0.05;
      val_fin = val_fabr + impos + distr;

      printf("Um carro com valor de fábrica igual a R$%0.2f, tem acréscimos de R$%0.2f de impostos e R$%0.2f do distribuidor. \nSeu valor final é de R$%0.2f", val_fabr, impos, distr, val_fin);
   }

   else {
      printf("Reveja os valores digitados!");
   }

   // Fim if-else  
 

   return 0;
}