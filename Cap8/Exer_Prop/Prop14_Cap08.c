//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 30


typedef struct {
    int vet[tam];
}vetores;

typedef struct {
    int posi[tam];
    int nega[tam];
}vetordivi;


vetordivi divis (vetores base);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i;
    vetores base;
    vetordivi result;

   
    //definidos

    
    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° valor: \n", i + 1);
        scanf("%d%*c", &base.vet[i]);
    }
    
    
    
    //chamar subrotina
    result = divis(base);
    
    
    //saida
    printf("\nVetor com os Positivos\n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", result.posi[i]);
    }
    
    printf("\nVetor com os Negativos\n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", result.nega[i]);
    }
    
    
    //fim programa


    return 0;
}


//subrotina que divide o vetor
vetordivi divis (vetores base) {
    //variaveis
    int i, aux1, aux2;
    vetordivi dividir;
    
    //definidos
    aux1 = 0;
    aux2 = 0;
    
    
    //inicio sub
    //zerar vetor
    for (i = 0; i < tam; i++) {
        dividir.posi[i] = 0;
        
        dividir.nega[i] = 0;
    }
    
    for (i = 0; i < tam; i++) {
        if (base.vet[i] > 0) {
            dividir.posi[aux1] = base.vet[i];
            aux1++;
        }
        
        else {
            dividir.nega[aux2] = base.vet[i];
            aux2++;
        }
    }
    
    
    
    return dividir;
    //fim subrotina
}