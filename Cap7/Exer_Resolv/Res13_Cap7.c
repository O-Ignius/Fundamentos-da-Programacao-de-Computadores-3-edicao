#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 5
#define tam2 4
    

    //variaveis
    float prodloj[tam1] [tam2], impos[tam1] [tam2], transp[tam1];
    int i, j;
    char produto[tam1];


    //definidos
    
    
    //inicio programa
    //preencher vetor nome produto
    for (i = 0; i < tam1; i++) {
        printf("\nDigite o nome do %d° produto: \n", i + 1);
        scanf("%c%*c", &produto[i]);
        printf("\nDigite o preço de transporte do %d° produto: \n", i + 1);
        scanf("%f%*c", &transp[i]);
    }
    
    //preencher matriz 
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor do %d° produto da %d° loja: \n", i + 1, j + 1);
            scanf("%f%*c", &prodloj[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz Base: \n");
    for (i = 0; i < tam1; i++) {
        printf("\nProduto %c: \n", produto[i]);
        for (j = 0; j < tam2; j++) {
            printf("|  Loja %d: R$%0.2f  ", j + 1, prodloj[i] [j]);
        }
        printf("\nValor do transporte: %0.2f ", transp[i]);
        printf("\n");
    }
    
    //criar matriz impostos
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            //produtos ate 50
            if (prodloj[i] [j] <= 50) {
                impos[i] [j] = prodloj[i] [j] * 0.05;
            }
            
            //produtos entre 50 e 100 (inclusive)
            else if (prodloj[i] [j] > 50 && prodloj[i] [j] <= 100) {
                impos[i] [j] = prodloj[i] [j] * 0.1;
            }
            
            //produtos acima de 100
            else if (prodloj[i] [j] > 100) {
                impos[i] [j] = prodloj[i] [j] * 0.15;
            }
        }
    }
    
    //printar resultado
    printf("\nMatriz resultante: \n");
    for (i = 0; i < tam1; i++) {
        printf("\nProduto %c: \n", produto[i]);
        printf("Valor do transporte: %0.2f \n", transp[i]);
        for (j = 0; j < tam2; j++) {
            printf("|  Loja %d: R$%0.2f  ", j + 1, prodloj[i] [j]);
            printf("Imposto: R$%0.2f  ", impos[i] [j]);
            printf("Preço final: R$%0.2f  ", prodloj[i] [j] + impos[i] [j] + transp[i]);
        }
        printf("\n");
    }
    //fim programa


    return 0;
}