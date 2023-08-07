#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float carro_nov, lucro_dis, impos, lucro_tot, impos_tot, val_venda;
    // Coleta de dados
    printf("Digite o preço do carro novo: \n");
    scanf("%f", &carro_nov);
    printf("Digite a porcentagem de lucro do distribuidor: \n");
    scanf("%f", &lucro_dis);
    printf("Digite a porcentagem de impostos: \n");
    scanf("%f", &impos);
    lucro_tot = carro_nov * (lucro_dis / 100);
    impos_tot = carro_nov * (impos / 100);
    val_venda = carro_nov + (lucro_tot + impos_tot);
    // Fim operações
    printf("Um carro no valor de R$%0.2f com acréscimo de R$%0.2f de lucro do distribuidor e R$%0.2f de impostos sobre seu preço base é vendido por um total de R$%0.2f", carro_nov, lucro_tot, impos_tot, val_venda);
    
    return 0;
}