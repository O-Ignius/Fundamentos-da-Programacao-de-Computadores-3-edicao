//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int divis (int N1, int N2);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int N1, N2, retor;

   
    //definidos

    //inicio programa
    //coleta de dados
    printf("\nDigite o 1° número: \n");
    scanf("%d%*c", &N1);
    printf("\nDigite o 2° número: \n");
    scanf("%d%*c", &N2);

    retor = divis(N1, N2);
    
    
    printf("\nRetorno : %d\n", retor);

    //fim programa


    return 0;
}


//subrotina retorna divisor
int divis (int N1, int N2) {
    //variaveis
    int i, cop1, cop2;
    
    
    //definidos
    cop1 = N1;
    cop2 = N2;
    
    
    //inicio sub
    if (N1 % N2 == 0) {
        printf("\nN2 é divisor de N1 !\n");
        return 0;
    }
    
    else {
        do {
            cop2--;
        }
        while(cop1 % cop2 != 0);
        
        printf("\nN2 não é divisor de N1 !\n");
        printf("\nRetorno = divisor do N1: \n");
        
        return cop2;
    }
    
    
    //fim subrotina
}