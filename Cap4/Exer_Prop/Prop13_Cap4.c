#include <stdio.h>
#include <stdlib.h>

int main() {
    //variáveis
    float val_base, aument, val_fin;
   
    // coleta de dados
    printf("Calcular o aumento de preço de determinado produto: \n\n");
    printf("Digite o valor base do produto a ser calculado: \n");
    scanf("%f", &val_base);
   
    // inicio if-else
    if (val_base <= 50 && val_base > 0) {
        // operações
        aument = val_base * 0.05;
        val_fin = val_base + aument;
       
        if (val_fin <= 80) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Barato!", val_base, aument, val_fin);
        }
       
        else if (val_fin > 80 && val_fin <= 120) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Normal!", val_base, aument, val_fin);
        }
       
        else if (val_fin > 120 && val_fin <= 200) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Caro!", val_base, aument, val_fin);
        }
       
        else {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Muito Caro!", val_base, aument, val_fin);
        }
    }
   
    else if (val_base > 50 && val_base <= 100) {
        // operações
        aument = val_base * 0.1;
        val_fin = val_base + aument;
       
        if (val_fin <= 80) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Barato!", val_base, aument, val_fin);
        }
       
        else if (val_fin > 80 && val_fin <= 120) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Normal!", val_base, aument, val_fin);
        }
       
        else if (val_fin > 120 && val_fin <= 200) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Caro!", val_base, aument, val_fin);
        }
       
        else {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Muito Caro!", val_base, aument, val_fin);
        }
    }
   
    else if (val_base > 100) {
        // operações
        aument = val_base * 0.15;
        val_fin = val_base + aument;
       
        if (val_fin <= 80) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Barato!", val_base, aument, val_fin);
        }
       
        else if (val_fin > 80 && val_fin <= 120) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Normal!", val_base, aument, val_fin);
        }
       
        else if (val_fin > 120 && val_fin <= 200) {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Caro!", val_base, aument, val_fin);
        }
       
        else {
            printf("O produto que custava R$%0.2f, sofreu aumento de R$%0.2f, resultando em um valor final de R$%0.2f \nÉ considerado Muito Caro!", val_base, aument, val_fin);
        }
    }
   
    else {
        printf("Verifique o valor do produto digitado!");
    }
    // fim if-else
   
   
   
    return 0;
}