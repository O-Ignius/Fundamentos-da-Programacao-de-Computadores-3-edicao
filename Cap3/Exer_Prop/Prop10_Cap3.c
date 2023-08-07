#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lado1, lado2, area;
    
    // Coleta de dados
    printf("Digite os 2 lados do quadrado a se calcular a área: \n");
    scanf("%f %f", &lado1, &lado2);
    
    // Operações
    area = lado1 * lado2;
            
    printf("um quadrado de lados %0.2f e %0.2f, tem uma área igual a %0.2f", lado1, lado2, area);
    
    
    return 0;
}