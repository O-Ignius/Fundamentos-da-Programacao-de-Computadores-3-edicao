//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


float media ();


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float retor;

   
    //definidos

    //inicio programa

    
    //chamar subrotina
    retor = media();
    
    
    //saida
    printf("\nA média aritmética é : %0.2f \n", retor);
    
    
    //fim programa


    return 0;
}


//subrotina calcula peso ideal
float media () {
    //variaveis
    float num, sum, qnt;
    
    //definidos
    sum = 0;
    qnt = 0;
    
    
    //inicio sub
    do {
        printf("\nDigite um número (0 para finalizar)\n");
        scanf("%f%*c", &num);
        
        if (num == 0) {
            continue;
        }
        
        
        //calculo
        sum += num;
        qnt++;
    }
    while (num != 0);
    
    
    //medias
    sum = sum / qnt;
    
    
    
    return sum;
    //fim subrotina
}