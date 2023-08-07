#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float num1, num2, num3;
    printf("Digite as 3 numeros: \n");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    if (num1 < num2 && num2 < num3) {
    printf("%0.2f é maior que %0.2f que é maior que %0.2f", num3, num2, num1);
    }
    else if (num1 < num2 && num2 > num3 && num3 > num1) {
    printf("%0.2f é maior que %0.2f que é maior que %0.2f", num2, num3, num1);
    }    
    else if (num1 < num2 && num2 > num3 && num3 < num1) {
    printf("%0.2f é maior que %0.2f que é maior que %0.2f", num2, num1, num3);
    }
    else if (num1 > num2 && num2 > num3) {
    printf("%0.2f é maior que %0.2f que é maior que %0.2f", num1, num2, num3);
    }
    else if (num1 > num2 && num2 < num3 && num3 < num1) {
    printf("%0.2f é maior que %0.2f que é maior que %0.2f", num1, num3, num2);
    }
    else {
    printf("%0.2f é maior que %0.2f que é maior que %0.2f", num3, num1, num2);
    }
    //fim if-else
    
    return 0;
}