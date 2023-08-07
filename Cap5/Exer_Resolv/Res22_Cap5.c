#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float idade_masc_exp, masc_45;
    int idade, candid, femi, masc, num_masc_exp, femi_nova, fem_21_exp;
    char exp, sex;
    
    //definidos
    candid = 0;
    femi = 0;
    masc = 0;
    idade_masc_exp = 0;
    num_masc_exp = 0;
    masc_45 = 0;
    femi_nova = 0;
    fem_21_exp = 0;
    

    // o que faz:
    printf("Candidatos a um cargo na empresa: \n\n");
    


    //operações



    // repetição
    do {
        // coleta de dados
        printf("\nDigite a idade: \n");
        scanf("%d%*c", &idade);
        
        //parada
        if (idade == 0) {
            continue;
        }
        
        printf("\nDigite o sexo: F: Feminino    M: Masculino \n");
        scanf("%c%*c", &sex);
        printf("\nO candidato possui experiência?   S: Sim      N: Não \n");
        scanf("%c%*c", &exp);
        
        
        //Divergencia sexo
        if (sex == 'm' || sex == 'M') {
            // quantia de homens
            masc++;
            
            //com experiencia
            if (exp == 's' || exp == 'S') {
                //soma idade homens experientes
                idade_masc_exp = idade_masc_exp + idade;
                
                //quantia de homens experientes
                num_masc_exp++;  
            }
            
            //homens com mais de 45
            if (idade > 45) {
                masc_45++;
            }
        }
        
        else if (sex == 'f' || sex == 'F') {
            if (exp == 's' || exp == 'S' && idade <= 21) {
                fem_21_exp++;
            }
            
            // menor idade
            if (femi_nova == 0) {
                femi_nova = idade;
            }
            
            else if (femi_nova >= idade) {
                femi_nova = idade;
            }
            
            //quantia de mulheres
            femi++;
        }
        
        //quantia de candidatos
        candid++;
    }
    while (idade != 0);

    //operações
    masc_45 = (masc_45 / masc) * 100;

    // saida
    printf("\nNúmero de candidatos: \nFemininos: %d \nMasculinos: %d anos \n", femi, masc);
    printf("A idade média dos homens que ja tem experiencia é de: %0.2f \n", idade_masc_exp / num_masc_exp);
    printf("A porcentagem de homens com mais de 45 anos é de %0.2f%% \n", masc_45);
    printf("O número de mulheres com experiência e menos de 21 anos é: %d \n", fem_21_exp);
    printf("A menor idade entre as mulheres com experiência é de %d anos", femi_nova);
    
    return 0;
}