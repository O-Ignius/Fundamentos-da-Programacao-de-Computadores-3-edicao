#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 6

    //variaveis
    int i, vet[tam], par, pares[tam], impar, impares[tam];


    //definidos
    par = 0;
    impar = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet[i]);
    }
    
    for (i = 0; i < tam; i++) {
        
        //caso seja par
        if (vet[i] % 2 == 0) {
            pares[par] = vet[i];
            par++;
        }
        
        //se nao é impar
        else {
            impares[impar] = vet[i];
            impar++;
        }
    }
    
    printf("\nHá %d números pares que são: \n", par);
    for (i = 0; i < par; i++) {
        printf("|  %d  ", pares[i]);
    }
    
    printf("\nHá %d números impares \n", impar);
    for (i = 0; i < impar; i++) {
        printf("|  %d  ", impares[i]);
    }
    //fim programa


    return 0;
}