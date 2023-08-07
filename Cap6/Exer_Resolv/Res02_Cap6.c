#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");


    // Variáveis
    float val[10], val_geral, comiss, sal_vend, obj_vend;
    int i, j, venda[10], vet_vend, vend_mais;

    //definidos
    sal_vend = 545;
    comiss = 0;


    // inicio aplicação
    for (i = 0; i < 10; i++) {
        //coleta de dados
        printf("Digite o valor do produto: \n");
        scanf("%f", &val[i]);
        printf("Digite a quantia de produtos vendidos: \n");
        scanf("%d", &venda[i]);
        
        //operações
        comiss = comiss + (val[i] * venda[i]);
    }
    
    //salario do vendedor
    sal_vend = sal_vend + (comiss * 0.05);
    
    // saida valores produto
    for (i = 0; i < 10; i++) {
        //saida
        printf("\nProduto %d: \nVale R$%0.2f por unidade \nVendeu %d unidades \nSendo o valor total: R$%0.2f \n", i, val[i], venda[i], val[i] * venda[i]);
    }
    
    //valor do salário final do funcionário
    printf("\nO Valor do salário final do vendedor é de R$%0.2f \n", sal_vend);
    
    for (i = 0; i < 10; i++) {
        if (i == 0) {
            vend_mais = venda[i];
            obj_vend = val[i];
            vet_vend = i;
        }
        
        else if (venda[i] > vend_mais) {
            vend_mais = venda[i];
            obj_vend = val[i];
            vet_vend = i;
        }
    }
    
    printf("\nO objeto no vetor %d é o objeto mais vendido, sendo seu valor unitário igual a R$%0.2f, vendendo %d unidades", vet_vend, obj_vend, vend_mais);
    // fim aplicação


    return 0;
}