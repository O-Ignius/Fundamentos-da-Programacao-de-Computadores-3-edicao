#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define lin 2
#define col 4
    
    //variaveis
    float media;
    int i, j, mat[lin] [col], ent, sompar, qntpar;
    
    //setar
    sompar = 0;
    qntpar = 0;
    
    
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna da matriz \n", i + 1, j + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //verificar quais números estao entre 15 e 20
    for (i = 0; i < lin; i++) {
        ent = 0;
        
        for (j = 0; j < col; j++) {
            if (mat[i] [j] > 12 && mat[i] [j] < 20) {
                ent++;
            }
            
            if (mat[i] [j] % 2 == 0) {
                sompar += mat[i] [j];
                qntpar++;
            }
        }
        
        printf("\nA quantia de elementos entre 12 e 20 na %d° linha é: %d", i + 1, ent);
    }
    
    //fazer media e guardar em ponto flutuante
    media = sompar / qntpar;
    
    printf("\nA média dos elementos pares da matriz é de: %0.2f", media);
    
    
    
    return 0;
}

