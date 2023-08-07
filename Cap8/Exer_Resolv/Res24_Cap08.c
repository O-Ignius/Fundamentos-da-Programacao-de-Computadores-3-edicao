//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float ope (float N1, float N2, char simb);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float N1, N2, resultado;
    char simb;
   
    //definidos
    

    //inicio programa
    //coleta de dados
    printf("\nDigite o valor do número 1: \n");
    scanf("%f%*c", &N1);
    printf("\nDigite o valor do número 2: \n");
    scanf("%f%*c", &N2);
    printf("\nDigite o tipo da operação: \n + : Adição \n * = Multiplicação \n");
    scanf("%c%*c", &simb);
    
    
    resultado = ope(N1, N2, simb);
    
    
    //printar
    printf("\nO resultado de %0.2f %c %0.2f é: %0.2f\n", N1, simb, N2, resultado);

    //fim programa


    return 0;
}


//Subrotina que realiza operação
float ope (float N1, float N2, char simb) {
    //variaveis
    float retor;
    int i, j;
    
    
    //definidos
    
    
    //inicio sub
    //realizar operação soma
    if (simb == '+') {
        retor = N1 + N2;
    }
    
    
    //realizar operação multiplicação
    else {
        retor = N1 * N2;
    }
    
    //fim subrotina
    
    
    
    return retor;
}