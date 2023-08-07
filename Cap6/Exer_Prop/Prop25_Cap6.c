#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 15

    //variaveis
    float vet[tam], maior;
    int i;


    //definidos
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%f%*c", &vet[i]);
    }
    
    //saida
    printf("\nVetor inicial: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %0.2f  ", vet[i]);
    }

    // maior numero
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            maior = vet[i];
        }
        
        else if (maior < vet[i]) {
            maior = vet[i];
        }
    }
    
    //dividir o vetor
    for (i = 0; i < tam; i++) {
        vet[i] = vet[i] / maior;
    }
    
    //saida
    printf("\n\nVetor pós divisão por %0.2f: \n", maior);
    for (i = 0; i < tam; i++) {
        printf("|  %0.2f  ", vet[i]);
    }
    
    //fim programa


    return 0;
}