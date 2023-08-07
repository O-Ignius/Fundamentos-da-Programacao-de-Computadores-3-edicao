#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float peso[15], faixa1[2] = {0, 0}, faixa2[2] = {0, 0}, faixa3[2] = {0, 0}, faixa4[2] = {0, 0};
    int i, j, idade[15];
    
    //definidos
    //Vetor 0 armazena quantia de pessoas
    //vetor 1 armazena o valor para a media
    
    
    for (i = 0; i < 15; i++) {
        //coleta de dados
        printf("Digite a idade: \n");
        scanf("%d", &idade[i]);
        printf("Digite o peso: \n");
        scanf("%f", &peso[i]);
        
        if (idade[i] >= 1 && idade[i] <= 10) {
            faixa1[0]++;
            faixa1[1] = faixa1[1] + peso[i];
        }
        
        else if (idade[i] >= 11 && idade[i] <= 20) {
            faixa2[0]++;
            faixa2[1] = faixa2[1] + peso[i];
        }
        
        else if (idade[i] >= 21 && idade[i] <= 30) {
            faixa3[0]++;
            faixa3[1] = faixa3[1] + peso[i];
        }
        
        else if (idade[i] > 31) {
            faixa4[0]++;
            faixa4[1] = faixa4[1] + peso[i];
        }
    }
    
    //saida
    printf("\nMédia da primeira faixa etária (1 a 10) = %0.2f \n", faixa1[1] / faixa1[0]);
    printf("\nMédia da segunda faixa etária (11 a 20) = %0.2f \n", faixa2[1] / faixa2[0]);
    printf("\nMédia da terceira faixa etária (21 a 30) = %0.2f \n", faixa3[1] / faixa3[0]);
    printf("\nMédia da quarta faixa etária (31 ou mais) = %0.2f \n", faixa4[1] / faixa4[0]);
    
    return 0;
}