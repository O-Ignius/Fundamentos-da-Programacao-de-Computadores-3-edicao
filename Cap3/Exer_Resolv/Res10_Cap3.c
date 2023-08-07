#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, const_pi, area;
    // Coleta de dados
    printf("Valor do raio da circunferência: \n");
    scanf("%f", &raio);
    const_pi = 3.141592;
    area = pow(raio , 2) * const_pi;
    printf("Um círculo de raio = %0.3f tem uma área de %0.3f", raio, area);
    // Fim operação
    
    return 0;
}