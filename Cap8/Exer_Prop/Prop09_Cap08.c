//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int divis (int num);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int num, soma;

   
    //definidos

    
    //inicio programa
    printf("\nDigite um número: \n");
    scanf("%d%*c", &num);
    
    
    
    //chamar subrotina
    soma = divis(num);
    
    
    //saida
    printf("\nA soma dos divisores do número %d é: %d \n", num, soma);
    
    
    //fim programa


    return 0;
}


//subrotina soma divisores
int divis (int num) {
    //variaveis
    int i, divisores;
    
    //definidos
    divisores = 0;
    
    
    //inicio sub
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores += i;
        }
    }
    
    
    
    
    return divisores;
    //fim subrotina
}