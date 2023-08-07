#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 8
#define tam2 4

    //variaveis
    float preco[tam1] [tam2];
    int i, j;
    char loja[tam1], prod[tam2];


    //definidos

    
    //inicio programa
    //preencher matriz
    for (i = 0; i < tam1; i++) {
        //coleta de dados
        printf("\nDigite a inicial nome da %d° loja: \n", i + 1);
        scanf("%c%*c", &loja[i]);
        
        for (j = 0; j < tam2; j++) {
            printf("\nDigite a inicial do produto: \n");
            scanf("%c%*c", &prod[j]);
            printf("\nDigite o valor desse produto: \n");
            scanf("%f%*c", &preco[i] [j]);
        }
    }
    
    //verificar maior
    for (i = 0; i < tam1; i++) {
        printf("\n%d° loja: \n", i + 1);
        for (j = 0; j < tam2; j++) {
            if (preco[i] [j] <= 120) {
                printf("Produto %d: R$%0.2f \n", j + 1, preco[i] [j]);
            }
        }
    }
    
    //fim programa


    return 0;
}