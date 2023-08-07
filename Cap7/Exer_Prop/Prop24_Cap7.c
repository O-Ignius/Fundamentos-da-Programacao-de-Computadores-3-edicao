#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
#define lin 4
#define col 5
   
    //variaveis
    float mat[lin] [col], sumcol[col];
    int i, j, aux;
   
    //setar
    aux = 0;
    
    
    //zerar vetor soma
    for (i = 0; i < col; i++) {
        sumcol[i] = 0;
    }
    
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o número a ser armazendo na %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%f%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz base
    printf("\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //soma de cada coluna da matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            sumcol[i] += mat[j] [i];
        }
    }
    
    //printar soma das colunas maior q 10
    for (i = 0; i < lin; i++) {
        if (sumcol[i] > 10) {
            printf("\nA soma da %d° coluna é: %0.2f \n", i + 1, sumcol[i]);
            aux = 1;
        }
    }
    
    //se nenhuma coluna resultar numa soma maior que 10
    if (aux == 0) {
        printf("\nNenhuma das colunas da matriz resulta numa soma maior que 10!! \n");
    }
    
    return 0;
}