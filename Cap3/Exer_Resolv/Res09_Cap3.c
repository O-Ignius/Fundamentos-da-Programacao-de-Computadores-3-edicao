#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura, area;
    // Coleta de dados
    printf("Valor da base: \n");
    scanf("%f", &base);
    printf("Valor da altura \n");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("Um triângulo de base = %0.3f e altura = %0.3f tem uma área de %0.3f", base, altura, area);
    // Fim operação
    
    return 0;
}