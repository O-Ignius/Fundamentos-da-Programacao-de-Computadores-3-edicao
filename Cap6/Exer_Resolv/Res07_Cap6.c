#include <stdio.h>
#include <stdlib.h>

int main() {
#define tam 8
    
    int vet[tam], aux, i, j;

    for (i = 0; i < tam; i++) {        
        if (i != 0) {
            printf("Digite o Valor do vetor na posição %d \n", i);
            scanf("%d", &vet[i]);
        
            for (j = 0; j <= i; j++) {
                if (vet[i] < vet[j]) {
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
        
        else {
            printf("Digite o Valor do vetor na posição %d \n", i);
            scanf("%d", &vet[i]);
        }
    }
    
    printf("\nVetor crescente: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vet[i]);
    
        if (i == tam - 1) {
            printf("\n\n");
        }
    }
    
    return 0;
}