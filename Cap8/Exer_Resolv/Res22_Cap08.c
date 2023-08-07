//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 8

typedef struct {
    float vet[tam];
}vetores;

typedef struct {
    float posi[tam];
    float nega[tam];
}vetodiv;


vetodiv divi (vetores base);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i;
    vetores base;
    vetodiv resultado;
   
    //definidos
    

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor do %d° número\n", i + 1);
        scanf("%f%*c", &base.vet[i]);
    }
    
    resultado = divi(base);
    
    
    //printar
    printf("\nVetor com Positivos: \n");
    for (i = 0; i < tam; i++) {
        printf("  %0.2f  |", resultado.posi[i]);
    }

    printf("\nVetor com Negativos: \n");
    for (i = 0; i < tam; i++) {
        printf("  %0.2f  |", resultado.nega[i]);
    }

    //fim programa


    return 0;
}


//Subrotina que divide o vetor em positivos e negativos
vetodiv divi (vetores base) {
    //variaveis
    int i, aux1, aux2;
    vetodiv retor;
    
    
    //definidos
    aux1 = 0;
    aux2 = 0;
    
    
    //inicio sub
    
    //zerar o resultado
    for (i = 0; i < tam; i++) {
        retor.posi[i] = 0;
        retor.nega[i] = 0;
    }
    
    
    //ver qual é positivo e qual é negativo
    for (i = 0; i < tam; i++) {
        if (base.vet[i] >= 0) {
            retor.posi[aux1] = base.vet[i];
            aux1++;
        }
        
        else {
            retor.nega[aux2] = base.vet[i];
            aux2++;
        }
    }
    
    
    //fim subrotina
    
    
    
    return retor;
}