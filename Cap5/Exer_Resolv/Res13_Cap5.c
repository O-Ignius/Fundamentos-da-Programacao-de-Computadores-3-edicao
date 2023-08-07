#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float perc_mas, perc_fem, perc_24, nasc;
    int i, temp_vida, masc, femi, menos_vid;
    char sex;
    
    //definidos
    masc = 0;
    femi = 0;
    menos_vid = 0;

    // coleta de dados
    printf("Indice de mortalidade infantil \n\n");
    printf("Digite a quantia de nascimentos: \n");
    scanf("%f%*c", &nasc);
    

    // repetição
    for (i = 1; i <= nasc; i++) {
        //coleta de dados
        printf("Digite o sexo do bebê: M: masculino | F: Feminino \n");
        scanf("%c%*c", &sex);
        printf("Digite o tempo de vida do bebê |Em meses|: \n");
        scanf("%d%*c", &temp_vida);
        
        if (sex == 'm' || sex == 'M') {
            masc++;
        }
        
        else if (sex == 'f' || sex == 'F') {
            femi++;
        }
        
        if (temp_vida <= 24) {
            menos_vid++;
        }
    }
    // operações
    perc_mas = (masc / nasc) * 100;
    perc_fem = (femi / nasc) * 100;
    perc_24 = (menos_vid / nasc) * 100;

    //saída
    printf("Percentual de bebês: \nMasculinos: %0.2f%% \nFemininos: %0.2f%% \nBebês que viveram até 24 meses somente: %0.2f%%", perc_mas, perc_fem, perc_24);

    return 0;
}