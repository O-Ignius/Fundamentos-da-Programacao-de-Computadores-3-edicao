//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 6

typedef struct {
    float mat[tam] [tam];
}matrizes;


matrizes multi (matrizes base);


//principal
int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i, j;
    matrizes base, resultado;

   
    //definidos

    //inicio programa
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\n%d° Linha\n", i + 1);
        for (j = 0; j < tam; j++) {
            printf("\nDigite o valor a ser armazenado na %d° coluna: \n", j + 1);
            scanf("%f%*c", &base.mat[i] [j]);
        }
    }
    
    //printar matriz base
    printf("\nMatriz Base: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("  %0.2f  |", base.mat[i] [j]);
        }
        printf("\n");
    }

    resultado = multi(base);
    
    //printar matriz multiplicada
    printf("\nMatriz Final: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("  %0.2f  |", resultado.mat[i] [j]);
        }
        printf("\n");
    }

    //fim programa


    return 0;
}


//subrotina multiplica matriz
matrizes multi (matrizes base) {
    //variaveis
    int i, j;
    matrizes retorno;
    
    
    //definidos
    
    //inicio wub
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            retorno.mat[i] [j] = (base.mat[i] [j] * base.mat[i] [i]);
        }
    }
    
    //fim subrotina
    
    
    
    return retorno;
}