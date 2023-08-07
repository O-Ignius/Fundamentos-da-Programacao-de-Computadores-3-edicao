#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 10
#define col 10
    
    //variáveis
    float mat[lin] [col], valele;
    int i, j, qntele;
    
    //definidos
    valele = 0;
    qntele = 0;
    
    
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
    
    //total diagonal principal
    for (i = 0; i < lin; i++) {
        valele += mat[i] [i];
        qntele++;
    }
    
    //media elementos diagonal principal
    valele = valele / qntele;
    
    //saida
    printf("\nA média de todos os elementos da diagonal principal da matriz é: %0.2f \n", valele);
    
    //fim programa
    
    return 0;
}