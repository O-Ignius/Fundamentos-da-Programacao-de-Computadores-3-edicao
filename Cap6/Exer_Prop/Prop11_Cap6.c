#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    int i, vet1[tam], par, impar, pares[tam], impares[tam];


    //definidos
    par = 0;
    impar = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o número da %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet1[i]);
    }
    
    for (i = 0; i < tam; i++) {
        if (vet1[i] % 2 == 0) {
            pares[par] = vet1[i];
            par++;
        }
        
        else {
            impares[impar] = vet1[i];
            impar++;
        }
    }
    
    //printar vetores resultantes
    printf("\nVetor par: \n");
    for (i = 0; i < par; i++) {
        printf("|  %d  ", pares[i]);
    }
    
    printf("\nVetor impar: \n");
    for (i = 0; i < impar; i++) {
        printf("|  %d  ", impares[i]);
    }
    
    //fim programa


    return 0;
}