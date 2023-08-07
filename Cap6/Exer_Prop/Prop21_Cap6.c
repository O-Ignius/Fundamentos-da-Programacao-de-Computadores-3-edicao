#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    int i, vet[tam];


    //definidos

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet[i]);
    }

    //preencher nulos com 1
    for (i = 0; i < tam; i++) {
        if (vet[i] == 0) {
            vet[i] = 1;
        }
    }
    
    //saida
    printf("\nVetor contendo somente os positivos: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", vet[i]);
    }

    //fim programa


    return 0;
}