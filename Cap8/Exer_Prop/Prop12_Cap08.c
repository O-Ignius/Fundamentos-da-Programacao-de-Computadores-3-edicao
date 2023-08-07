//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int pote (int X, int Z);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int X, Z, pot;

   
    //definidos

    
    //inicio programa
    //coleta de dados
    printf("\nDigite o valor de X: \n");
    scanf("%d%*c", &X);
    printf("\nDigite o valor de Z: \n");
    scanf("%d%*c", &Z);
    
    
    
    
    //chamar subrotina
    pot = pote(X, Z);
    
    
    //saida
    printf("\nO resultado de %d elevado a %d é: %d \n", X, Z, pot);
    
    
    //fim programa


    return 0;
}


//subrotina sequencia 1 + 1 / 2 + 1 / 3 ...
int pote (int X, int Z) {
    //variaveis
    int i, multi;
    
    //definidos
    multi = X;
    
    
    //inicio sub
    if (Z == 0) {
        multi = 1;
    }
    
    else {
        for (i = 0; i < Z - 1; i++) {
            multi = multi * X;
        }
    }
    
    
    
    return multi;
    //fim subrotina
}