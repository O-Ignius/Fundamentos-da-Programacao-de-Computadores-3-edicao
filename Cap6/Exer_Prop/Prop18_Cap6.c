#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 15

    //variaveis
    float vet[tam], mainum, menum;
    int i, menpos, maipos;


    //definidos

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%f%*c", &vet[i]);
    }

    //pegar maior e menor valores
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            mainum = vet[i];
            maipos = i + 1;
            menum = vet[i];
            menpos = i + 1;
        }
        else if (vet[i] > mainum) {
            mainum = vet[i];
            maipos = i + 1;
        }

        if (vet[i] < menum) {
            menum = vet[i];
            menpos = i + 1;
        }
    }

    //saida
    printf("\nO maior número é %0.2f, na %d° posição \n", mainum, maipos);
    printf("\nO menor número é %0.2f, na %d° posição \n", menum, menpos);

    //fim programa


    return 0;
}