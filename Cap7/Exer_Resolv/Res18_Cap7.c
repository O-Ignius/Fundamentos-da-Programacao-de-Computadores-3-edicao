#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define lin 3
#define col 6
#define tam 18
    

    //variaveis
    float mat[lin] [col], vet[tam];
    int i, j, aux;


    //definidos
    aux = 0;
    
    
    //inicio programa
    //colocar valores no vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do vetor na %d° posição: \n", i + 1);
        scanf("%f%*c", &vet[i]);
    }
    
    //preencher matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i] [j] = vet[aux];
            aux++;
        }
    }
    
    //printar vetor
    printf("\nVetor: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %0.2f  ", vet[i]);
    }
    
    //printar matriz
    printf("\n\nMatriz: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //fim programa


    return 0;
}