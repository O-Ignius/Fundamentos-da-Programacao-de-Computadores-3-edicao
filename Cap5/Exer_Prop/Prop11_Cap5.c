#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");
   
   
    // Variáveis
    float val_in, acresc, val_fin, val_parc, parc;

   
    //definidos
    acresc = 0.03;
   
    // coleta de dados
    printf("Digite o valor inicial: \n");
    scanf("%f", &val_in);
   
   
    printf("\nA vista o valor final será de R$%0.2f \n", val_in * 0.8);
   
    // inicio aplicação
    for (parc = 6; parc <= 60; parc = parc + 6) {
        //operações
        val_fin = (acresc * val_in) + val_in;
        val_parc = val_fin / parc;
        acresc = acresc + 0.03;
       
        printf("\nCom %0.0f parcelas, o valor total seria de R$%0.2f \nO valor de cada parcela seria de R$%0.2f \n", parc, val_fin, val_parc);
    }
    // fim aplicação


    return 0;
}