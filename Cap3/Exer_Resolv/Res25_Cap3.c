#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float custo_esp, custo_conv, qnts_conv;
    printf("Digite o custo do espetaculo: \n");
    scanf("%f", &custo_esp);
    printf("Digite o custo dos convites de entrada: \n");
    scanf("%f", &custo_conv);
    
    qnts_conv = custo_esp / custo_conv;
    // Fim operações
    
    printf("em um espetáculo que custou R$%0.2f, com entradas custando R$%0.2f, é necessário vender %0.0f convites para pagar o valor do espetaculo", custo_esp, custo_conv, ceil(qnts_conv));
    
    
    return 0;
}