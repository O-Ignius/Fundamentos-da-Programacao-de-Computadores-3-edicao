#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 10
#define tam2 10
    

    //variaveis
    int i, j, mat1[tam1] [tam2], aux;


    //definidos
    
    
    //inicio programa
    //preencher matriz 
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor da %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat1[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz Base: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat1[i] [j]);
        }
        printf("\n");
    }
    
    
    //trocas
    //trocar linha 2 com 8
    for (i = 0; i < tam2; i++) {
        aux = mat1[2] [i];
        mat1[2] [i] = mat1[8] [i];
        mat1[8] [i] = aux;
    }
    
    //trocar coluna 4 com 10
    for (i = 0; i < tam1; i++) {
        aux = mat1[i] [4];
        mat1[i] [4] = mat1[i] [10];
        mat1[i] [10] = aux;
    }
    
    //setar j para tam2 (10)
    j = tam2;
    
    //trocar a diagonal principal
    for (i = 0; i < tam1; i++) {
        aux = mat1[i] [i];
        mat1[i] [i] = mat1[j] [j];
        mat1[j] [j] = aux;
        
        //diminuir j
        j--;
    }
    
    //trocar linha 5 com coluna 10
    for (i = 0; i < tam1; i++) {
        aux = mat1[5] [i];
        mat1[5] [i] = mat1[i] [10];
        mat1[i] [10] = aux;
    }
    
    //printar matriz resultante
    printf("\nMatriz Resultante: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat1[i] [j]);
        }
        printf("\n");
    }
    //fim programa


    return 0;
}