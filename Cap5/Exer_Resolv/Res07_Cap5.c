#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float fib, fib2;
    int i, j;

    //definidos
    fib = 0;
    fib2 = 1;

    printf("8 primeiros termos de Fibonacci \n\n");


    // inicio aplicação
    printf("0 \n");
           
    for (i = 0; i < 8; i++) {
       
        fib = fib + fib2;
       
        printf("%0.0f \n", fib2);
        printf("%0.0f \n", fib);
       
        for (j = 0; j < 1; j++) {
            fib2 = fib2 + fib;
        }
    }
    // fim aplicação


    return 0;
}