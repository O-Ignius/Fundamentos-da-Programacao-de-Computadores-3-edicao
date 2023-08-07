#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");
   
   
    // Variáveis
    float senior, med_alt, pessoas, leves, pessoas_10;
    int i, idade, altura, peso;
   
    //definidos
    senior = 0;
    pessoas = 0;
    leves = 0;
    med_alt = 0;
    pessoas_10 = 0;
   
   
    // inicio aplicação
    for (i = 0; i < 5; i++) {
        // coleta de dados
        printf("Digite o valor da altura: \n");
        scanf("%d", &altura);
        printf("Digite a idade: \n");
        scanf("%d", &idade);
        printf("Digite o peso da pessoa |Em KG|: \n");
        scanf("%d", &peso);
       
        // pessoa com mais de 50
        if (idade > 50) {
            senior++;
        }
       
        //altura das pessoas entre 10 e 20 anos
        if (idade > 10 && idade < 20) {
            med_alt = med_alt + altura;
            pessoas_10++;
        }
       
        // pessoas com menos de 40 KG
        if (peso < 40) {
            leves++;
        }
       
        pessoas++;
    }
   
    //operacoes
    med_alt = med_alt / pessoas_10;
    leves = (leves / pessoas) * 100;
   
    //saida
    printf("\nHouveram um total de %0.0f pessoas com mais de 50 anos \nA média de altura entre pessoas entre 10 e 20 anos é de %0.2f \n%0.2f%% pessoas pesam menos de 40 KG", senior, med_alt, leves);
   
   
    // fim aplicação


    return 0;
}