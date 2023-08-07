#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float alt_deg, qnt_deg, alt_obj;
    // Coleta de dados
    printf("Digite a altura de cada degrau: \n");
    scanf("%f", &alt_deg);
    printf("Digite a altura que se deseja alcançar: \n");
    scanf("%f", &alt_obj);
    qnt_deg = alt_obj / alt_deg;
    // Fim operações
    printf("Para chegar a uma altura de %0.2f, é necessário subir aproximadamente %0.2f degraus", alt_obj, qnt_deg);
    
    return 0;
}