#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    
#define lin 8
#define col 6
    
    //variáveis
    float media[lin];
    int i, j, mat[lin] [col], qnt[lin], linha[lin], aux;
    
    //definidos
    aux = 0;
    
    //inicio programa
    //zerar vetores
    for (i = 0; i < lin; i++) {
        media[i] = 0;
        qnt[i] = 0;
        linha[i] = -1;
    }
    
    //coletar elementos matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor a ser inserido na %d° linha %d° coluna \n", i + 1, j + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //printar matriz base
    printf("\nMatriz Base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //coletar soma linha par e quantia de numeros
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i == 0) {
                media[aux] += mat[i] [j];
                qnt[aux]++;
                linha[aux] = i;
            }
            
            else if (i % 2 == 0) {
                media[aux] += mat[i] [j];
                qnt[aux]++;
                linha[aux] = i;
            }
        }
        
        if (linha[aux] == i) {
            aux++;
        }
    }
    
    //calcular média
    for (i = 0; i < lin; i++) {
        media[i] = media[i] / qnt[i];
    }
    
    //printar média
    printf("\nMédia das linhas pares da matriz\n");
    for (i = 0; i < aux; i++) {
        printf("\nLinha %d°: %0.2f \n", linha[i] + 1, media[i]);
    }
    
    //fim programa
    
    return 0;
}