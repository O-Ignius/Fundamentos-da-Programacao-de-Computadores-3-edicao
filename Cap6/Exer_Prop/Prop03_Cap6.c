#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    int i, codi[tam], produ[tam], cliente, qnt, produto, comprar;


    //definidos
    
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite o código do produto: \n");
        scanf("%d%*c", &codi[i]);
        printf("\nDigite o total desse produto em estoque: \n");
        scanf("%d%*c", &produ[i]);
    }
    
    do {
        //zerar comprar
        comprar = 0;
        
        printf("\nDigite o código do cliente: \n");
        scanf("%d%*c", &cliente);
        
        if (cliente == 0) {
            continue;
        }
        
        
        printf("\nDigite o código do produto: \n");
        scanf("%d%*c", &produto);
        
        for (i = 0; i < tam; i++) {
            //caso o produto exista
            if (produto == codi[i]) {
                comprar = i;
                break;
            }
        }
        
        //se o produto existir
        if (comprar == i) {
            //quantia de produtos a ser comprada
            printf("\nDigite a quantia de produto a ser comprada: \n");
            scanf("%d%*c", &qnt);
            
            if (produ[comprar] >= qnt) {
                produ[comprar] = produ[comprar] - qnt;
                printf("\nPedido Recebido!! \nQuantia restante do produto #%d: %d\n", codi[comprar], produ[comprar]);
            }
            
            else {
                printf("\nA quantia a ser comprada excede a quantia de produtos em estoque!! \nQuantia em estoque: %d\n", produ[comprar]);
            }
        }
        
        else {
            printf("\nCódigo de produto não consta na base de dados, favor tente novamente!\n");
        }
    }
    while(cliente != 0);
    
    //saida final
    printf("\nEstoque final: \n");
    for (i = 0; i < tam; i++) {
        printf("\nProduto %d, estoque: %d \n", codi[i], produ[i]);
    }
    
    //fim programa


    return 0;
}