#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 8
#define tam2 8
    

    //variaveis
    int i, j, mat1[tam1] [tam2], aux;


    //definidos
    aux = 0;
    
    
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
    
    
    //verificar se é simetrica
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            if (mat1[i] [j] == mat1[j] [i]) {
                aux++;
            }
        }
    }
    
    //saida
    if (aux == (tam1 * tam2)) {
        printf("\nA matriz é simétrica\n");
    }
    
    else {
        printf("\nA matriz não é simétrica\n");
    }
    //fim programa


    return 0;
}