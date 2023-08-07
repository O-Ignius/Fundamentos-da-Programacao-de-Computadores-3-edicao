//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


float seque (int num);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int num;
    float sequencia;

   
    //definidos

    
    //inicio programa
    do {
        printf("\nDigite um número: \n");
        scanf("%d%*c", &num);
        
        if (num < 1) {
            printf("\nO número precisa ser maior ou igual a 1 !\n");
            num = -1;
        }
        
        else {
            break;
        }
        
    }
    while (num == 0);
    
    
    
    
    //chamar subrotina
    sequencia = seque(num);
    
    
    //saida
    printf("\nO resultado da sequência é: %0.2f \n", sequencia);
    
    
    //fim programa


    return 0;
}


//subrotina sequencia 1 + 1 / 2 + 1 / 3 ...
float seque (int num) {
    //variaveis
    float soma;
    int i;
    
    //definidos
    soma = 0;
    
    
    //inicio sub
    for (i = 1; i <= num; i++) {
        soma += (1.0 / i);
    }
    
    
    
    
    return soma;
    //fim subrotina
}