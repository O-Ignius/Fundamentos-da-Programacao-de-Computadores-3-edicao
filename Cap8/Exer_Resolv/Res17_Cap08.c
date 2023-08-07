//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 5


// subrotina ta por ai, fica experto
float soma(float mat[tam] [tam]);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    float mat[tam] [tam], resul;
    int i, j;
    

   
    //definidos

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\n%d° Linha:\n", i + 1);
        for (j = 0; j < tam; j++) {
            printf("\nDigite o valor do número na %d° coluna: \n", j + 1);
            scanf("%f%*c", &mat[i] [j]);
        }
    }
    
    //matriz base
    printf("\nMatriz Base: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("  %0.2f  |", mat[i] [j]);
        }
        printf("\n");
    }
    
    
    //chamar subrotina
    resul = soma(mat);
   
    printf("\n\tA soma dos elementos da matriz é: %0.2f \n", resul);


    //fim programa


    return 0;
}



//subrotina que ordena
float soma(float mat[tam] [tam]) {
    //variaveis
    float sum;
    int i, j;


    //definidos
    sum = 0;
    

    //inicio sub
    //somar elementos
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            sum += mat[i] [j];
        }
    }
   
    return sum;

    //fim sub
}