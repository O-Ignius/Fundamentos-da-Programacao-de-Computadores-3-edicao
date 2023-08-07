#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 5

    //variaveis
    int i, vet1[tam], soma;


    //definidos
    soma = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o número da %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet1[i]);
    }
    
    for (i = 0; i < tam; i++) {
        soma = soma + vet1[i];
    }
    
    for (i = 0; i < tam; i++) {
        printf("\n%d° número: %d\n", i + 1, vet1[i]);
    }
    
    printf("\nA soma desses números resulta em %d", soma);
    
    //fim programa


    return 0;
}