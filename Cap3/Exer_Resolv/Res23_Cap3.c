#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float num_real, num_int, num_frac, num_arred;
    printf("Digite um número real: \n");
    scanf("%f", &num_real);
    
    num_int = (int) num_real;
    num_frac = num_real - num_int;
    num_arred = round(num_real);
    // Fim operações
    
    printf("O valor do número real é de %0.2f, sua parte inteira é %0.0f, sua parte fracionária é %0.2f e arredondando-o obtêm-se %0.0f", num_real, num_int, num_frac, num_arred);
    
    return 0;
}