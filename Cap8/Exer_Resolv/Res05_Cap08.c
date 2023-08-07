//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//subrotina que coleta e verifica se o numero é positivo ou não
int perc (float valan, float valno) {
    //variaveis
    float percent;
    
    //definidos
    
    //calculo
    percent = (valno / valan) * 100;
    
    
    //saidas
    if (valan < valno) {
        printf("\nA porcentagem de aumento do preço do produto foi de %0.2f%% sobre o valor antigo \n", percent);
    }
    
    else {
        printf("\nA porcentagem de decréscimo do preço do produto foi de %0.2f%% sobre o valor antigo \n", percent);
    }
    
    
    return (percent);
}


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variáveis
    float valno, valan, volta;
    
    
    //inicio programa
    //coleta de dados
    do {
        printf("\nDigite valor antigo do produto: \n");
        scanf("%f%*c", &valan);
        printf("\nDigite valor novo do produto: \n");
        scanf("%f%*c", &valno);
    }
    while (!(valno >=0 ) || !(valan >= 0));
    
    
    volta = perc(valan, valno);
    //fim do programa
    
    return 0;
}