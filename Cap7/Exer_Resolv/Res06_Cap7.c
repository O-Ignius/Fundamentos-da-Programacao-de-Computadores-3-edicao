#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 4
#define tam2 5
#define tam3 2
    

    //variaveis
    int i, j, k, mat1[tam1] [tam2], mat2[tam2] [tam3], resul[tam1] [tam3], aux, sum;


    //definidos
    sum = 0;

    
    //inicio programa
    //preencher matriz 1
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor da %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat1[i] [j]);
        }
    }
    
    //preencher matriz 1
    for (i = 0; i < tam2; i++) {
        for (j = 0; j < tam3; j++) {
            printf("\nDigite o valor da %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat2[i] [j]);
        }
    }
    
    //printar matriz 1
    printf("\nMatriz 1: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat1[i] [j]);
        }
        printf("\n");
    }
    
    //printar matriz
    printf("\nMatriz 2: \n");
    for (i = 0; i < tam2; i++) {
        for (j = 0; j < tam3; j++) {
            printf("|  %d  ", mat2[i] [j]);
        }
        printf("\n");
    }
    
    
    for (i = 0; i < tam1; i++) {
        sum = 0;
        
        for (j = 0; j < tam3; j++) {
            for (k = 0; k < tam2; k++) {
                aux = mat1[i] [k] * mat2[k] [j];
                sum = sum + aux;
            }
            
            //guardar valor da multiplicação
            resul[i] [j] = sum;
        }
    }
    
    
    //printar matriz resultante
    printf("\nMatriz resultante da multiplicação das matrizes 1 e 2: \n");
    for (i = 0; i < tam2; i++) {
        for (j = 0; j < tam3; j++) {
            printf("|  %d  ", resul[i] [j]);
        }
        printf("\n");
    }
    
    //fim programa


    return 0;
}