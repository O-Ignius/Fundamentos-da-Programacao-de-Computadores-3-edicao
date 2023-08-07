#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define tam 5
    
    //variaveis
    float vet[tam];
    int i, menu;
    
    //definidos
    
    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%f%*c", &vet[i]);
    }
    
    do {
        printf("\nEscolha uma opção: \n1: Vetor na ordem direta \n2: Vetor na ordem inversa \n0: Parar\n");
        scanf("%d%*c", &menu);
        
        //parar
        if (menu == 0) {
            continue;
        }
        
        //ordem direta
        else if (menu == 1) {
            printf("\nVetor na ordem direta:\n");
            for (i = 0; i < tam; i++) {
                printf("|  %0.2f  ", vet[i]);
            }
        }
        
        //ordem inversa
        else if (menu == 2) {
            printf("\nVetor na ordem Inversa:\n");
            for (i = tam - 1; i >= 0; i--) {
                printf("|  %0.2f  ", vet[i]);
            }
        }
        
        else {
            printf("\nOpção invalida, tente novamente!!\n");
        }
    }
    while(menu != 0);
    
    //fim programa
    


    return 0;
}