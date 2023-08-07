#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define mes 12
#define sem 4
    
    //variaveis
    int i, j, vendas[mes] [sem], totsem[sem], totmen, totan;
    
    //setar
    totmen = 0;
    totan = 0;
    
    
    //coletar valores vetor/matriz
    for (i = 0; i < mes; i++) {
        for (j = 0; j < sem; j++) {
            printf("\nDigite quantia de vendas do produto na %d° semana do %d° mês \n", j + 1, i + 1);
            scanf("%d%*c", &vendas[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nVendas do produto em cada semana do mês: \n");
    for (i = 0; i < mes; i++) {
        for (j = 0; j < sem; j++) {
            printf("|  %d  ", vendas[i] [j]);
        }
        printf("\n");
    }
    
    //zerar vetor totsem
    for (i = 0; i < sem; i++) {
        totsem[i] = 0;
    }
    
    //total vendido por semana
    for (i = 0; i < sem; i++) {
        for (j = 0; j < mes; j++) {
            totsem[i] += vendas[j] [i];
        }
    }
    
    
    //saida vendas semanais
    for (i = 0; i < sem; i++) {
        printf("\nQuantia total vendida na %d° semana: %d \n", i + 1, totsem[i]);
    }
    
    
    //total vendido por mês
    printf("\nVendas do produto em cada semana do mês: ");
    for (i = 0; i < mes; i++) {
        totmen = 0;
        
        for (j = 0; j < sem; j++) {
            totmen += vendas[i] [j];
            totan += vendas[i] [j];
        }
        
        //saida vendas mensais
        printf("\nVendas no %d° mês: %d \n", i + 1, totmen);
    }
    
    
    
    //saida vendas anuais
    printf("\nVenda total no ano: %d \n", totan);
    
    
    return 0;
}