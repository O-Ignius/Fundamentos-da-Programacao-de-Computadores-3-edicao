#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float divida, juros, parc, val_juros, total;
    int i, qnt_parc;
    
    //definidos
    juros = 0;

    // coleta de dados
    printf("Divida parcelada \n\n");
    printf("Digite o valor da divida: \n");
    scanf("%f%*c", &divida);
    

    //titulo tabela
    printf("Valor da divida     Valor do juros      Quantia de parcelas     Valor por parcela");
    
    
    // repetição
    for (i = 0; i <= 12; i = i + 3) {
        if (i == 3) {
            juros = 0.1;
        }
        
        else if (i > 3) {
            juros = juros + 0.05;
        }
        
        if (i == 0) {
            qnt_parc = 1;
        }
        
        else {
            qnt_parc = i;
        }
        
        // operações    
        val_juros = divida * juros;
        total = divida + val_juros;
        parc = total / qnt_parc;
        
        //dados tabela
        printf("\nR$%0.2f             R$%0.2f                 %d                  R$%0.2f", total, val_juros, qnt_parc, parc);
    }
    
    
    return 0;
}