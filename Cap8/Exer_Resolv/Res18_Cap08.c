//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 6


// subrotina ta por ai, fica experto
float menor(float mat[tam] [tam]);


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
    resul = menor(mat);
   
    printf("\n\tO menor elemento da diagonal secundária da matriz é: %0.2f \n", resul);


    //fim programa


    return 0;
}



//subrotina que ordena
float menor(float mat[tam] [tam]) {
    //variaveis
    float men;
    int i, j;


    //definidos
    j = tam - 1;

    //inicio sub
    //encontrar menor elemento da diagonal secundaria
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            men = mat[j] [i];
        }
        
        else if (men > mat[j] [i]) {
            men = mat[j] [i];
        }
        
        j--;
    }
   
    return men;

    //fim sub
}