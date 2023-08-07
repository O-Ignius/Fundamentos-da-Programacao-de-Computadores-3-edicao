#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    int i, j, mult;
    
    //definidos
    
    
    //o que faz
    printf("Tabuada de 1 a 10: \n");

    
    
    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            //operações
            mult = j * i;
        
            //saida
            printf("%d * %d = %d \n", i, j, mult);
        }
        printf("\n");
    }
    
    
    return 0;
}