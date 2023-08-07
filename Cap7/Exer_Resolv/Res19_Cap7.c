#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define lin 5
#define col 4
    

    //variaveis
    int i, j, mat[lin] [col], aux, linhapar, linhaimpar, colunapp, colunapi, entra1, entra2;


    //definidos
    i = 0;
    j = 0;
    linhapar = 0;
    linhaimpar = 1;
    colunapp = 0;
    colunapi = 0;
    entra1 = 0;
    entra2 = 0;
    
    
    //inicio programa
    //Receber valores e coloca-los numa matriz
    do {
        j = 0;
        
        do {
            printf("\nDigite um valor para a matriz \n");
            scanf("%d%*c", &aux);
            
            //se for par
            if (aux % 2 == 0 && linhapar < lin) {
                mat[linhapar] [colunapp] = aux;
                colunapp++;
                j++;
            }
            
            //se nao é impar
            else if (aux % 2 != 0 && linhaimpar < lin) {
                mat[linhaimpar] [colunapi] = aux;
                colunapi++;
                j++;
            }
            
            //pares
            if (entra1 == 0) {
                //caso os pares encham
                if (colunapp == 0 && linhapar >= lin) {
                    printf("\nLimite de números pares atingidos! \n");
                    entra1++;
                    continue;
                }

                //se nao, va para a proxima linha par
                else if (colunapp == col) {
                    linhapar += 2;
                    colunapp = 0;
                }
            }
            
            else {
                printf("\nLimite de números pares atingidos! \n");
            }
            
            //impares
            if (entra2 == 0) {
                //caso os impares encham
                if (colunapi == 0 && linhaimpar >= lin) {
                    printf("\nLimite de números impares atingidos! \n");
                    entra2++;
                    continue;
                }

                //se nao, va para a proxima linha impar
                else if (colunapi == col) {
                    linhaimpar += 2;
                    colunapi = 0;
                }
            }
            
            else {
                printf("\nLimite de números impares atingidos! \n");
            }
            
        }
        while(j != col);
        
        i++;
    }
    while(i != lin);
    
    //printar matriz
    printf("\n\nMatriz: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //fim programa


    return 0;
}