//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 25


typedef struct {
    int vet[tam];
}vetores;



vetores subs (vetores A);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i;
    vetores A, resul;
   
    //definidos
    

    //inicio programa
    //coleta de dados
    
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número inteiro: \n", i + 1);
        scanf("%d%*c", &A.vet[i]);
    }
    
    printf("\nVetor base: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", A.vet[i]);
    }
    
    
    resul = subs(A);
    
    
    //printar
    printf("\nO vetor resultante é: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", resul.vet[i]);
    }
    //fim programa


    return 0;
}


//Subrotina que realiza operação
vetores subs (vetores A) {
    //variaveis
    int i;
    vetores szero;
    
    
    //definidos
    szero = A;
    
    //inicio sub
    //retirar os números negativos
    for (i = 0; i < tam; i++) {
        if (szero.vet[i] < 0) {
            szero.vet[i] = 0;
        }
    }
    
    //fim subrotina
    
    
    
    return szero;
}