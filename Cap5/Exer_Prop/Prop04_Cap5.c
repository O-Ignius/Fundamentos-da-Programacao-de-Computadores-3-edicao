#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    int i, num, mult;
    
    //definidos
    
    
    //coleta de dados
    printf("Digite o número a ser calculado a tabuada: \n");
    scanf("%d", &num);
    
    
    for (i = 0; i <= 10; i++) {
        //operações
        mult = num * i;
        
        //saida
        printf("\n%d * %d = %d \n", num, i, mult);
    }
    
    
    return 0;
}