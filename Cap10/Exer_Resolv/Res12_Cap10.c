//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//indicar subrotinas
int tudominuto(int hrini, int mini, int hrfim, int minfim);


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int hrini, hrfim, mini, minfim, mintot;
    
    
    //definidos
   
   
    //inicio programa
    //coletar dados
    printf("\nDigite as horas iniciais: \n");
    scanf("%d%*c", &hrini);
    printf("\nDigite os minutos iniciais: \n");
    scanf("%d%*c", &mini);
    printf("\nDigite as horas finais: \n");
    scanf("%d%*c", &hrfim);
    printf("\nDigite os minutos finais: \n");
    scanf("%d%*c", &minfim);
   
    
    //chamar subrotina
    mintot = tudominuto(hrini, mini, hrfim, minfim);
    
    //saidas
    printf("\nA duração total em minutos foi de: %d minutos\n", mintot);
    printf("\nA duração total em segundos foi de: %d segundos\n", mintot * 60);
   
    //fim programa
   
   
    return 0;
}


//subrotinas
int tudominuto(int hrini, int mini, int hrfim, int minfim) {
    //variaveis
    int horatot;
   
   
    //definidos
   
    
    //inicio sub
    if (hrfim > hrini) {
        horatot = ((hrfim - hrini) * 60) + (minfim - mini);
    }
    
    else {
        horatot = ((24 - hrini) * 60) + (hrfim * 60) + (minfim - mini);
    }
    
    return horatot;
   
    //fim sub
   
}