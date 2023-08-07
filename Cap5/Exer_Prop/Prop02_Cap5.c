#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float ingre_vend, val_ingre, lucro, despesas;
    
    //definidos
    despesas = 200;
    lucro = 0;
    
   
    for (val_ingre = 5.0; val_ingre >= 0; val_ingre = val_ingre - 0.5) {
        // operações
        if (val_ingre == 5.0) {
            ingre_vend = 120;
        }
        
        else {
            ingre_vend = ingre_vend + 26;
        }
        
        lucro = (ingre_vend * val_ingre) - despesas;
        
        
        //saida
        printf("\nCom o ingresso a R$%0.2f, os ingressos vendidos foram %0.0f \n", val_ingre, ingre_vend);
        printf("O lucro foi de R$%0.2f, com R$%0.2f de gastos já descontados \n", lucro, despesas);
    }
   
    //saida


    return 0;
}