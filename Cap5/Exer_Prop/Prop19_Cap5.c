#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float compra, venda, lucro[4];
    char acao;
    
    //definidos
    lucro[1] = 0;
    lucro[2] = 0;
    lucro[3] = 0;
    
    do {
        printf("Digite o tipo de ação |Com diferença entre maiúsculas e minúsculas!|: \n");
        scanf("%c%*c", &acao);
        
        //finalizar
        if (acao == 'F') {
            continue;
        }
        
        printf("Digite o preço de compra da ação: \n");
        scanf("%f%*c", &compra);
        printf("Digite o preço de venda da ação: \n");
        scanf("%f%*c", &venda);
        
        //lucro de cada ação
        lucro[0] = venda - compra;
        
        //quantia de acoes com lucro maior q 1000
        if (lucro[0] > 1000) {
            lucro[1]++;
        }
        
        //quantia de acoes com lucro menor q 200
        else if (lucro[0] < 200) {
            lucro[2]++;
        }
        
        //lucro total
        lucro[3] = lucro[3] + lucro[0];
        
        //saida
        printf("\nO lucro da ação foi de R$%0.2f \n", lucro[0]);
        
    }
    while (acao != 'F');
    
    //saida
    printf("\nA quantia de ações com lucro maior que R$1000.00 é: %0.0f", lucro[1]);
    printf("\nA quantia de ações com lucro menor que R$200.00 é: %0.0f", lucro[2]);
    printf("\nO lucro total da empresa foi de R$%0.2f", lucro[3]);
    
    
    return 0;
}