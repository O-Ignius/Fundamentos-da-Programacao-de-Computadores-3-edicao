#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
#define lin 5
#define col 5
   
    //variaveis
    int i, j, mat[lin] [col], sumlin4, sumcol2, sumdiagpri, sumdiagsec, sumtot;
   
    //setar
    sumlin4 = 0;
    sumcol2 = 0;
    sumdiagpri = 0;
    sumdiagsec = 0;
    sumtot = 0;
   
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna \n", j + 1, i + 1);
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
   
    //soma linha 4
    for (i = 0; i < col; i++) {
        sumlin4 += mat[3] [i];
    }
    
    //soma coluna 2
    for (i = 0; i < lin; i++) {
        sumcol2 += mat[i] [1];
    }
    
    //soma diagonal principal
    for (i = 0; i < lin; i++) {
        sumdiagpri += mat[i] [i];
    }
    
    //soma diagonal secundária
    j = col - 1;
    
    for (i = 0; i < lin; i++) {
        sumdiagsec += mat[i] [j];
        j--;
    }
    
    //soma total
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            sumtot += mat[i] [j];
        }
    }
    
    printf("\nA soma da 4° linha resulta em: %d\n", sumlin4);
    printf("\nA soma da 2° coluna resulta em: %d\n", sumcol2);
    printf("\nA soma da diagonal principal resulta em: %d\n", sumdiagpri);
    printf("\nA soma da diagonal secundária resulta em: %d\n", sumdiagsec);
    printf("\nA soma da de todos os elementos da matriz resulta em: %d\n", sumtot);
    
    return 0;
}