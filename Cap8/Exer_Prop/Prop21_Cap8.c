#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 10



//indicar subrotinas
float maior (float base[tam] [tam]);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    float base[tam] [tam], resul;
    int i, j;
   
   
    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\n%d° linha: \n", i + 1);
        
        for (j = 0; j < tam; j++) {
            printf("\nDigite o valor da %d° coluna: \n", j + 1);
            scanf("%f%*c", &base[i] [j]);
        }
    }
    
    printf("\nMatriz base: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("  %0.2f  |", base[i] [j]);
        }
        printf("\n");
    }
    
   
    //chamar subrotinas
    resul = maior(base);
   
   
    //saidas
    printf("\nO maior valor acima da diagonal principal é: %0.2f\n", resul);
   
   
   
    //fim programa
   
   
    return 0;
}


//subrotina coleta o maior numero acima da diagonal principal
float maior (float base[tam] [tam]) {
    //variaveis
    float mai;
    int i, j;
   
   
    //definidos
   
   
    //inicio sub
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (j > i) {
                if (j == 1 && i == 0) {
                    mai = base[i] [j];
                }

                else if (mai < base[i] [j]) {
                    mai = base[i] [j];
                }
            }
        }
    }
    
    
   
    return mai;
   
    //fim sub
   
}