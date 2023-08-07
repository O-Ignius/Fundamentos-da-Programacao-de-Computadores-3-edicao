//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 10

typedef struct {
    int vetor[tam];
    int dobro[tam * 2];
}vetores;

// subrotina ta por ai, fica experto
vetores decres(vetores A, vetores B);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i, j;
    vetores A, B, C;

   
    //definidos

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número \n", i + 1);
        scanf("%d%*c", &A.vetor[i]);
    }
    
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número \n", i + 1);
        scanf("%d%*c", &B.vetor[i]);
    }
    
    //vetor base
    printf("\nVetor A: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", A.vetor[i]);
    }
    
    printf("\nVetor B: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", B.vetor[i]);
    }
    
    
    //chamar subrotina
    C = decres(A, B);
   
   
    printf("\n\nVetor decrescente: \n");
    for (i = 0; i < tam * 2; i++) {
        printf("  %d  |", C.dobro[i]);
    }


    //fim programa


    return 0;
}



//subrotina que ordena
vetores decres(vetores A, vetores B) {
    //variaveis
    int i, j, aux;
    vetores ordem;


    //definidos
    for (i = 0; i < tam * 2; i++) {
        for (j = 0; j < tam; j++) {
            ordem.dobro[i] = A.vetor[j];
            i++;
            ordem.dobro[i] = B.vetor[j];
            i++;
        }
    }
    

    //inicio sub
    //ordenar
    for (i = 0; i < tam * 2; i++) {
        for (j = 0; j < tam * 2; j++) {
            if (ordem.dobro[i] > ordem.dobro[j]) {
                aux = ordem.dobro[i];
                ordem.dobro[i] = ordem.dobro[j];
                ordem.dobro[j] = aux;
            }
        }
    }
   
    return ordem;

    //fim sub
}