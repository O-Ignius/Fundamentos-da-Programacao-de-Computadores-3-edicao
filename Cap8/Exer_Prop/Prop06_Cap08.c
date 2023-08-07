//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


float ideal (float altu, char sex);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float altu, peso;
    char sex;

   
    //definidos

    //inicio programa
    //coleta de dados
    printf("\nDigite a altura da pessoa: \n");
    scanf("%f%*c", &altu);
    printf("\nDigite o sexo da pessoa:  F: Feminino  M: Masculino \n");
    scanf("%c%*c", &sex);

    
    //chamar subrotina
    peso = ideal(altu, sex);
    
    
    //saida
    printf("\nO peso ideal é: %0.2f \n", peso);
    
    
    //fim programa


    return 0;
}


//subrotina calcula peso ideal
float ideal (float altu, char sex) {
    //variaveis
    float pes;
    
    //definidos
    
    
    //inicio sub
    //mulher
    if (sex == 'F' || sex == 'f') {
        pes = (62.1 * altu) - 44.7;
    }
    
    //homem
    else {
        pes = (72.7 * altu) - 58;
    }
    
    return pes;
    //fim subrotina
}