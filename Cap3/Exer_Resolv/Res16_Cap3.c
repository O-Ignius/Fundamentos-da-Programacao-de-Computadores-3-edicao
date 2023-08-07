#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float hora_trab, preço_hora, sal_min, impos, sal_bruto, sal_tot;
    // Coleta de dados
    printf("Digite o número de horas trabalhadas: \n");
    scanf("%f", &hora_trab);
    printf("Digite o valor do salário mínimo: \n");
    scanf("%f", &sal_min);
    preço_hora = sal_min / 2;
    sal_bruto = hora_trab * preço_hora;
    impos = 0.03 * sal_bruto;
    sal_tot = sal_bruto - impos;
    // Fim operações
    printf("Um funcionário que tenha trabalhado por %0.0f horas, com salário mínimo de R$%0.2f, após retirada de 3%% de impostos recebeu um valor final de R$%0.2f", hora_trab, sal_min, sal_tot);
    
    return 0;
}