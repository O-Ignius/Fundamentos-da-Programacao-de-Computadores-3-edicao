#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");
   
   
    // Variáveis
    float pares, primos, det1, det2;
    int i, j, num;

   
    //definidos
    pares = 0;
    primos = 0;
   
   
   
    // inicio aplicação
    for (i = 0; i < 10; i++) {
        // coleta de dados
        printf("Digite o número: \n");
        scanf("%d%*c", &num);
       
        //defindos
        det1 = 0;
        det2 = 0;
       
        //numeros pares
        if (num % 2 == 0) {
            pares = pares + num;
        }
       
        //num primos
        for (j = 1; j <= num; j++) {
            if (num % j == 0) {
                det1++;
            }
           
            else {
                det2++;
            }
        }
       
        if (det1 == 2) {
            primos = primos + num;
        }
    }
   
   
    //saida
    printf("\nA soma de todos os pares é: %0.0f \n", pares);
    printf("A soma de todos os primos é: %0.0f \n", primos);
   
    // fim aplicação


    return 0;
}