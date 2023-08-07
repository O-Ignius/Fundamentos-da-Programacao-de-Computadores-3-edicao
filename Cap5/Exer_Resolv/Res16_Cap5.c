#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float base, altura, area;
    
    //definidos
    

    // o que faz:
    printf("Área de triângulos \n\n");
    
    
    
    // repetição
    do {
        printf("Digite a base do triângulo: \n");
        scanf("%f%*c", &base);
    }
    while (base <= 0);
    
    do {
        printf("Digite a altura do triângulo: \n");
        scanf("%f%*c", &altura);
    }
    while (altura <= 0);
    
    
    //operações
    area = (base * altura) / 2;
    
    // saida
    printf("Um triângulo de base %0.2f, altura %0.2f, tem %0.2f de área", base, altura, area);
    
    
    return 0;
}