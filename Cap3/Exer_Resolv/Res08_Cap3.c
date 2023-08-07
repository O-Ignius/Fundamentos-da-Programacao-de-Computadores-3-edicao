#include <stdio.h>
#include <stdlib.h>

int main() {
    float dep, juros, rend, tot_pos_rend;
    // Coleta de dados
    printf("Quantia a ser depositada: \n");
    scanf("%f", &dep);
    printf("Digite a taxa de juros mensal a ser aplicada sobre o deposito! \n");
    scanf("%f", &juros);
    rend = dep * (juros / 100);
    tot_pos_rend = dep + rend;
    printf("Após o deposito de R$%0.2f, o rendimento mensal passou a ser de R$%0.2f, resultando num valor final de R$%0.2f", dep, rend, tot_pos_rend);
    // Fim operação
    
    return 0;
}