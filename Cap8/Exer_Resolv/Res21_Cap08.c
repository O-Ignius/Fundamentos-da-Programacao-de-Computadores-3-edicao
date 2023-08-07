//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int soma (int X, int Y);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i, j, X, Y, resultado;

   
    //definidos
    

    //inicio programa
    do {
        //coleta de dados
        printf("\nDigite o valor de X:\n");
        scanf("%d%*c", &X);
        printf("\nDigite o valor de Y:\n");
        scanf("%d%*c", &Y);
        
        if ((X == 0 || Y == 0) || (X == 0 && Y == 0)) {
            printf("\n------Ambos os valores tem de ser maior que 0------ \n");
            continue;
        }
        
        if (X > Y) {
            printf("\n------X tem que ser menor que Y------ \n");
            continue;
        }
        
        
        //chamar subrotina
        resultado = soma(X, Y);
    
        //printar soma
        printf("\nA soma dos números primos entre %d e %d é: %d \n", X, Y, resultado);
        
        if (X == Y && X > 0 && Y > 0) {
            break;
        }
        
    }
    while (!(X != Y) || !(X != 0));

    //fim programa


    return 0;
}


//subrotina que soma os primos entre os parametros
int soma (int X, int Y) {
    //variaveis
    int i, j, soma, div;
    
    
    //definidos
    soma = 0;
    div = 0;
    
    
    
    //inicio wub
    for (i = X; i <= Y; i++) {
        div = 0;
        
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                div++;
            }
        }
        
        if (i == 1) {
            soma += 1;
        }
        
        if (div == 2) {
            soma += i;
        } 
        
    }
    
    
    //fim subrotina
    
    
    
    return soma;
}