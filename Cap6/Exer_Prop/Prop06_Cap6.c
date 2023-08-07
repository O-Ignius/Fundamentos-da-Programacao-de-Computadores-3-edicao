#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    float comitot[tam], comi[tam], maior, menor;
    int i, j, vendas[tam], totvendas;
    char vende[tam];


    //definidos
    totvendas = 0;


    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite a Inicial do nome do vendedor: \n");
        scanf("%c%*c", &vende[i]);
        printf("\nDigite quantia de vendas desse vendedor: \n");
        scanf("%d%*c", &vendas[i]);
        printf("\nDigite a comissão ganha por esse vendedor: \n");
        scanf("%f%*c", &comi[i]);
    }


    for (i = 0; i < tam; i++) {
        comitot[i] = comi[i] * vendas[i];
        totvendas = totvendas + vendas[i];


    }

    //maior e menor comissão
    for (i = 0; i < tam; i++) {
        //iniciando
        if (i == 0) {
            maior = comitot[i];
            menor = comitot[i];
        }

        //maior
        else if (maior < comitot[i]) {
            maior = comitot[i];
        }

        //menor
        if (menor > comitot[i]) {
            menor = comitot[i];
        }
    }

    //saida
    printf("\nO total de vendas é %d \nA maior comissão é de R$%0.2f \nA menor comissão é de R$%0.2f \n", totvendas, maior, menor);
    printf("\nRelatório geral: \n");
    for (i = 0; i < tam; i++) {
        printf("\nFuncionário %c recebe R$%0.2f de comissão", vende[i], comitot[i]);
    }


    //fim programa


    return 0;
}