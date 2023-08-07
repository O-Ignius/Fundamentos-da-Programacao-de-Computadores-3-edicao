#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float nasc, ano, idade, idade_2050;
    // Coleta de dados
    printf("Digite o ano de nascimento da pessoa: \n");
    scanf("%f", &nasc);
    printf("Digite o ano atual: \n");
    scanf("%f", &ano);
    idade = ano - nasc;
    // Fim operações fora if-else
    
    if (ano > 2050) {
    idade_2050 = nasc - ano;
    printf("Alguém que tenha nascido em %0.0f tem atualmente aproximademente %0.0f anos, em 2050 terá aproximadamente %0.0f anos", nasc, idade, idade_2050);
    }
    else {
     idade_2050 = ano - nasc;
    printf("Alguém que tenha nascido em %0.0f tem atualmente aproximademente %0.0f anos, em 2050 terá aproximadamente %0.0f anos", nasc, idade, idade_2050);
    }
    // Fim if-else
    
    return 0;
}