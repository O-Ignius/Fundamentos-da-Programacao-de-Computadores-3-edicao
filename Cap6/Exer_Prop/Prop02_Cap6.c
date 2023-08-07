#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 7

    //variaveis
    int i, vet[tam], mul2, mul3, multi, mu2[tam], mu3[tam], mult23[tam];


    //definidos
    mul2 = 0;
    mul3 = 0;
    multi = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet[i]);
    }
    
    for (i = 0; i < tam; i++) {
        //multiplo de 2
        if (vet[i] % 2 == 0) {
            mu2[mul2] = vet[i];
            mul2++;
        }
        
        //multiplo de 3
        if (vet[i] % 3 == 0) {
            mu3[mul3] = vet[i];
            mul3++;
        }
        
        //multiplo de ambos
        if (vet[i] % 3 == 0 && vet[i] % 2 == 0) {
            mult23[multi] = vet[i];
            multi++;
        }
        
    }
    
    printf("\nMultiplos de 2: \n");
    for (i = 0; i < mul2; i++) {
        printf("|  %d  ", mu2[i]);
    }
    
    printf("\nMultiplos de 3: \n");
    for (i = 0; i < mul3; i++) {
        printf("|  %d  ", mu3[i]);
    }
    
    printf("\nMultiplos de 2 e 3: \n");
    for (i = 0; i < multi; i++) {
        printf("|  %d  ", mult23[i]);
    }
    //fim programa


    return 0;
}S