#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float ang, parede, escada, cons_pi, sen, ang_rad;
    // Coleta de dados
    printf("Digite a altura da parede: \n");
    scanf("%f", &parede);
    printf("Digite o ângulo |Em GRAUS| da escada: \n");
    scanf("%f", &ang);
    cons_pi = 3.141592;
    ang_rad = (ang * cons_pi) / 180;
    sen = sin(ang_rad);
    escada = parede / sen;
    
    // Fim operações
    printf("Em uma escada ângulo de %0.2f°, encostada em uma parede de %0.2f, a altura da escada é de %0.2f", ang, parede, escada);
    
    return 0;
}