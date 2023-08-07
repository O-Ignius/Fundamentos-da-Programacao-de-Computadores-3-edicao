#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float peso, peso_mais, peso_menos;
    printf("Digite o peso inicial: \n");
    scanf("%f", &peso);
    
    peso_mais = peso * 1.15;
    peso_menos = peso * 0.8;
    //fim operação
            
    printf("Alguem pesando %0.2f, caso engorde 15%% passará a pesar %0.2f, caso emagreça 20%% passará a pesar %0.2f", peso, peso_mais, peso_menos);
    
    return 0;
}