#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 15

    //variaveis
    int i, vet[tam], posi[tam], iguais;


    //definidos
    iguais = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o número para a %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet[i]);
    }
    
    //zerar vetor
    for (i = 0; i < tam; i++) {
        posi[i] = 0;
    }
    
    for (i = 0; i < tam; i++) {
        if (vet[i] == 30) {
            posi[iguais] = i + 1;
            iguais++;
        }
    }
    
    //saida
    printf("\nHá %d números iguais a 30 no vetor \nPosições: \n", iguais);
    for (i = 0; i < iguais; i++) {
        printf(" %d° ;", posi[i]);
    }
    
    //fim programa


    return 0;
}