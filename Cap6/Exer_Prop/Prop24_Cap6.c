#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 15

    //variaveis
    int i, j, vet[tam], prim[tam], aux, aument;


    //definidos
    aument = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet[i]);
    }

    //números primos
    for (i = 0; i < tam; i++) {
        aux = 0;
        
        for (j = 1; j <= vet[i]; j++) {
            if (vet[i] == 1) {
                aux = 2;
            }
            
            else if (vet[i] % j == 0) {
                aux++;
            }
        }
        
        if (aux == 2) {
            prim[aument] = vet[i];
            aument++;
        }
    }
    
    //saida
    printf("\nVetor com primos: \n");
    for (i = 0; i < aument; i++) {
        printf("|  %d  ", prim[i]);
    }
    
    //fim programa


    return 0;
}