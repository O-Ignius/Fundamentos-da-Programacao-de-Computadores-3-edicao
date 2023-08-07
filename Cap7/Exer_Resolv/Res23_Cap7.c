#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define lin 5
#define col 4

    //variaveis
    int i, j, vendas[lin] [col], vend[lin], vendsem[col], vendmens;


    //definidos
    vendmens = 0;
    
    
    //inicio programa
    //receber valores da matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite quanto o %d° vendedor vendeu na %d° semana do mês: \n", i + 1, j + 1);
            scanf("%d%*c", &vendas[i] [j]);
        }
    }
    
    //zerar vetores
    for (i = 0; i < lin; i++) {
        vend[i] = 0;
        vendsem[i] = 0;
    }
    
    
    //setar alguns valores
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            //valor de vendas de cada vendedor por mes
            vend[i] += vendas[i] [j];
            
            //valor mensal total
            vendmens += vendas[i] [j];
        }
    }
    
    for (i = 0; i < col; i++) {
        for (j = 0; j < lin; j++) {
            //valor de venda por semana
            vendsem[i] += vendas[j] [i];
        }
    }
    
    printf("\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", vendas[i] [j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < lin; i++) {
        printf("\nO valor de vendas mensal do %d° vendedor é: %d \n", i + 1, vend[i]);
    }
    
    for (i = 0; i < col; i++) {
        printf("\nO valor de vendas semanal total da %d° semana é: %d \n", i + 1, vendsem[i]);
    }
    
    printf("\nO valor de vendas mensal total é: %d \n", vendmens);
    
    //fim programa


    return 0;
}