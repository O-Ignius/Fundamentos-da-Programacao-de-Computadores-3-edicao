//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


void verif (float num);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float num;

   
    //definidos

    //inicio programa
    //coleta de dados
    printf("\nDigite um número: \n");
    scanf("%f%*c", &num);

    
    //chamar subrotina
    verif(num);
    
    
    //fim programa


    return 0;
}


//subrotina calcula volume circuncefencia
void verif (float num) {
    //variaveis
    
    
    //definidos
    
    
    //inicio sub
    if (num >= 0) {
        printf("\nO valor digitado é Positivo\n");
    }
    
    else {
        printf("\nO valor digitado é Negativo \n");
    }
    
    //fim subrotina
}