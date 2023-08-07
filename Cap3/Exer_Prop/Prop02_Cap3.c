#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float num1, num2, num3, mult;
    printf("Digite as 3 numeros a serem multiplicados: \n");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    mult = num1 * num2 * num3;
    //fim operações
     
    printf("%0.2f vezes %0.2f vezes %0.2f resulta em %0.2f", num1, num2, num3, mult);
    
    return 0;
}