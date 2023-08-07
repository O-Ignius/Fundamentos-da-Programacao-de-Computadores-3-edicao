#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    int i, j, num[10], prim, aux1;
    
    //definidos
    prim = 0;
    
    
    for (i = 0; i < 10; i++) {
        //definidos
        aux1 = 0;
        
        //coleta de dados
        printf("Digite um número inteiro: \n");
        scanf("%d", &num[i]);
        
        //divisao do numero
        for (j = 1; j <= num[i]; j++) {
            //divisoes com resto 0 (prim = 2 divi) 
            if (num[i] == 1) {
                aux1 = 2;
            }
            
            else if (num[i] % j == 0) {
                aux1++;
            }
        }
        
        //quantia de primos
        if (aux1 == 2) {
            prim++;
        }
    }
    
    //saida
    printf("Há %d números inteiros dentre a sequência digitada", prim);
    
    return 0;
}