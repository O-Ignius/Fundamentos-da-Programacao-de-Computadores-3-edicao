#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");


    // Variáveis
    int i, j, val[9], aux;
    
    

    // inicio aplicação
    for (i = 0; i < 9; i++) {
        printf("Digite o número: \n");
        scanf("%d", &val[i]);
    }
    
    for (i = 0; i < 9; i++) {
        //definidos
        aux = 0;
        
        for (j = 1; j <= val[i]; j++) {
            if (val[i] % j == 0) {
                aux++;
            }
        }
        
        if (aux == 2 || val[i] == 1) {
            printf("a posição %d detém o primo %d \n", i, val[i]);
        }
    }
    // fim aplicação


    return 0;
}