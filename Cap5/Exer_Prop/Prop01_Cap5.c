#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");


    // Variáveis
    float val[4], aux;
    int i, j, x;

    //tentei usar o metodo bubble sort que vi por ai, so que tentei fazer meu proprio código, nao sei se ta certo, mas rodei algumas vezes e não vi problemas


    // inicio aplicação
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            // coleta de dados
            printf("Digite um número: \n");
            scanf("%f%*c", &val[j]);
        }

        //ordem crescente
        for (x = 0; x < 4; x++) {
            for (j = 0; j < 4; j++) {
                //operação de verificação e troca de valores
                if (val[j] > val[j + 1]) {
                    aux = val[j];
                    val[j] = val[j + 1];
                    val[j + 1] = aux;
                }
            }
        }
        
        printf("\nOrdem crescente: \n");
        for (j = 0; j < 4; j++) {
            //saida
            printf("%0.2f \n", val[j]);
        }
        
        //decrescente
        for (x = 0; x < 4; x++) {
            for (j = 3; j >= 0; j--) {
                //operação de verificação e troca de valores
                if (val[j] < val[j - 1]) {
                    aux = val[j];
                    val[j] = val[j - 1];
                    val[j - 1] = aux;
                }
            }
        }
        
        printf("\nOrdem decrescente: \n");
        for (j = 3; j >= 0; j--) {
            //saida
            printf("%0.2f \n", val[j]);
        }
    }
    // fim aplicação


    return 0;
}