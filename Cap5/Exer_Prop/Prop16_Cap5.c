#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float idade, soma, qnt;
    
    //definidos
    soma = 0;
    qnt = 0;
    
    do {
        printf("Digite a idade: \n");
        scanf("%f%*c", &idade);
        
        //soma das idades
        soma = soma + idade;
        
        // quantia de pessoas
        qnt++;
        
    }
    while (idade != 0);
    
    //saida
    printf("\nA média das idades digitadas foi de %0.2f", soma / (qnt - 1));
    
    
    return 0;
}