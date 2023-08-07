#include <stdio.h>
#include <stdlib.h>

int main() {
    //variáveis
    float dep_in, rend, dep_fin;
    int vari;
   
    // coleta de dados
    printf("Calcular valor após investimento: \n\n");
    printf("Qual o tipo de investimento? \n1: Poupança \n2: Fundos de renda fixa \n");
    scanf("%d", &vari);
   
   
    // inicio if-else
    if (vari == 1) {
        //coleta de dados
        printf("Digite o valor do depósito: \n");
        scanf("%f", &dep_in);
       
        if (dep_in > 0) {
            // operações
            rend = dep_in * 0.03;
            dep_fin = dep_in + rend;
           
            printf("Uma conta Poupança, após 1 mês, com valor de R$%0.2f, tem rendimento de R$%0.2f, resultando num valor final de R$%0.2f", dep_in, rend, dep_fin);
        }
       
        else {
            printf("Valor de depósito menor igual a zero, reveja o valor digitado!");
        }
    }
   
    else if (vari == 2) {
        //coleta de dados
        printf("Digite o valor do depósito: \n");
        scanf("%f", &dep_in);
       
        if (dep_in > 0) {
            //operações
            rend = dep_in * 0.04;
            dep_fin = dep_in + rend;
           
            printf("Uma conta de Fundos de Renda Fixa, após 1 mês, com valor de R$%0.2f, tem rendimento de R$%0.2f, resultando num valor final de R$%0.2f", dep_in, rend, dep_fin);
        }
       
        else {
            printf("Valor de depósito menor igual a zero, reveja o valor digitado!");
        }
    }
   
    else {
        printf("Número inválido, tente novamente!");
    }
    // fim if-else
   
   
   
    return 0;
}