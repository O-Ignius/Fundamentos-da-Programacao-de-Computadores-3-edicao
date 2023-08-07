#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 5

    //variaveis
    int i, j, A[tam], B[tam], sub[tam], aux, subtot;


    //definidos
    aux = 0;
    j = tam - 1;
    subtot = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor A: \n", i + 1);
        scanf("%d%*c", &A[i]);
    }
    
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor B: \n", i + 1);
        scanf("%d%*c", &B[i]);
    }

    //subtrair primeiro A do ultimo B
    for (i = 0; i < tam; i++) {
        sub[aux] = B[j] - A[i];
        j--;
        aux++;
    }
    
    //total de subrações
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            subtot = sub[i];
        }
        
        else {
            subtot = subtot + sub[i];
        }
    }
    
    //saida
    printf("\nResultado subtração: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", sub[i]);
    }
    
    printf("\nTotal Subtração: %d \n", subtot);
    
    //fim programa


    return 0;
}