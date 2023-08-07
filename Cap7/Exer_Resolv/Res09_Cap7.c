#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define lin 15
#define col 5


    //variaveis
    int i, j, k, l, mat[lin] [col], rep[lin] [col], aux[lin] [col];


    //definidos

    //inicio programa
    //zerar matriz quantia repetição
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            rep[i] [j] = 0;
        }
    }
    
    //preencher matriz 
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser guardado na %d° linha %d° coluna: \n", i + 1, j + 1);
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

    //preencher outra matriz com mesmos valores para comparação
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            aux[i] [j] = mat[i] [j];
        }
    }
    
    //verificar quantas vezes tal número se repete
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            for (k = 0; k < lin; k++) {
                for (l = 0; l < col; l++) {
                    if (mat[i] [j] == aux[k] [l]) {
                        rep[i] [j]++;
                    }
                }
            }
        }
    }
    
    
    //printar quantia de repetição
    printf("\nRepetições: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  Num %d: %d vezes  ", mat[i] [j], rep[i] [j]);
        }
        printf("\n");
    }
    

    //fim programa


    return 0;
}