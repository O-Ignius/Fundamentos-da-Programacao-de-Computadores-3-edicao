#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale (LC_ALL, "portuguese");
    
    //variáveis
    float fat;
    int lim, i, j;

    //definido
    fat = 1;
    
    //Coleta de dados
    printf("Tabela fatorial: \n\n");
    printf("Digite o número que limita a tabela: \n");
    scanf("%d", &lim);

    
    for (i = 1; i <= lim; i++){
        
        if (i > 2) {
            fat = 1;
        }
        
        for(j = 1; j <= i; j++){
            
            fat = fat * j;
            
        }
        printf("Número = %d \n", i);
        printf("%0.2f \n",fat);
    }

    return 0;
}