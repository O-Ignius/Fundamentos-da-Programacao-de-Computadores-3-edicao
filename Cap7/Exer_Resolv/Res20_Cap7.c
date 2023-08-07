#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define lin 5
#define col 4
    

    //variaveis
    float mat[lin] [col], troca;
    int i, j, k, l;


    //definidos
    
    
    //inicio programa
    //Receber valores e coloca-los numa matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o número a ser armazenado na %d° Linha %d° Coluna\n", i + 1, j + 1);
            scanf("%f%*c", &mat[i] [j]);
            
            
        }
    }
    
    //printar matriz
    printf("\n\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }

    
    
    //ordenar matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            for (k = 0; k < lin; k++) {
                for (l = 0; l < col; l++) {
                    if (mat[i] [j] < mat[k] [l]) {
                        troca = mat[i] [j];
                        mat[i] [j] = mat[k] [l];
                        mat[k] [l] = troca;
                    }
                }
            }
        }
    }
    
    
    //printar matriz ordenada
    printf("\n\nMatriz ordenada: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //fim programa


    return 0;
}