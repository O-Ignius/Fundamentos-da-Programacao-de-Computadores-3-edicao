#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define lin 10
#define col 5



//indicar subrotinas
float recebe (float base[lin] [col]);
float soma (float copibas[lin] [col]);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    float base[lin] [col], resul;
    int i, j;
   
   
    //inicio programa
    for (i = 0; i < lin; i++) {
        printf("\n%d° linha: \n", i + 1);
        
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor da %d° coluna: \n", j + 1);
            scanf("%f%*c", &base[i] [j]);
        }
    }
    
    printf("\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("  %0.2f  |", base[i] [j]);
        }
        printf("\n");
    }
    
   
    //chamar subrotinas
    resul = recebe(base);
   
   
    //saidas
    printf("\nA soma dos valores abaixo da 6° linha é: %0.2f\n", resul);
   
   
   
    //fim programa
   
   
    return 0;
}


//subrotina recebe valor da matriz
float recebe (float base[lin] [col]) {
    //variaveis
    float sum, copibas[lin] [col];
    int i, j;
   
   
    //definidos
   
   
    //inicio sub
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            copibas[i] [j] = base[i] [j];
        }
    }
    
    sum = soma(copibas);
    
   
    return sum;
   
    //fim sub
   
}


//subrotina que calcula a soma dos elementos abaixo da 6° linha
float soma (float copibas[lin] [col]) {
    //variaveis
    float somando;
    int i, j;
   
   
    //definidos
   somando = 0;
   
    //inicio sub
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i > 5) {
                somando += copibas[i] [j];
            }
        }
    }
    
   
    return somando;
   
    //fim sub
}