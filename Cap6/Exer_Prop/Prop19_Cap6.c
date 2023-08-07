#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    float vet1[tam], vet2[tam], vet3[tam];
    int i;


    //definidos

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do 1° vetor: \n", i + 1);
        scanf("%f%*c", &vet1[i]);
    }
    
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do 2° vetor: \n", i + 1);
        scanf("%f%*c", &vet2[i]);
    }

    //vetor 3
    for (i = 0; i < tam; i++) {
        vet3[i] = vet1[i] * vet2[i];
    }

    //saida
    printf("\nVetor resultante: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %0.2f  ", vet3[i]);
    }

    //fim programa


    return 0;
}