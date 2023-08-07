#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define lin 6
#define col 3
    
    //variaveis
    float mat[lin] [col], mainum, menum;
    int i, j, maipos[2], menpos[2];
    
    //setar
    
    
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna da matriz \n", i + 1, j + 1);
            scanf("%f%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //verificar quais números estao entre 15 e 20
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            
            //maior número e sua posição
            //maipos[0] = linha ; maipos[1] = coluna
            if (i == 0 && j == 0) {
                mainum = mat[i] [j];
                maipos[0] = i + 1;
                maipos[1] = j + 1;
            }
            
            else if (mainum < mat[i] [j]) {
                mainum = mat[i] [j];
                maipos[0] = i + 1;
                maipos[j] = i + 1;
            }
            
            //menor número e sua posição
            //menpos[0] = linha ; menpos[1] = coluna
            if (i == 0 && j == 0) {
                menum = mat[i] [j];
                menpos[0] = i + 1;
                menpos[1] = j + 1;
            }
            
            else if (menum > mat[i] [j]) {
                menum = mat[i] [j];
                menpos[0] = i + 1;
                menpos[1] = j + 1;
            }
        }
    }
    
    //saida
    printf("\nO maior elemento é: %0.2f, estando na %d° linha %d° coluna \n", mainum, maipos[0], maipos[1]);
    printf("\nO menor elemento é: %0.2f, estando na %d° linha %d° coluna \n", menum, menpos[0], menpos[1]);
    
    
    return 0;
}