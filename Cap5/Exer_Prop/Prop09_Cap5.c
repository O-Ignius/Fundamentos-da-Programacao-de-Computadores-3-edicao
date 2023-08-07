#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");
   
   
    // Variáveis
    float  altura, peso, med_idad, pesado, altos, pess_10_30, pessoas;
    int i, idade;

   
    //definidos
    pessoas = 0;
    med_idad = 0;
    pesado = 0;
    pess_10_30 = 0;
    altos = 0;
   
   
    // inicio aplicação
    for (i = 0; i < 10; i++) {
        // coleta de dados
        printf("Digite o valor da altura |Em metros|: \n");
        scanf("%f%*c", &altura);
        printf("Digite a idade: \n");
        scanf("%d%*c", &idade);
        printf("Digite o peso da pessoa |Em KG|: \n");
        scanf("%d%*c", &peso);
       
        //media de idade
        med_idad = med_idad + idade;
       
        //pessoas com mais de 90KG e menos de 1.5m
        if (peso > 90 && altura < 1.5) {
            pesado++;
        }
       
        //pessoas com mais de 1.9m
        if (altura > 1.9) {
            altos++;
           
            //pessoas com idade entre 10 e 30
            if (idade > 10 && idade < 30) {
                pess_10_30++;
            }
        }
       
       
        // quantia de pessoas
        pessoas++;
    }
   
    //operacoes
    pess_10_30 = (pess_10_30 / altos) * 100;
    med_idad = med_idad / pessoas;
   
    //saida
    printf("\nA média de idade das %0.0f pessoas é %0.2f \n", pessoas, med_idad);
    printf("A quantia de pessoas com mais de 90Kg e menos de 1.5m é de %0.2f\n", pesado);
    printf("A porcentagem de pessoas entre 10 e 30 anos com mais de 1.9m, dentre as pessoas com 1.9 metros é de %0.2f%% \n",pess_10_30);
   
    // fim aplicação


    return 0;
}
