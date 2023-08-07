#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define lin 20
#define col 10
    
    //variaveis
    int i, j, mat[lin] [col], som[col];
    
    //setar
    
    
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna \n", j + 1, i + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //zerar vetor soma
    for (i = 0; i < col; i++) {
        som[i] = 0;
    }
    
    //atribuir valor ao vetor soma
    for (i = 0; i < col; i++) {
        for (j = 0; j < lin; j++) {
            som[i] += mat[j] [i];
        }
    }
    
    //multiplicar pelo vetor soma
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i] [j] = mat[i] [j] * som[j];
        }
    }
    
    //printar matriz resultante
    printf("\nMatriz resultante: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat[i] [j]);S
        }
        printf("\n");
    }
    
    
    return 0;
}