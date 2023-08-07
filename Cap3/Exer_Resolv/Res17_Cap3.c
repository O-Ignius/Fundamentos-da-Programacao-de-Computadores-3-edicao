#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float sal_in, cheque1, cheque2, impos1, impos2, sal_fim;
    // Coleta de dados
    printf("Digite o salário depositado: \n");
    scanf("%f", &sal_in);
    printf("Digite a quantia a ser reitada: \n");
    scanf("%f", &cheque1);
    printf("Digite a quantia a ser reitada: \n");
    scanf("%f", &cheque2);
    impos1 = cheque1 * (0,38 / 100);
    impos2 = cheque2 * (0,38 / 100);
    sal_fim = sal_in - (impos1 + impos2) - (cheque1 + cheque2);
    // Fim operações
    printf("Após um deposito de R$%0.2f, retirada de R$%0.2f e R$%0.2f, o saldo final na conta é de: R$%0.2f", sal_in, cheque1, cheque2, sal_fim);
    
    return 0;
}