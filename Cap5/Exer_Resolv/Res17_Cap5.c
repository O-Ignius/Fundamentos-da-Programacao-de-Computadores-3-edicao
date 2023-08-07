#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float sal_carl, sal_joao;
    int meses;
    
    //definidos
    meses = 0;
    

    // o que faz:
    printf("Quantos meses até uma renda se igualar a outra? \n\n");
    printf("Qual o salário de Carlos? \n");
    scanf("%f%*c", &sal_carl);
    
    //operações
    sal_joao = sal_carl / 3;
    
    
    // repetição
    do {
        // joao
        sal_joao = sal_joao + (sal_joao * 0.05); 
    
        // carlos
        sal_carl = sal_carl + (sal_carl * 0.02);
        
        //meses
        meses++;
    }
    while (sal_carl >= sal_joao);
    
    
    //operações
    
    // saida
    printf("Demora %d meses para o salário de ambos se igualarem \n", meses);
    printf("O salário se iguala em R$%0.2f", sal_carl);
    
    return 0;
}