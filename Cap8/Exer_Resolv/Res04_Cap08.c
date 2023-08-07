//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//subrotina que coleta e verifica se o numero é positivo ou não
int transf (int seg) {
    //variaveis
    int segu, min, hora;
    
    //definidos
    segu = 0;
    min = 0;
    hora = 0;
    
    //calculo
    segu = seg;
    min = segu / 60;
    segu = segu % 60;
    hora = min / 60;
    min = min - (hora * 60);
    
    
    //saida
    printf("\n%d : %d : %d \n", hora, min, segu);
    
    return (hora, min, segu);
}


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variáveis
    int seg, volta;
    
    
    //inicio programa
    //coleta de dados
    do {
        printf("\nDigite o número de segundos: \n");
        scanf("%d%*c", &seg);
    }
    while (seg < 0);
    
    //saida
    printf("\n%d segundos são: \n", seg);
    
    volta = transf(seg);
    //fim do programa
    
    return 0;
}