#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 5
#define col 5
    
    //variáveis
    float mat[lin] [col], maior;
    int i, j;
    
    //definidos
    
    //inicio programa
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
    
    //multiplicar linha pelo elemento da diagonal principal da linha
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i] [j] = mat[i] [j] * mat[i] [i];
        }
    }
    
    //printar matriz Resultante
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