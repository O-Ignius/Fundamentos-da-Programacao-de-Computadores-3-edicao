#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float chan, pessoas, tot_pess, audiencia[4] = {0, 0, 0, 0};
    
    //definidos
    tot_pess = 0;
    
    do {
        printf("Digite o número do canal assistido: 4 ou 5 ou 7 ou 12 \n");
        scanf("%f%*c", &chan);
        
        //finalizar
        if (chan == 0) {
            continue;
        }
        
        printf("Digite a quantia de pessoas que estavam assistindo: \n");
        scanf("%f%*c", &pessoas);
        
        
        //pessoas por canal
        if (chan == 4) {
            audiencia[0] = audiencia[0] + pessoas;
        }
        
        else if (chan == 5) {
            audiencia[1] = audiencia[1] + pessoas;
        }
        
        else if (chan == 7) {
            audiencia[2] = audiencia[2] + pessoas;
        }
        
        else if (chan == 12) {
            audiencia[3] = audiencia[3] + pessoas;
        }
        
        //quantia de pessoas
        tot_pess = tot_pess + pessoas;
    }
    while (chan != 0);
    
    //saida
    printf("\nA porcentagem de expectadores do canal 4 é de %0.2f%%", audiencia[0] * 100/ tot_pess);
    printf("\nA porcentagem de expectadores do canal 5 é de %0.2f%%", audiencia[1] * 100/ tot_pess);
    printf("\nA porcentagem de expectadores do canal 7 é de %0.2f%%", audiencia[2] * 100/ tot_pess);
    printf("\nA porcentagem de expectadores do canal 12 é de %0.2f%%", audiencia[3] * 100/ tot_pess);
    
    
    return 0;
}