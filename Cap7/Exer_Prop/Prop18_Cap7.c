#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 5
#define col 5
    
    //variáveis
    float mat[lin] [col], valele;
    int i, j;
    
    //definidos
    valele = 0;
    
    
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
    
    //total diagonal secundária
    j = col - 1;
    for (i = 0; i < lin; i++) {
        valele += mat[i] [j];
        j--;
    }
    
    //saida
    printf("\nA soma de todos os elementos da diagonal secundária da matriz é: %0.2f \n", valele);
    
    //fim programa
    
    return 0;
}