#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float idade, peso, altura, dmenor, med_id, alt_med, maiskg;
    int i, j;

    //definidos
    dmenor = 0;
    med_id = 0;
    alt_med = 0;
   
    // o que faz:
    printf("Relação dos times: \n");


    // inicio aplicação
    // Repetição
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 11; j++) {
            //coleta de dados
            printf("\n\nDigite a idade do jogador: ");
            scanf("%f", &idade);
            printf("\nDigite o peso do jogador |Em KG!|: ");
            scanf("%f", &peso);
            printf("\nDigite a altura do jogador |Em Metros!|: ");
            scanf("%f", &altura);
           
            // menores de idade
            if (idade < 18) {
                dmenor = dmenor + 1;
            }
           
            // media idade
            med_id = idade + med_id;
           
            //altura media por time
            alt_med = alt_med + altura;
           
            //Jogadores com mais de 80 KG
            if (peso > 80){
                maiskg = maiskg + 1;
            }
        }
        //operações
        med_id = med_id / 11;
        alt_med = alt_med / (5 * 11);
        maiskg = maiskg / (5 * 11);
       
        //saida
        printf("A média da idade dos jogadores é %0.2f", med_id);
       

    }
    //saida
    printf("A média da altura de todos os jogadores é de %0.2f", alt_med);
    printf("A porcentagem de jogadores com mais de 80KG é de %0.2f%%", maiskg * 100);
    // fim aplicação


    return 0;
}