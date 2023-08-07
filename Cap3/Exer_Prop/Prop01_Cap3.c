#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float num1, num2, subtr;
    printf("Digite as 2 numeros a serem subtraidos: \n");
    scanf("%f %f", &num1, &num2);
    
    subtr = num1 - num2;
    //fim operações
     
    printf("%0.2f menos %0.2f resulta em %0.2f", num1, num2, subtr);
    
    return 0;
}