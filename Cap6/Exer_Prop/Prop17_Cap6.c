#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    float vet1[tam], vet2[tam], vet3[tam * 2], aux;
    int i, j;


    //definidos
    j = 0;

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
    
    //colocar tudo no vetor 3
    for (i = 0; i < tam; i++) {
        vet3[j] = vet1[i];
        j++;
        vet3[j] = vet2[i];
        j++;
    }
    
    
    
    //ordenar vetor 3
    for (i = 0; i < tam * 2; i++) {
        for (j = 0; j < tam * 2; j++) {
            if (vet3[i] > vet3[j]) {
                aux = vet3[i];
                vet3[i] = vet3[j];
                vet3[j] = aux;
            }
        }
    }
    
    //saida
    printf("\nVetor resultante: \n");
    for (i = 0; i < tam * 2; i++) {
        printf("|  %0.2f  ", vet3[i]);
    }
    //fim programa


    return 0;
}