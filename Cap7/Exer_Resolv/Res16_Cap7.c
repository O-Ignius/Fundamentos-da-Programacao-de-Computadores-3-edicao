#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 7
    

    //variaveis
    int i, j, mailin[tam], mencol[tam], mat[tam] [tam], maior, menor;


    //definidos
    
    
    //inicio programa
    //preencher matriz 
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("\nDigite o número da %d° linha e %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz
    printf("\n\nMatriz base: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //armazenar maior elemento da linhas
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (j == 0) {
                maior = mat[i] [j];
            }
            
            else if (maior < mat[i] [j]) {
                maior = mat[i] [j];
            }
        }
        mailin[i] = maior;
    }
    
    //armazenar menor elemento da coluna
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (j == 0) {
                menor = mat[j] [i];
            }
            
            else if (menor > mat[j] [i]) {
                menor = mat[j] [i];
            }
        }
        mencol[i] = menor;
    }
    
    //printar vetores
    printf("\nVetor com maior elemento de cada linha: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", mailin[i]);
    }
    
    printf("\nVetor com menor elemento de cada coluna: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", mencol[i]);
    }
    
    //fim programa


    return 0;
}