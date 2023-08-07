#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    int m, n, soma, i;

    //definidos
    soma = 0;

    // o que faz:
    printf("Soma de todos inteiros entre m e n (com n incluso): \n\n");
    printf("Digite m: \n");
    scanf("%d", &m);
    printf("Digite n: \n");
    scanf("%d", &n);


    //operações



    // repetição
    for (i = m; i <= n; i++) {
        soma = soma + i;
    }


    //operações

    // saida
    printf("A soma dos inteiros entre %d e %d é igual a %d", m, n, soma);
    
    return 0;
}