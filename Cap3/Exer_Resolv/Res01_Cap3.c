#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d, soma;
    // Coleta de dados
    printf("Para realizar a soma, digite 4 números inteiros! \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    soma = a + b + c + d;
    printf("a soma de %0.0f + %0.0f + %0.0f + %0.0f = %0.0f", a, b, c, d, soma);
    // Fim operação
    
    return 0;
}