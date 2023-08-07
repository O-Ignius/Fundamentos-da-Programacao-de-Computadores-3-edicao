#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float l1, l2, l3;
   
    // Coleta de dados
    printf("Pode ser um triângulo? \n\n");
    printf("Digite os valores dos 3 lados: \n");
    scanf("%f %f %f", &l1, &l2, &l3);
    
   
    // Inicio if-else
    if ((l1 < (l2 + l3) && l2 < (l1 + l3) && l3 < (l2 + l1)) && (l1 != l2 && l2 != l3 && l3 != l1)) {
        printf("É um triângulo Escaleno!");
    }
    
    else if ((l1 < (l2 + l3) && l2 < (l1 + l3) && l3 < (l2 + l1)) && ((l1 == l2 && l3 != l1) || (l2 == l3 && l1 != l2) || (l3 == l1 && l2 != l3))) {
        printf("É um triângulo Isósceles!");
    }
    
    else if ((l1 < (l2 + l3) && l2 < (l1 + l3) && l3 < (l2 + l1)) && (l1 == l2 && l2 == l3 && l3 == l1)) {
        printf("É um triângulo Equilátero!");
    }
    
    else {
        printf("Não é um triângulo");
    }
    // Fim if-else
   
   
    return 0;
}