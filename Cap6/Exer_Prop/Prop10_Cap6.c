#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 10
#define tam2 5

    //variaveis
    int i, j, vet1[tam1], vet2[tam2], par[tam1], impar[tam1], aux, div;


    //definidos
    aux = 0;


    //inicio programa
    //preencher vetor
    for (i = 0; i < tam1; i++) {
        printf("\nDigite o número da %d° posição do primeiro vetor: \n", i + 1);
        scanf("%d%*c", &vet1[i]);
    }
    
    for (i = 0; i < tam2; i++) {
        printf("\nDigite o número da %d° posição do segundo vetor: \n", i + 1);
        scanf("%d%*c", &vet2[i]);
    }
    
    //printar vetores base
    printf("\nVetor 1:\n");
    for (i = 0; i < tam1; i++) {
        printf("|  %d  ", vet1[i]);
    }
    
    printf("\nVetor 2:\n");
    for (i = 0; i < tam2; i++) {
        printf("|  %d  ", vet2[i]);
    }
    
    //zerar vetores resultantes
    for (i = 0; i < tam1; i++) {
        par[i] = 0;
        impar[i] = 0;
    }
    
    //primeiro vetor
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            if (vet1[i] % 2 == 0) {
                if (j == 0) {
                    par[aux] = vet1[i];
                }
                
                par[aux] = par[aux] + vet1[j];
            }
        }
        if (par[aux] != 0) {
            aux++;
        }
    }
    
    //printar primeiro vetor
    printf("\nVetor par resultante:\n");
    for (i = 0; i < aux; i++) {
        printf("|  %d  ", par[i]);
    }
    
    //zerar aux
    aux = 0;

    //segundo vetor
    for (i = 0; i < tam1; i++) {
        div = 0;
        
        for (j = 0; j < tam2; j++) {
            if (vet1[i] % 2 != 0) {
                if (vet1[i] % vet2[j] == 0) {
                    div++;
                }
            } 
        }
        
        if (div != 0) {
            impar[aux] = div;
            aux++;
        }
    }
    
    //printar segundo vetor
    printf("\nVetor impar resultante:\n");
    for (i = 0; i < aux; i++) {
        printf("|  %d  ", impar[i]);
    }
    
    //fim programa


    return 0;
}