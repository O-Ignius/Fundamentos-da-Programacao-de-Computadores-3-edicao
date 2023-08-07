#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 2

    //variaveis
    float M[tam] [tam], maior;
    int i, j;


    //definidos

    
    //inicio programa
    //preencher matriz
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%f%*c", &M[i] [j]);
        }
    }
    
    //verificar maior
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (i == 0 && j == 0) {
                maior = M[i] [j];
            }
            
            else if (maior < M[i] [j]) {
                maior = M[i] [j];
            }
        }
    }
    
    //printar matriz base
    printf("\nMatriz inicial: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("|  %0.2f  ", M[i] [j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            M[i] [j] = M[i] [j] * maior;
        }
    }
    
    
    
    //printar matriz
    printf("\nMatriz resultante: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("|  %0.2f  ", M[i] [j]);
        }
        printf("\n");
    }
    
    //fim programa


    return 0;
}