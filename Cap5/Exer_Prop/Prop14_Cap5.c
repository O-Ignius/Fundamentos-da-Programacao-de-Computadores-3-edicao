#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float med_id, tot_expec, expec_bom, expec_otim, expec_reg;
    int i, opiniao, idade[15];
    
    //definidos
    med_id = 0;
    tot_expec = 0;
    expec_reg = 0;
    expec_bom = 0;
    expec_otim = 0;
    
    for (i = 0; i < 15; i++) {
        //coleta de dados
        printf("Digite a idade: \n");
        scanf("%d", &idade[i]);
        printf("Digite sua opinião sobre o filme: \n1: Regular \n2: Bom \n3: Ótimo \n");
        scanf("%d", &opiniao);
        
        //quantia de pessoas que responderam regular
        if (opiniao == 1) {
            expec_reg++;
        }
        
        //pessoas que acharam bom
        else if (opiniao == 2) {
            expec_bom++;
        }
        
        //media das idades que acharam ótimo
        else if (opiniao == 3) {
            med_id = med_id + idade[i];
            expec_otim++;
        }
            
        //expectadores totais
        tot_expec++;
    }
    
    //saida
    printf("\nDentre as pessoas que responderam ótimo, a média de suas idades é de: %0.2f", med_id / expec_otim);
    printf("\n%0.0f pessoas acharam o filme regular", expec_reg);
    printf("\nDentre todas as pessoas, %0.2f%% acharam o filme bom", expec_bom * 100 / tot_expec);
    
    
    return 0;
}