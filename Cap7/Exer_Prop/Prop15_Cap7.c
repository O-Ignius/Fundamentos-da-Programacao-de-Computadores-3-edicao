#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 12
#define col 13
    
    //variáveis
    float mat[lin] [col], men[lin];
    int i, j;
    
    //definidos
    
    
    //inicio programa
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
    
    //coletar menor valor da linha
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (j == 0) {
                men[i] = mat[i] [j];
            }
            
            else if (men[i] > mat[i] [j]) {
                men[i] = mat[i] [j];
            }
        }
    }
    
    //módulo do menor valor de cada linha
    for (i = 0; i < lin; i++) {
        if (men[i] < 0) {
            men[i] = men[i] * (-1);
        }
    }
    
    //dividindo todos elementos da matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i] [j] = mat[i] [j] / men[i];
        }
    }
    
    //printar matriz resultante
    printf("\nMatriz Resultante: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //fim programa
    
    return 0;
}