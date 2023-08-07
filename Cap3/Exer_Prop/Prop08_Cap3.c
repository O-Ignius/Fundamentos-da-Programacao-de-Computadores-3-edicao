#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float peso, peso_g;
    printf("Digite o peso inicial: \n");
    scanf("%f", &peso);
    
    peso_g = peso * 1000;
    //fim operação
            
    printf("Alguem pesando %0.2fKG pesa, em gramas, %0.2f g", peso, peso_g);
    
    return 0;
}