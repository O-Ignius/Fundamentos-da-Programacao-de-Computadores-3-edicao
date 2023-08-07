#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
#define lin 3
#define col 3
   
    //variaveis
    float mat1[lin] [col], num;
    int i, j;
   
    //setar
    
   
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna \n", j + 1, i + 1);
            scanf("%f%*c", &mat1[i] [j]);
        }
    }
    
    //coletar número a ser multiplicado
    printf("\nDigite o valor a ser multiplicado na matriz \n");
    scanf("%f%*c", &num);
   
    //printar matriz 1
    printf("\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat1[i] [j]);
        }
        printf("\n");
    }
   
    //soma das matrizes
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat1[i] [j] = mat1[i] [j] * num;
        }
    }
   
    //printar soma matrizes
    printf("\nMatriz resultante: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat1[i] [j]);
        }
        printf("\n");
    }
    return 0;
}