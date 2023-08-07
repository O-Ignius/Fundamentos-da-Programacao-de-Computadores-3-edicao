#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float saco_in, gato1, gato2, saco_1dia, saco_5dia;
    // Coleta de dados
    printf("Digite o peso |em KG| do saco de ração comprado: \n");
    scanf("%f", &saco_in);
    printf("Digite quantas gramas o 1° gato come por dia: \n");
    scanf("%f", &gato1);
    printf("Digite quantas gramas o 2° gato come por dia: \n");
    scanf("%f", &gato2);
    saco_1dia = saco_in - (gato1 + gato2) / 1000;
    saco_5dia = saco_in - (gato1 + gato2) * 5 / 1000;
    // Fim operações
    printf("Um saco de ração de %0.2fKG, após o primeiro dia terá %0.2fKG e após o quinto dia terá %0.2fKG", saco_in, saco_1dia, saco_5dia);
    
    return 0;
}