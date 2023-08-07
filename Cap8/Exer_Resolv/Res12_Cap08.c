//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 3

typedef struct {
    int vetor[tam];
}vetores;

//subrotina calculo média

vetores perf() {
    //variaveis
    int i, qnt, aux, div;
    vetores perfeito;


    //definidos
    qnt = 0;
    aux = 1;


    //inicio sub
    //coleta de dados
    do {
        //zerar divisores
        div = 0;

        //verificar se é perfeito
        for (i = 1; i < aux; i++) {
            if (aux % i == 0) {
                div += i;
            }
        }

        if (div == aux) {
            perfeito.vetor[qnt] = aux;
            qnt++;
        }

        //aumentar valor auxiliar
        aux++;
    }    while (qnt != 3);

   
    return perfeito;

    //fim sub
}


//principal

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i;
    vetores ret;

   
    //definidos

    //inicio programa
    //chamar subrotina
    ret = perf();
   
   
    for (i = 0; i < tam; i++) {
        printf("\n%d° número perfeito: %d\n", i + 1, ret.vetor[i]);
    }



    //fim programa


    return 0;
}