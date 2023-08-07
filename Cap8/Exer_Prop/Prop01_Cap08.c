//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int sum (int N);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int N, resultado;

   
    //definidos

    //inicio programa
    //coleta de dados
    printf("\nDigite o valor de N: \n");
    scanf("%d%*c", &N);

    resultado = sum(N);
    
    
    printf("\nO valor da soma dos inteiros entre 1 e %d é: %d", N, resultado);

    //fim programa


    return 0;
}


//subrotina que faz média aritmetica com numeros abaixo da diagonal principal
int sum (int N) {
    //variaveis
    int i, soma;
    
    
    //definidos
    soma = 0;
    
    
    
    //inicio sub
    for (i = 2; i <= N; i++) {
        soma += i;
    }
    
    
    //fim subrotina
    
    
    
    return soma;
}