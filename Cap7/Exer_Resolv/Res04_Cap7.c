#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 10
#define tam2 20

    //variaveis
    int i, j, mat[tam1] [tam2], multi[tam1];


    //definidos

    
    //inicio programa
    //preencher matriz
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor da %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //zerar vetor multi
    for (i = 0; i < tam1; i++) {
        multi[i] = 0;
    }
    
    
    //printar matriz base
    printf("\nMatriz base: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        
        printf("\n");
    }
    
    
    //guardar soma
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            multi[i] = multi[i] + mat[i] [j];
        }
    }
    
    //multiplicar matriz base
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            mat[i] [j] = mat[i] [j] * multi[i];
        }
    }
    
    //printar matriz resultante
    printf("\nMatriz base: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        
        printf("\n");
    }
    
    //fim programa


    return 0;
}