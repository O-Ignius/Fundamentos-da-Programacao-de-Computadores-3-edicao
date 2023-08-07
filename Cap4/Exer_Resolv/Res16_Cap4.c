#include <stdio.h>
#include <stdlib.h>


int main() {
   
    // Variáveis
    float preço_at, venda_mens, aumen, dimin, novo_preco;
   
    // Coleta de dados
    printf("Cálculo aumento ou diminuição preço: \n\n");
    printf("Digite o valor médio de vendas do produto: \n");
    scanf("%f", &venda_mens);
    printf("Digite o preço atual do produto: \n");
    scanf("%f", &preço_at);
    
   
    // Inicio if-else
    if (venda_mens < 500 || preço_at < 30) {
        // Operações
        aumen = preço_at * 0.1;
        novo_preco = preço_at + aumen;
        
        printf("O novo preço do produto é de R$%0.2f", novo_preco);
    }
    
    else if ((venda_mens >= 500 && venda_mens < 1200) || (preço_at >= 30 && preço_at < 80)) {
        // Operações
        aumen = preço_at * 0.15;
        novo_preco = preço_at + aumen;
        
        printf("O novo preço do produto é de R$%0.2f", novo_preco);
    }
    
    else if (venda_mens >= 1200 || preço_at >= 80) {
        // Operações
        dimin = preço_at * 0.2;
        novo_preco = preço_at - dimin;
        
        printf("O novo preço do produto é de R$%0.2f", novo_preco);
    }
    
    else {
        printf("Reveja os valore ddigitados!");
    }
    // Fim if-else
   
   
    return 0;
}