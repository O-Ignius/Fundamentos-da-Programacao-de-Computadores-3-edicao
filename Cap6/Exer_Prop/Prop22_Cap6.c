#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    int i, A[tam], B[tam], aux;


    //definidos
    aux = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor A: \n", i + 1);
        scanf("%d%*c", &A[i]);
    }

    //preencher nulos com 1
    for (i = 0; i < tam; i++) {
        if (A[i] > 0) {
            B[aux] = A[i];
            aux++;
        }
    }
    
    //saida
    printf("\nVetor B: \n");
    for (i = 0; i < aux; i++) {
        printf("|  %d  ", B[i]);
    }

    //fim programa


    return 0;
}