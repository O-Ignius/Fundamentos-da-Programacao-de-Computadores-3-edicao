#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float num1, num2;
    printf("Digite as 2 numeros: \n");
    scanf("%f %f", &num1, &num2);
    
    if (num1 < num2) {
    printf("%0.2f é maior que %0.2f", num2, num1);
    }
    else {
    printf("%0.2f é maior que %0.2f", num1, num2);
    }
    //fim if-else
    
    return 0;
}