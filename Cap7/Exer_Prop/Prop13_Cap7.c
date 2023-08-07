#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 6
#define col 4
    
    //variáveis
    float mat[lin] [col], maior[lin];
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
    
    //coletar maior valor da linha da matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (j == 0) {
                maior[i] = mat[i] [j];
            }
            
            else if (maior[i] < mat[i] [j]) {
                maior[i] = mat[i] [j];
            }
        }
    }
    
    //multiplicar valores da matriz base
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i] [j] = mat[i] [j] * maior[i];
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