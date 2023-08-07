#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define lin 3
#define col 5
    
    //variaveis
    int i, j, mat[lin] [col], ent = 0;
    
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna da matriz \n", i + 1, j + 1);
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
    
    //verificar quais números estao entre 15 e 20
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (mat[i] [j] > 15 && mat[i] [j] < 20) {
                ent++;
            }
        }
    }
    
    printf("\nA quantia de números entre 15 e 20 dentro da matriz é: %d", ent);
    
    
    
    return 0;
}

