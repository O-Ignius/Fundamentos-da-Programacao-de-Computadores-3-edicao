//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 3

float media (int nota[tam], char op);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float resultado;
    int i, nota[tam];
    char op;

   
    //definidos

    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite a %d° nota \n", i + 1);
        scanf("%d%*c", &nota[i]);
    }
    
    printf("\nDigite a operação a ser feita: \nA: Média Aritmética \nP: Média Ponderada\n");
    scanf("%c%*c", &op);

    resultado = media(nota, op);
    
    printf("\nO resultado da média é: %0.2f\n", resultado);
    

    //fim programa


    return 0;
}


//subrotina calculo média
float media (int nota[tam], char op) {
    //variaveis
    float retu;
    int i, pesos[3] = {5 , 3 , 2};
    
    
    //definidos
    retu = 0;
    
    
    if (op == 'A' || op == 'a') {
        for (i = 0; i < tam; i++) {
            retu += nota[i];
        }
    }
    
    else {
        for (i = 0; i < tam; i++) {
            retu += nota[i] * pesos[i];
        }
    }
    
    retu = retu / tam;
    
    return retu;
}