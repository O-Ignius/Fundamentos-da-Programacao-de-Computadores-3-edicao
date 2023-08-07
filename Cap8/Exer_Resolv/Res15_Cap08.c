//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 5

typedef struct {
    float vetor[tam];
}vetores;

// subrotina ta por ai, fica experto
vetores cresc(vetores base);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i, j;
    vetores base, ordem;

   
    //definidos

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número \n", i + 1);
        scanf("%f%*c", &base.vetor[i]);
    }
    
    //vetor base
    printf("\nVetor base: \n");
    for (i = 0; i < tam; i++) {
        printf("  %0.2f  |", base.vetor[i]);
    }
    
    
    //chamar subrotina
    ordem = cresc(base);
   
   
    printf("\n\nVetor com fatoriais: \n");
    for (i = 0; i < tam; i++) {
        printf("  %0.2f  |", ordem.vetor[i]);
    }


    //fim programa


    return 0;
}



//subrotina que ordena
vetores cresc(vetores base) {
    //variaveis
    float aux;
    int i, j;
    vetores reto;


    //definidos
    reto = base;

    //inicio sub
    //ordenar
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (reto.vetor[i] < reto.vetor[j]) {
                aux = reto.vetor[i];
                reto.vetor[i] = reto.vetor[j];
                reto.vetor[j] = aux;
            }
        }
    }
   
    return reto;

    //fim sub
}