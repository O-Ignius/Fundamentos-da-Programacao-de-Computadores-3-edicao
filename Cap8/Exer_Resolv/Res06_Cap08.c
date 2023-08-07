//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//subrotina para multiplicar o vetor
int tab (int para) {
    
#define tam 9
    
    //variaveis
    int i, j, vetbas[tam], mult[tam];
    
    //definidos
    
    //calculo
    for (i = 0; i < tam; i++) {
        vetbas[i] = i + 1;
        mult[i] = i + 1;
    }
    
    for (i = 0; i < para; i++) {
        for (j = i; j < tam; j++) {
            printf("|  %d  ", mult[j]);
            
            mult[j] = mult[j] + vetbas[j];
        }
        
        printf("\n");
    }
    
    return 0;
}


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variáveis
    int vet, para, stop, volta;
    
    
    //inicio programa
    //coleta de dados
    do {
        stop = 0;
        
        printf("\nDigite valor que será utilizado como parâmetro: \n");
        scanf("%d%*c", &para);
        
        if (para >=1 && para <= 9) {
            stop = 1;
        }
        
        else {
            printf("\nO intervalo para o parâmetro é entre 1 e 9 !! \n");
        }
    }
    while (stop != 1);
    
    
    volta = tab(para);
    //fim do programa
    
    return 0;
}