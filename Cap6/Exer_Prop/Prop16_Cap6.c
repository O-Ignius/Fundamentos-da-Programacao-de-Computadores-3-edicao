#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 5

    //variaveis
    float preco[tam], prcmed, qntmed;
    int i, barato, aux;
    char prod[tam], name[tam];


    //definidos
    aux = 0;
    barato = 0;
    prcmed = 0;
    qntmed = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite a inicial do %d° produto: \n", i + 1);
        scanf("%c%*c", &prod[i]);
        printf("\nDigite preço do produto: \n");
        scanf("%f%*c", &preco[i]);
    }
    
    for (i = 0; i < tam; i++) {
        if (preco[i] < 50) {
            barato++;
        }
        
        if (preco[i] > 50 && preco[i] < 100) {
            name[aux] = prod[i];
            aux++;
        }
        
        if (preco[i] > 100) {
            prcmed = prcmed + preco[i];
            qntmed++;
        }
    }
    
    //saidas
    printf("\nHá %d produtos com preço menor que R$50.00 \n", barato);
    
    printf("\nO nome dos produtos com preço entre R$50.00 e R$100.00: \n");
    for (i = 0; i < aux; i++) {
        printf("Produto %c\n", name[i]);
    }
    
    printf("\nA média do preço dos produtos com valor maior que R$100.00 é: R$%0.2f \n", prcmed / qntmed);
    
    //fim programa


    return 0;
}