#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 6
#define col 10
    
    //variáveis
    float mat[lin + 1] [col];
    int i, j;
    
    //definidos
    
    //inicio programa
    //zerar vetor da linha 7 da matriz
    for (i = 0; i < col; i++) {
        mat[6] [i] = 0;
    }
    
    //coletar elementos matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser inserido na %d° linha %d° coluna \n", i + 1, j + 1);
            scanf("%f%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz base
    printf("\nMatriz Base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //soma colunas
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[6] [i] += mat[j] [i];
        }
    }
    
    //printar vetor da soma
    printf("\nVetor Resultante da soma das colunas da matriz: \n");
    for (i = 0; i < col; i++) {
        printf("%d° Coluna: %0.2f \n", i + 1, mat[6] [i]);
    }
    
    //fim programa
    
    return 0;
}