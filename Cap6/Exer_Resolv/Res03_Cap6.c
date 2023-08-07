#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");
   
   
    // Variáveis
    float vet1[10], vet2[10], inter[20];
    int i, j;
   
    //definidos
    j = 0;
   

   
   
    // inicio aplicação
    for (i = 0; i < 10; i++) {
        // coleta de dados
        printf("Digite um número: \n");
        scanf("%f", &vet1[i]);
        printf("Digite um número: \n");
        scanf("%f", &vet2[i]);
       
        inter[j] = vet1[i];
        j++;
        inter[j] = vet2[i];
        j++;
    }
   
    printf("\nA intercalação dos dois vetores é: \n");
   
    for (j = 0; j < 20; j++) {
        printf("|  %0.2f  |  ", inter[j]);
    }
   
    // fim aplicação


    return 0;
}