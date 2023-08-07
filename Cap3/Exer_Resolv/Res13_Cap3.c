#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float pe, jarda, milha, metro;
    // Coleta de dados
    printf("Digite um em pés a ser convertido: \n");
    scanf("%f", &pe);
    jarda = 3.0 * pe;
    milha = 1.760 * jarda;
    metro = 3.2808 * pe;
    // Fim operações
    
    if (pe >= 0) {
    printf("O valor inicial de %0.3f pés é, em jardas = %0.3f ; em milhas = %0.3f ; e em metros = %0.3f", pe, jarda, milha, metro);
    }
    else {
    printf("Distância negativa não da patrão!");
    }
    // Fim if-else
    
    return 0;
}