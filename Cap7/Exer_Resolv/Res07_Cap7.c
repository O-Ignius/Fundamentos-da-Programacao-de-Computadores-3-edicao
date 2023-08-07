#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define linha 5
#define coluna 7
    
    // Variáveis
    float mat[linha] [coluna], sela;
    int i, j, k, lin, col, aux;
    
    //definidos
    
    
    // inicio aplicaçao
    //preencher matriz
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("\nDigite o valor a ser armazenado na %d° linha %d° coluna da matriz\n", i + 1, j + 1);
            scanf("%f%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz base: \n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("|  %0.2f  ", mat[i] [j]);
        }
        
        printf("\n");
    }
    
    
    //verificar se há ponto de sela
    for (i = 0; i < linha; i++) {
        //definir auxiliar 0 
        aux = 0;
        
        //guardar menor valor da linha
        for (j = 0; j < coluna; j++) {
            if (j == 0) {
                sela = mat[i] [j];
                lin = i;
                col = j;
            }
            
            else if (sela > mat[i] [j]) {
                sela = mat[i] [j];
                lin = i;
                col = j;
            }
        }
        
        //comparar se o menor valor da linha tambem é o maior valor da coluna
        for (j = 0; j < linha; j++) {
            if (sela > mat[j] [col] && j != lin) {
                aux++;
            }   
        }
        
        //caso seja...
        if (aux == linha - 1) {
            printf("\nO valor %0.2f é um ponto de sela localizado na %d° linha %d° coluna da matriz dada\n", sela, lin + 1, col + 1);
        }
    }
    
    
    //fim aplicação
    
    
    return 0;
}