#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    // Coleta de dados
    float dia1, dia2, mes1, mes2, ano1, ano2;
    
    // Coleta de dados
    printf("Mostrar qual data é maior cronologicamente \n");
    printf("Digite a primeira data no formato DD/MM/AAAA \n");
    scanf("%f %f %f", &dia1, &mes1, &ano1);
    printf("Digite a segunda data no formato DD/MM/AAAA \n");
    scanf("%f %f %f", &dia2, &mes2, &ano2);
    
    // Inicio if-else
    if (dia1 > dia2 || mes1 > mes2 || ano1 > ano2) {
        printf("A data %0.0f/%0.0f/%0.0f é maior cronologicamente que %0.0f/%0.0f/%0.0f \n", dia1, mes1, ano1, dia2, mes2, ano2);
    }
    
    else {
        printf("A data %0.0f/%0.0f/%0.0f é maior cronologicamente que %0.0f/%0.0f/%0.0f \n", dia2, mes2, ano2, dia1, mes1, ano1);
    }
    
    
    return 0;
}