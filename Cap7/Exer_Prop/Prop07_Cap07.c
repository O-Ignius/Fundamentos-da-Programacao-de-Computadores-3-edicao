#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define tam1 4
#define tam2 6
    
    //variaveis
    float M[tam1] [tam2], N[tam2] [tam1];
    int i, j;
    
    //setar
    
    
    //coletar valores matriz M
    printf("\nMatriz M: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna \n", j + 1, i + 1);
            scanf("%f%*c", &M[i] [j]);
        }
    }
    
    //coletar valores matriz N
    printf("\nMatriz N: \n");
    for (i = 0; i < tam2; i++) {
        for (j = 0; j < tam1; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna \n", j + 1, i + 1);
            scanf("%f%*c", &N[i] [j]);
        }
    }
    
    //printar matriz M
    printf("\nMatriz M: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %0.2f  ", M[i] [j]);
        }
        printf("\n");
    }
    
    //printar matriz N
    printf("\nMatriz N: \n");
    for (i = 0; i < tam2; i++) {
        for (j = 0; j < tam1; j++) {
            printf("|  %0.2f  ", N[i] [j]);
        }
        printf("\n");
    }
    
    //soma linha de M com coluna de M
    printf("\nMatriz Resultante das somas das linhas de M com as colunas de N: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %0.2f  ", M[i] [j] + N[j] [i]);
        }
        printf("\n");
    }
    
    
    return 0;
}