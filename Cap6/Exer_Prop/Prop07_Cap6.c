#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    float vet[tam], posi;
    int i, neg;


    //definidos
    neg = 0;
    posi = 0;


    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite um número real para a %d° posição do vetor: \n", i + 1);
        scanf("%f%*c", &vet[i]);
    }
    
    for (i = 0; i < tam; i++) {
        if (vet[i] < 0) {
            neg++;
        }
        
        if (vet[i] > 0) {
            posi = posi + vet[i];
        }
    }
    
    //saida
    printf("\nNo vetor há %d números negativos \nA soma dos números positivos é %0.2f", neg, posi);


    //fim programa


    return 0;
}