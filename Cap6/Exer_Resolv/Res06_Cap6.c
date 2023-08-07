#include <stdio.h>
#include <stdlib.h>

int main() {
#define tam 10
    
    int vet[tam], aux, i, j;

    for (i = 0; i < tam; i++) {
        printf("Digite o Valor do vetor na posição %d \n", i);
        scanf("%d", &vet[i]);
    }
    
    printf("Vetor: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vet[i]);
    
        if (i == tam - 1) {
            printf("\n\n");
        }
    }
    
    printf("Decrescente: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vet[i]);
    
        if (i == tam - 1) {
            printf("\n\n");
        }
    }
    
    return 0;
}