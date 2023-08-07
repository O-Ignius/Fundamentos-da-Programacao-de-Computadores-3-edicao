#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 4
#define tam2 7

    //variaveis
    int i, j, mat[tam1] [tam2], minmax, posi[2], menele[2];


    //definidos

    
    //inicio programa
    //preencher matriz
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor da %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            if (i == 0 && j == 0) {
                menele[0] = mat[i] [j];
                menele[1] = i;
            }
            
            else if (menele[0] > mat[i] [j]) {
                menele[0] = mat[i] [j];
                menele[1] = i;
            }
        }
    }
    
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            if (menele[1] == i) {
                if (j == 0) {
                    minmax = mat[i] [j];
                    posi[0] = i;
                    posi[1] = j;
                }
                
                else if (minmax < mat[i] [j]) {
                    minmax = mat[i] [j];
                    posi[0] = i;
                    posi[1] = j;
                }
            }
        }
    }
    
    //saida
    printf("\nO MINMAX é: %d \nNa Linha: %d \nNa Coluna: %d\n", minmax, posi[0] + 1, posi[1] + 1);
    
    //fim programa


    return 0;
}