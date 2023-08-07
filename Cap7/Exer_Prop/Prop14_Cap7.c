#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 2
#define col 3
    
    //variáveis
    float mat[lin] [col];
    int i, j, qnt;
    
    //definidos
    qnt = 0;
    
    
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
            if (mat[i] [j] < 5 || mat[i] [j] > 15) {
                qnt++;
            }
        }
    }
    
    //saida
    printf("\nA quantia de elementos não inclusos no intervalo [5, 15] é: %d \n", qnt);
    
    //fim programa
    
    return 0;
}