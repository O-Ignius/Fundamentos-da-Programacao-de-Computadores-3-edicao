#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");
   
   
    // Variáveis
    float senior, med_idad, pessoas, ruiv, pessoas_peq, altura, blueye;
    int i, idade, peso;
    char olhos, cabelo;
   
    //definidos
    senior = 0;
    pessoas = 0;
    ruiv = 0;
    med_idad = 0;
    pessoas_peq = 0;
    blueye = 0;
   
   
    // inicio aplicação
    for (i = 0; i < 6; i++) {
        // coleta de dados
        printf("Digite o valor da altura |Em metros|: \n");
        scanf("%f%*c", &altura);
        printf("Digite a idade: \n");
        scanf("%d%*c", &idade);
        printf("Digite o peso da pessoa |Em KG|: \n");
        scanf("%d%*c", &peso);
        printf("Digite a cor dos olhos: \nA: Azul \nP: Preto \nV: Verde \nC: Castanho \n");
        scanf("%c%*c", &olhos);
        printf("Digite a cor dos cabelos: \nR: Ruivo \nP: Preto \nL: Louro \nC: Castanho \n");
        scanf("%c%*c", &cabelo);
       
        // pessoa com mais de 50 anos e menos de 60KG
        if (idade > 50 && peso < 60) {
            senior++;
        }
       
        //idade pessoas com menos de 1.5m
        if (altura < 1.5) {
            med_idad = med_idad + idade;
            pessoas_peq++;
        }
       
        // pessoas com olhos azuis
        if (olhos == 'A' || olhos == 'a') {
            blueye++;
        }
       
        //pessoas ruivas sem olhos azuis
        if ((olhos != 'A' || olhos != 'a') && (cabelo == 'R' || cabelo == 'r')) {
            ruiv++;
        }
       
        pessoas++;
    }
   
    //operacoes
    med_idad = med_idad / pessoas_peq;
    blueye = (blueye / pessoas) * 100;
   
    //saida
    printf("\nHouveram um total de %0.0f pessoas com mais de 50 anos e menos de 60 KG \nA média de idade das pessoas com menos de 1.5m é de %0.2f \n%0.2f%% pessoas tem olhos azuis \n%0.2f pessoas são ruivas e não tem olhos azuis \n", senior, med_idad, blueye, ruiv);
   
   
    // fim aplicação


    return 0;
}