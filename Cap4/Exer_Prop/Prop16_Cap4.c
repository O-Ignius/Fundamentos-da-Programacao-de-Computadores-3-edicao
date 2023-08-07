#include <stdio.h>
#include <stdlib.h>

int main() {
    //variáveis
    float val_prod, val_fin, desc;
   
    // coleta de dados
    printf("Calcular valor de desconto sobre mercadoria: \n\n");
    printf("Qual o valor do produto a ser calculado? \n");
    scanf("%f", &val_prod);
   
   
    // inicio if-else
    if (val_prod > 0 && val_prod <= 30) {
        // operações
        desc = val_prod * 0;
        val_fin = val_prod - desc;
       
        printf("Um produto com valor inicial de R$%0.2f, teve desconto de R$%0.2f, passando a custar R$%0.2f", val_prod, desc, val_fin);
    }
   
    else if (val_prod > 30 && val_prod <= 100) {
        // operações
        desc = val_prod * 0.1;
        val_fin = val_prod - desc;
       
        printf("Um produto com valor inicial de R$%0.2f, teve desconto de R$%0.2f, passando a custar R$%0.2f", val_prod, desc, val_fin);
    }
   
    else if (val_prod > 100) {
        // operações
        desc = val_prod * 0.15;
        val_fin = val_prod - desc;
       
        printf("Um produto com valor inicial de R$%0.2f, teve desconto de R$%0.2f, passando a custar R$%0.2f", val_prod, desc, val_fin);
    }
   
    else {
        printf("Verifique os valores digitados e tente novamente!");
    }
    // fim if-else
   
   
    return 0;
}