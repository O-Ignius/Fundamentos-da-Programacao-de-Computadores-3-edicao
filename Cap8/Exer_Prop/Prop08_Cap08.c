//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int fato (int num);


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
    soma = fato(num);
    
    
    //saida
    printf("\n%d! = %d \n", num, soma);
    
    
    //fim programa


    return 0;
}


//subrotina calcula peso ideal
int fato (int num) {
    //variaveis
    int i, fat;
    
    //definidos
    fat = 1;
    
    
    //inicio sub
    for (i = 1; i <= num; i++) {
        fat = fat * i; 
    }
    
    
    
    
    return fat;
    //fim subrotina
}