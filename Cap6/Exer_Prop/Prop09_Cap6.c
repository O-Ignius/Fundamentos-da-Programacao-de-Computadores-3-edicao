#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 2

    //variaveis
    float preco[tam], aumento;
    int i, codi[tam];
    char prod[tam];


    //definidos


    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite a inicial do produto: \n");
        scanf("%c%*c", &prod[i]);
        printf("\nDigite o código do produto: \n");
        scanf("%d%*c", &codi[i]);
        printf("\nDigite o valor do produto: \n");
        scanf("%f%*c", &preco[i]);
    }
    
    //aumento de preços
    for (i = 0; i < tam; i++) {
        if (codi[i] % 2 == 0 || preco[i] > 1000) {
            if (codi[i] % 2 == 0 && preco[i] > 1000) {
                aumento = preco[i] * 0.2;
                preco[i] = preco[i] + aumento;
            }
            
            else if (codi[i] % 2 == 0) {
                aumento = preco[i] * 0.15;
                preco[i] = preco[i] + aumento;
            }
            
            else if (preco[i] > 1000) {
                aumento = preco[i] * 0.1;
                preco[i] = preco[i] + aumento;
            }
        }
    }
    
    printf("\nProdutos após reajuste de preços: \n");
    for (i = 0; i < tam; i++) {
        printf("\nO produto %c, com código %d custa R$%0.2f \n", prod[i], codi[i], preco[i]);
    }
    

    //fim programa


    return 0;
}