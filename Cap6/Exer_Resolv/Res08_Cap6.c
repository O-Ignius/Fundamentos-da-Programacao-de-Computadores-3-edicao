#include <stdio.h>
#include <stdlib.h>

int main() {
#define tam 4
    
    int vetx[tam], vety[tam], uni[tam * 2], aux, i, j;

    for (i = 0; i < tam; i++) {
        printf("Digite o Valor do vetor X na posição %d \n", i);
        scanf("%d", &vetx[i]);
        printf("Digite o Valor do vetor Y na posição %d \n", i);
        scanf("%d", &vety[i]);
    }
    
    printf("\nVetor X: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vetx[i]);
    
        if (i == tam - 1) {
            printf("\n\n");
        }
    }
    
    printf("\nVetor Y: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vety[i]);
    
        if (i == tam - 1) {
            printf("\n\n");
        }
    }
    
    //ordenar os vetores X e Y
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (vetx[i] < vetx[j] && j != i) {
                aux = vetx[i];
                vetx[i] = vetx[j];
                vetx[j] = aux;
            }
            
            if (vety[i] < vety[j] && j != i) {
                aux = vety[i];
                vety[i] = vety[j];
                vety[j] = aux;
            }
        }
    }
    
    printf("\nVetor X ordenado: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vetx[i]);
    
        if (i == tam - 1) {
            printf("\n\n");
        }
    }
    
    printf("\nVetor Y ordenado: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vety[i]);
    
        if (i == tam - 1) {
            printf("\n\n");
        }
    }
    
    //zerar j
    j = 0;
    
    //guardar valores no vetor união
    for (i = 0; i < tam * 2; i++) {
        if (i < tam) {
            uni[i] = vetx[i];
        }
        
        else if (i >= tam) {
            uni[i] = vety[j];
            j++;
        }
    }
    
    printf("\nUnião de ambos: \n");
    for (i = 0; i < tam * 2; i++) {
        printf("  %d  |", uni[i]);
    
        if (i == (tam * 2) - 1) {
            printf("\n\n");
        }
    }
    
    for (i = 0; i < tam * 2; i++) {
        for (j = 0; j < tam * 2; j++) {
            if (uni[i] < uni[j] && i != j) {
                aux = uni[i];
                uni[i] = uni[j];
                uni[j] = aux;
            }
        }
    }
    
    printf("\nUnião ordenada: \n");
    for (i = 0; i < tam * 2; i++) {
        printf("  %d  |", uni[i]);
    
        if (i == (tam * 2) - 1) {
            printf("\n\n");
        }
    }
    
    return 0;
}