//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int transf (int hora, int min, int seg);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int hora, min, seg, resultado;

   
    //definidos

    //inicio programa
    //coleta de dados
    printf("\nDigite o valor das horas: \n");
    scanf("%d%*c", &hora);
    printf("\nDigite o valor dos minutos: \n");
    scanf("%d%*c", &min);
    printf("\nDigite o valor dos segundos: \n");
    scanf("%d%*c", &seg);

    resultado = transf(hora, min, seg);
    
    
    printf("\n%d : %d : %d = %d segundos\n", hora, min, seg, resultado);

    //fim programa


    return 0;
}


//subrotina que transforma horas min e segundos em segundos
int transf (int hora, int min, int seg) {
    //variaveis
    int i, trans;
    
    
    //definidos
    trans = 0;
    
    
    
    //inicio sub
    trans += ((hora * 60) * 60);
    trans += (min * 60);
    trans += seg;
    
    
    //fim subrotina
    
    
    
    return trans;
}