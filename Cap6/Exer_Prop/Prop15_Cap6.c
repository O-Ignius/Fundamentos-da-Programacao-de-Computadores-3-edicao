#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 8

    //variaveis
    int i, qnt[tam], gratis[tam], aux;
    char cliente[tam];


    //definidos
    aux = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite a inicial do %d° cliente: \n", i + 1);
        scanf("%c%*c", &cliente[i]);
        printf("\nDigite a quantia de DVD's locados: \n");
        scanf("%d%*c", &qnt[i]);
    }
    
    //zerar vetor
    for (i = 0; i < tam; i++) {
        gratis[i] = 0;
    }
    
    //quantia de aprovados e reprovados
    for (i = 0; i < tam; i++) {
        do {
            if (qnt[i] >= 10) {
                qnt[i] = qnt[i] - 10;
                gratis[aux]++;
            }
        }
        while(qnt[i] >= 10);
        
        aux++;
    }
    
    printf("\nClientes: \n");
    for (i = 0; i < tam; i++) {
        printf("\nO cliente %c comprou %d DVD's, logo, possui %d gratis \n", cliente[i], qnt[i] + (gratis[i] * 10), gratis[i]);
    }
    
    //fim programa


    return 0;
}