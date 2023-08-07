#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 5
#define col 5
    
    //variáveis
    float mat[lin] [col], sumlin[lin], sumcol[col];
    int i, j;
    
    //definidos
    
    
    //inicio programa
    //zerar vetores
    for (i = 0; i < lin; i++) {
        sumlin[i] = 0;
    }
    
    for (i = 0; i < col; i++) {
        sumcol[i] = 0;
    }
    
    
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
    
    //soma das linhas / colunas:
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            sumlin[i] += mat[i] [j];
            sumcol[i] += mat[j] [i];
        }
    }
    
    //printar soma linha e soma coluna
    for (i = 0; i < lin; i++) {
        printf("\nSoma da %d° linha: %0.2f \n", i + 1, sumlin[i]);
    }
    
    for (i = 0; i < col; i++) {
        printf("\nSoma da %d° coluna: %0.2f \n", i + 1, sumcol[i]);
    }
    
    //fim programa
    
    return 0;
}