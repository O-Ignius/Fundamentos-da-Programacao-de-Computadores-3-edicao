#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    //variáveis
    float cod_cid, vei_pas, acid, i, j, tot_vei, tot_acid, acid_2000, acid_maior, acid_men, cid_maior, cid_men;
    tot_vei = 0;
    acid_2000 = 0;

    //Objetivo
    printf("Dados estatísticos: \n\n");


    // inicio for
    for (i = 0; i < 5; i++) {
        // coleta de dados
        printf("Digite qual o código da cidade: \n");
        scanf("%f", &cod_cid);
        printf("Digite qual número de veículos de passeio: \n");
        scanf("%f", &vei_pas);
        printf("Digite a quantia de acidentes com vítimas: \n");
        scanf("%f", &acid);

        // inicio indice acidente maior e menor
        if (i == 0) {
            acid_maior = acid;
            acid_men = acid;
            cid_maior = cod_cid;
            cid_men = cod_cid;
        }
        else {
            if (acid_maior < acid) {
                acid_maior = acid;
                cid_maior = cod_cid;
            }
            else if (acid_men > acid) {
                acid_men = acid;
                cid_men = cod_cid;
            }
        }// fim indice acidente maior e menor

        // Media veiculos cidade com menos de 2000 veiculos
        if (vei_pas < 2000) {
            tot_acid = tot_acid + acid;
            acid_2000 = acid_2000 + 1;
        }
        
        //total veiculos
        tot_vei = tot_vei + vei_pas;

    }// fim for

    printf("\nA cidade %0.2f possui o maior indice de acidentes, sendo este igual a %0.2f \nA cidade %0.2f possui o menor indice de acidentes, sendo este %0.2f", cid_maior, acid_maior, cid_men, acid_men);
    printf("\nA média de acidentes em cidades com menos de 2000 habitantes é de %0.2f", tot_acid / acid_2000);
    printf("\nA média de veículos é %0.2f", tot_vei / 5);
    
    
    return 0;
}