#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float num1, num2, divi;
    printf("Digite as 2 numeros a serem divididos: \n");
    scanf("%f %f", &num1, &num2);
    
    if (num2 != 0) {
    divi = num1 / num2;
    //fim operações
     
    printf("%0.2f dividido por %0.2f resulta em %0.2f", num1, num2, divi);
    }
    
    else {
        printf("não há divisão por 0");
    }
    
    return 0;
}