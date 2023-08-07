//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define lin 3
#define col 4

typedef struct {
    float vet[lin * col];
}vetores;



vetores copia (float base[lin] [col]);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float base[lin] [col];
    int i, j;
    vetores resultado;
   
    //definidos
    

    //inicio programa
    //coleta de dados
    for (i = 0; i < lin; i++) {
        printf("\n%d° Linha: \n", i + 1);
        
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor da %d° coluna\n", j + 1);
            scanf("%f%*c", &base[i] [j]);
        }
    }
    
    
    //printar matriz base
    printf("\nMatriz base\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("  %0.2f  |", base[i] [j]);
        }
        printf("\n");
    }
    
    
    resultado = copia(base);
    
    
    //printar
    printf("\nVetor com base na matriz: \n");
    for (i = 0; i < lin * col; i++) {
        printf("  %0.2f  |", resultado.vet[i]);
    }

    //fim programa


    return 0;
}


//Subrotina que divide o vetor em positivos e negativos
vetores copia (float base[lin] [col]) {
    //variaveis
    int i, j, aux;
    vetores modifi;
    
    
    //definidos
    aux = 0;
    
    
    //inicio sub
    
    
    //ver qual é positivo e qual é negativo
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            modifi.vet[aux] = base[i] [j];
            aux++;
        }
    }
    
    
    //fim subrotina
    
    
    
    return modifi;
}