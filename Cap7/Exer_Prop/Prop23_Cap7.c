#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 3
#define col 4
    
    //variáveis
    float tot;
    int i, j, qntpar, mat[lin] [col], sumimpar;
    
    //definidos
    tot = 0;
    sumimpar = 0;
    qntpar = 0;
    
    
    //inicio programa
    
    //coletar elementos matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser inserido na %d° linha %d° coluna \n", i + 1, j + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz base
    printf("\nMatriz Base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //somas
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            tot += mat[i] [j];
            
            if (mat[i] [j] % 2 != 0) {
                sumimpar += mat[i] [j];
            }
            
            else {
                qntpar++;
            }
        }
    }
    
    //média de todos os elementos da matriz
    tot = tot / (lin * col);
    
    
    //saidas
    printf("\nA quantia de números pares é: %d \n", qntpar);
    printf("\nA soma dos números impares é: %d \n", sumimpar);
    printf("\nA média de todos os elementos da matriz é: %0.2f \n", tot);
    
    //fim programa
    
    return 0;
}