//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


float volu (float raio);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float raio, result;

   
    //definidos

    //inicio programa
    //coleta de dados
    printf("\nDigite o raio da esfera: \n");
    scanf("%f%*c", &raio);

    result = volu(raio);
    
    
    printf("\nVolume da esfera de raio %0.2f é: %0.2f \n", raio, result);

    //fim programa


    return 0;
}


//subrotina calcula volume circuncefencia
float volu (float raio) {
    //variaveis
    float vol;
    
    
    //definidos
    
    
    //inicio sub
    vol = M_PI * ((pow(raio , 3)) * 4/3);
    
    return vol;
    //fim subrotina
}