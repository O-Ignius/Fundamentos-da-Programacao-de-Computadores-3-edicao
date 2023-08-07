#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 6
#define tam2 4
    

    //variaveis
    int i, j, mat1[tam1] [tam2], mat2[tam1] [tam2], mais30;


    //definidos
    mais30 = 0;
    
    
    //inicio programa
    //preencher matriz 
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor da %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat1[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz Base: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat1[i] [j]);
        }
        printf("\n");
    }
    
    
    //verificar matriz
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            //quantia de números maior que 30
            if (mat1[i] [j] > 30) {
                mais30++;
            }
            
            //preencher segunda matriz com valores diferentes de 30
            if (mat1[i] [j] != 30) {
                mat2[i] [j] = mat1[i] [j];
            }
            
            //se o valor for igual a 30, preencher posição com 0
            else {
                mat2[i] [j] = 0;
            }
        }
    }
    
    //printar matriz resultante
    printf("\nMatriz Resultante: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat2[i] [j]);
        }
        printf("\n");
    }
    
    printf("\nA quantia de números maior que 30 é: %d \n", mais30);
    //fim programa


    return 0;
}