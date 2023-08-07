#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float preco, pre_p_desc;
    printf("Digite o preço: \n");
    scanf("%f", &preco);
    
    pre_p_desc = preco * 0.9;
    //fim operação
            
    printf("O produto que valia R$%0.2f, após 10%% de desconto passou a custar R$%0.2f", preco, pre_p_desc);
    
    return 0;
}