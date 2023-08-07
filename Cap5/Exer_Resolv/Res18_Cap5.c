#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float val, quad, cub, raiz;
    char fim;
    
    //definidos
    

    // o que faz:
    printf("Número ao quadrado, ao cubo, raiz \n\n");
    
    //operações

    
    
    // repetição
    do {
        //coleta
        printf("\nQual o número? \n");
        scanf("%f%*c", &val);
        
        //operações
        quad = pow(val , 2);
        cub = pow(val , 3);
        raiz = sqrt(val);
        
        //saida
        printf("Número %0.2f \nquadrado = %0.2f \nCubo = %0.2f \nRaiz quadrada = %0.4f \n", val, quad, cub, raiz);
        
        //parada?
        printf("\nEncerrar? S: Sim    N: Não \n");
        scanf("%c%*c", &fim);
        
        if (fim == 's' || fim == 'S') {
            break;
        }
    }
    while (val > 0);
    
    
    //operações
    
    // saida
    
    return 0;
}