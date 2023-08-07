#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float escada, altura, alt_prego, dist_escada, base_pitag;
    printf("Qual o tamanho da escada? \n");
    scanf("%f", &escada);
    printf("Qual a altura a ser alcançada? \n");
    scanf("%f", &alt_prego);
    
    altura = alt_prego + 1;
    base_pitag = pow(escada , 2) - pow(altura , 2);
    dist_escada = sqrt(base_pitag);
    // Fim operações
    
    
    if (altura < escada && base_pitag >= 0) {
       printf("Usando uma escada de %0.2f, para chegar a %0.2f, precisa-se posicionar a escada a %0.2f da parede", escada, alt_prego, dist_escada);
    }
    
    else{
       printf("precisa de uma escada maior");
    }
    
    
    return 0;
}