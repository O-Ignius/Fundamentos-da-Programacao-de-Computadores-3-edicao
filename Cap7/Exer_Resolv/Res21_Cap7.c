#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    

    //variaveis
    float soma = 0;
    int i, j, tam, stop = 0;


    //definidos
    
    
    //inicio programa
    //receber tamanho da matriz quadrada
    do {
        printf("\nEscolha a dimensão da matriz QUADRADA: \n");
        printf("\nDigite o tamanho da matriz: \n");
        scanf("%d%*c", &tam);
        
        if (tam > 0) {
            stop++;
        }
        
        else {
            printf("\nTamanho digitado inválido, tente novamente! \n");
        }
    }
    while (stop == 0);
    
    //criar matriz
    float mat[tam] [tam];
    
    //Receber valores e coloca-los numa matriz
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("\nDigite o número a ser armazenado na %d° Linha %d° Coluna\n", i + 1, j + 1);
            scanf("%f%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz
    printf("\n\nMatriz base: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }

    //ordenar matriz
    for (i = 0; i < tam; i++) {
        for (j = tam - 1; j >= 0; j--) {
            if (j + i > tam - 1) {
                soma += mat[i] [j];
            }
        }
    }
    
    //printar matriz ordenada
    printf("\n\nA soma dos elementos abaixo da diagonal secundária é: %0.2f \n", soma);
    
    //fim programa


    return 0;
}