#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float val, rend, tot;
    int cliente, ope;
    
    //definidos
    
    
    do {
        //coleta de dados
        printf("\nDigite o código do cliente: \n");
        scanf("%d%*c", &cliente);
        
        //finalizar
        if (cliente <= 0) {
            printf("\nOperação finalizada!");
            continue;
        }
        
        printf("\nQual a operação: 1: Poupança    2: Poupança plus    3: Fundos de renda fixa \n");
        scanf("%d%*c", &ope);
        printf("\nQual o valor a ser investido? \n");
        scanf("%f%*c", &val);
        
        //tipo de operação
        if (ope == 1) {
            rend = val * 0.015;
            tot = val + rend;
        }
        
        else if (ope == 2) {
            rend = val * 0.02;
            tot = val + rend;
        }
        
        else if (ope == 3) {
            rend = val * 0.04;
            tot = val + rend;
        }
        
        else {
            printf("Operação inválida, tente novamente!");
            continue;
        }
        
        //saida
        printf("\nO valor mensal do cliente #%d é de R$%0.2f, sendo que R$%0.2f foram lucrados sobre o valor inicial de R$%0.2f \n", cliente, tot, rend, val);
    }
    while (cliente > 0);
    
    
    return 0;
}