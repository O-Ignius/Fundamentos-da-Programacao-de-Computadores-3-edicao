//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 10

typedef struct {
    int vetor[tam];
}vetores;

//subrotina que gerara fatorial do parametro

vetores fator(vetores base) {
    //variaveis
    int i, j;
    vetores fat;


    //definidos


    //inicio sub
    fat = base;
    
    
    for (i = 0; i < tam; i++) {
        for (j = fat.vetor[i] - 1; j > 0; j--) {
            fat.vetor[i] = fat.vetor[i] * j;
        }
    }
   
    return fat;

    //fim sub
}


//principal

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i, j;
    vetores ret, base;

   
    //definidos

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número \n", i + 1);
        scanf("%d%*c", &base.vetor[i]);
    }
    
    //vetor base
    printf("\nVetor base: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", base.vetor[i]);
    }
    
    
    //chamar subrotina
    ret = fator(base);
   
   
    printf("\n\nVetor com fatoriais: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", ret.vetor[i]);
    }


    //fim programa


    return 0;
}