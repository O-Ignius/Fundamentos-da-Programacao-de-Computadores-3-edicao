//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 10

typedef struct {
    int vetor[tam];
}vetores;

typedef struct {
    int vetor[tam * 2];
}vetoresdobro;

//subrotina que gerara fatorial do parametro

vetoresdobro uniao(vetores vet1, vetores vet2) {
    //variaveis
    int i, j, rep, aux;
    vetoresdobro ordem;


    //definidos
    aux = 0;

    //inicio sub
    //zerar vetor
    for (i = 0; i < tam * 2; i++) {
        ordem.vetor[i] = 0;
    }
    
    //vetor uniao
    for (i = 0; i < tam; i++) {
        rep = 0;
        
        for (j = 0; j < tam; j++) {
            if (vet1.vetor[i] == vet2.vetor[j]) {
                rep++;
            }
        }
        
        if (rep == 0) {
            ordem.vetor[aux] = vet1.vetor[i];
            aux++;
        }
        
        rep = 0;
        
        for (j = 0; j < tam; j++) {
            if (vet2.vetor[i] == vet1.vetor[j]) {
                rep++;
            }
        }
        
        if (rep == 0) {
            ordem.vetor[aux] = vet2.vetor[i];
            aux++;
        }
    }
   
    return ordem;

    //fim sub
}


//principal

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i, j;
    vetores vet1, vet2;
    vetoresdobro uni;

   
    //definidos

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número \n", i + 1);
        scanf("%d%*c", &vet1.vetor[i]);
    }
    
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número \n", i + 1);
        scanf("%d%*c", &vet2.vetor[i]);
    }
    
    //vetor base
    printf("\nVetor 1: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vet1.vetor[i]);
    }
    
    printf("\nVetor 1: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vet2.vetor[i]);
    }
    
    
    //chamar subrotina
    uni = uniao(vet1, vet2);
   
   
    printf("\n\nVetor com fatoriais: \n");
    for (i = 0; i < tam * 2; i++) {
        printf("  %d  |", uni.vetor[i]);
    }


    //fim programa


    return 0;
}