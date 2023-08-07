#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float sal_at, sal_novo, val_aum;
    int vari;
   
    // Coleta de dados
    printf("Aumento de salário de acordo com o cargo: \n\n");
    printf("Qual o cargo do funcionário? \n1: Escrituário \n2: Secretário \n3: Caixa \n4: Gerente \n5: Diretor \n\n");
    scanf("%d", &vari);
   
    // Inicio if-else
    if (vari == 1) {
        // Coleta de dados
        printf("Digite o salário atual: \n");
        scanf("%f", &sal_at);
       
        // Operações
        val_aum = sal_at * 0.5;
        sal_novo = sal_at + val_aum;
       
        printf("Um trabalhador com a função de Escrituário recebe R$%0.2f e terá aumento de 50%%, ou seja, aumento de R$%0.2f, passando a receber um total de R$%0.2f", sal_at, val_aum, sal_novo);
    }
   
    else if (vari == 2) {
        // Coleta de dados
        printf("Digite o salário atual: \n");
        scanf("%f", &sal_at);
       
        // OperaçõesEscrituário
        val_aum = sal_at * 0.35;
        sal_novo = sal_at + val_aum;
       
        printf("Um trabalhador com a função de Secretário recebe R$%0.2f e terá aumento de 35%%, ou seja, aumento de R$%0.2f, passando a receber um total de R$%0.2f", sal_at, val_aum, sal_novo);
    }
   
    else if (vari == 3) {
        // Coleta de dados
        printf("Digite o salário atual: \n");
        scanf("%f", &sal_at);
       
        // Operações
        val_aum = sal_at * 0.2;
        sal_novo = sal_at + val_aum;
       
        printf("Um trabalhador com a função de Caixa recebe R$%0.2f e terá aumento de 20%%, ou seja, aumento de R$%0.2f, passando a receber um total de R$%0.2f", sal_at, val_aum, sal_novo);
    }
   
    else if (vari == 4) {
        // Coleta de dados
        printf("Digite o salário atual: \n");
        scanf("%f", &sal_at);
       
        // Operações
        val_aum = sal_at * 0.1;
        sal_novo = sal_at + val_aum;
       
        printf("Um trabalhador com a função de Gerente recebe R$%0.2f e terá aumento de 10%%, ou seja, aumento de R$%0.2f, passando a receber um total de R$%0.2f", sal_at, val_aum, sal_novo);
    }
   
    else if (vari == 5) {
        // Coleta de dados
        printf("Digite o salário atual: \n");
        scanf("%f", &sal_at);
       
        // Operações
        val_aum = sal_at * 0;
        sal_novo = sal_at + val_aum;
       
        printf("Um trabalhador com a função de Diretor recebe R$%0.2f e terá aumento de 0%%, ou seja, aumento de R$%0.2f, passando a receber um total de R$%0.2f", sal_at, val_aum, sal_novo);
    }
   
    else {
        printf("Número digitado é inválido, tente novamente!");
    }
    // Fim if-else
   
   
    return 0;
}