#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 5


    //variaveis
    int i, j, mat[tam] [tam], aux, aux1, aux2lin, aux2col, aux3lin, aux3col, centro, entrou, entrou1, entrou2, baixo, cima;


    //definidos
    entrou = 0;
    centro = 0;
    aux1 = 0;
    aux2lin = 0;
    aux2col = 1;
    aux3lin = 1;
    aux3col = 0;
    baixo = 0;
    cima = 0;



    //inicio programa
    //zerar matriz pq sim
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            mat[i] [j] = 0;
        }
    }

    //preencher matriz 

    do {
        entrou = 0;

        printf("\nDigite um valor para a matriz: \n");
        scanf("%d%*c", &aux);


        if (entrou == 0) {
            if (aux % 5 == 0) {
                if (centro == 0) {

                    if (aux1 != tam) {
                        mat[aux1] [aux1] = aux;
                        aux1++;

                        entrou++;
                    }

                    else {
                        printf("\nDiagonal principal totalmente preenchida\n");
                        centro = 1;
                    }
                }
                
                else {
                    printf("\nDiagonal principal totalmente preenchida\n");
                }
            }
        }

        if (entrou == 0) {
            if (aux % 11 == 0) {
                if (cima == 0) {
                    if (aux2col > aux2lin) {
                        if (aux2lin < tam && aux2col <= tam) {
                            mat[aux2lin] [aux2col] = aux;

                            aux2col++;

                            entrou++;
                        }
                    }

                    if (aux2col - 1 != aux2lin + 1 && aux2col == tam) {
                        aux2lin++;
                        aux2col = aux2lin + 1;
                    }
                    else if (aux2col == tam) {
                        aux2lin++;
                    }

                    if (aux2lin >= tam - 1 && aux2col >= tam) {
                        printf("\nParte acima da diagonal principal totalmente preenchida \n");
                        cima = 1;
                    } 
                }
                
                else {
                    printf("\nParte acima da diagonal principal totalmente preenchida \n");
                }
            }
        }

        if (entrou == 0) {
            if (aux % 13 == 0) {
                if (baixo == 0) {
                    if (aux3col < aux3lin) {
                        if (aux3lin < tam) {
                            mat[aux3lin] [aux3col] = aux;

                            aux3col++;

                            entrou++;
                        }
                    }

                    if (aux3col == aux3lin) {
                        aux3lin++;
                        aux3col = 0;
                    }

                    if (aux3lin >= tam && aux3col == 0) {
                        printf("\nParte abaixo da diagonal principal totalmente preenchida \n");
                        baixo = 1;
                    }
                }
                
                else {
                    printf("\nParte abaixo da diagonal principal totalmente preenchida \n");
                }
            }
        }

        if (aux <= 0 || entrou == 0) {
            printf("\nO valor digitado é inválido!!\n");
            continue;
        }
    }
    while ( ! (centro == 1 && baixo == 1 && cima == 1));


    //printar matriz
    printf("\n\nMatriz base: \n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }

    //fim programa


    return 0;
}