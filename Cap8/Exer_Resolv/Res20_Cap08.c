//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 12

typedef struct {
    float mat[tam] [tam];
}matrizes;


float med (matrizes base);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float resultado;
    int i, j;
    matrizes base;

   
    //definidos

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\n%d° Linha\n", i + 1);
        for (j = 0; j < tam; j++) {
            printf("\nDigite o valor a ser armazenado na %d° coluna: \n", j + 1);
            scanf("%f%*c", &base.mat[i] [j]);
        }
    }
    
    //printar matriz base
    printf("\nMatriz Base: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("  %0.2f  |", base.mat[i] [j]);
        }
        printf("\n");
    }

    resultado = med(base);
    
    
    printf("\nO valor da média aritmética dos elementos abaixo da diagonal principal é: %0.2f \n", resultado);

    //fim programa


    return 0;
}


//subrotina que faz média aritmetica com numeros abaixo da diagonal principal
float med (matrizes base) {
    //variaveis
    float soma;
    int i, j, qnt;
    
    
    //definidos
    soma = 0;
    qnt = 0;
    
    
    
    //inicio wub
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (j < i) {
                soma += base.mat[i] [j];
                qnt++;
            }
        }
    }
    
    soma = soma / qnt;
    
    //fim subrotina
    
    
    
    return soma;
}