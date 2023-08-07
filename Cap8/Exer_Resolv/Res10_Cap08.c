//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//subrotina calculo média
float seque (int par) {
    //variaveis
    float fat, soma;
    int i, j;
    
    //definidos
    soma = 1;
    
    
    //inicio sub
    //verificar maior e menor
    for (i = 1; i <= par; i++) {
        fat = 1;
        
        for (j = 1; j <= i; j++) {
            fat = fat * j;
        }
        
        soma += (1 / fat);
    }
    
    
    return soma;
    
    //fim sub
}




//principal
int main () {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variaveis
    float par, tot;
    
    
    //definidos
    
    //inicio programa
    printf("\nDigite o parâmetro para a sequência: 1 + 1/1! + 1/2! + 1/n! \n");
    scanf("%f%*c", &par);
    
    
    
    //chamar subrotina val
    tot = seque(par);
    
    printf("\nO valor final da operação é: %0.2f \n", tot);
    
    //fim programa
    
    
    return 0;
}