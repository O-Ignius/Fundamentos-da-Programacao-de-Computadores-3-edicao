#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");
   
   
    // Variáveis
    float vet[8], negat[8], posit[8];
    int i, neg, pos, ciclo[2] = {0 , 0};
   
    //definidos
    pos = 0;
    neg = 0;
   
   
    // inicio aplicação
    for (i = 0; i < 8; i++) {
        // coleta de dados
        printf("Digite um número: \n");
        scanf("%f", &vet[i]);
       
        if (vet[i] >= 0) {
            posit[pos] = vet[i];
            pos++;
            ciclo[0]++;
        }
       
        else if (vet[i] < 0) {
            negat[neg] = vet[i];
            neg++;
            ciclo[1]++;
        }
       
       
       
    }
   
    printf("\nPositivos: \n");
    //positivos
    for (pos = 0; pos < ciclo[0]; pos++) {
        printf("|  %0.2f  |  ", posit[pos]);
    }
   
    printf("\nNegativos: \n");
    //negativos
    for (neg = 0; neg < ciclo[1]; neg++) {
        printf("|  %0.2f  |  ", negat[neg]);
    }
    // fim aplicação


    return 0;
}