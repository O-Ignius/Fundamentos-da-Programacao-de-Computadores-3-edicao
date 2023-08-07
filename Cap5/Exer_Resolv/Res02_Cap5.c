#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale (LC_ALL, "portuguese");
    
    //variáveis
    float n, fat, i, j, calc;
    fat = 1;
    calc = 0;
    
    //Coleta de dados
    printf("Cálculo 1 + 1/1! + 1/2! ... 1/n! \n\n");
    printf("Digite o n: \n");
    scanf("%f", &n);

    
    printf("1 ");
    for (i = 1; i <= n; i++) {
        
        if (i > 2) {
            fat = 1;
        }
        
        for (j = 1; j <= i; j++) {
            fat = fat * j;         
        }
        calc = calc + (1 / fat);
        
        printf("+ 1 / %0.0f! ",i);
    }
    
    printf("\nResultado = %0.4f", calc);

    return 0;
}