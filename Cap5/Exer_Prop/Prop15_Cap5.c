#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float tot_masc, masc_nao;
    int i, sim, nao, fem_sim;
    char sexo, gosto;
    
    //definidos
    sim = 0;
    nao = 0;
    tot_masc = 0;
    masc_nao = 0;
    fem_sim = 0;
    
    for (i = 0; i < 10; i++) {
        //coleta de dados
        printf("Digite o sexo do entrevistado: F: feminino  M: Masculino\n");
        scanf("%c%*c", &sexo);
        printf("Digite se o entrevistado gostou do produto: S: Sim  N: Não \n");
        scanf("%c%*c", &gosto);
        
        //pessoas que gostaram
        if (gosto == 's' || gosto == 'S') {
            sim++;
        }
        
        //pessoas que não gostaram
        else if (gosto == 'n' || gosto == 'N') {
            nao++;
        }
        
        
        //caso sejam homens
        if (sexo == 'm' || sexo == 'M') {
            // total de homens
            tot_masc++;
            
            if (gosto == 'n' || gosto == 'N') {
                masc_nao++;
            }
        }
        
        //se for mulher
        else if ((sexo == 'f' || sexo == 'F') && (gosto == 's' || gosto == 'S')) {
            fem_sim++;
        }
    }
    
    //saida
    printf("\nPessoas que gostaram do produto: %d \nPessoas que não gostaram do produto: %d", sim, nao);
    printf("\n%d mulheres gostaram do produto", fem_sim);
    printf("\n%0.2f%% dos homens não gostaram do produto", masc_nao * 100 / tot_masc);
    
    
    return 0;
}