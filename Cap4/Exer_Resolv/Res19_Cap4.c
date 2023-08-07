#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float peso, alt_m, alt;
   
    // Coleta de dados
    printf("Classificação: \n\n");
    printf("Digite o peso |em KG| e a altura |em Metros|: \n");
    scanf("%f %f", &peso, &alt_m);
    
    // Operações
    alt = alt_m * 100;
    
   
    // Inicio if-else
    if (peso > 0 && peso <= 60) {
        if (alt > 0 && alt < 120) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação A", peso, alt_m);
        }
        
        else if (alt >= 120 && alt <= 170) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação B", peso, alt_m);
        }
        
        else if (alt > 170) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação C", peso, alt_m);
        }
        
        else {
            printf("Verifique o valor da altura!");
        }   
    }
    
    else if (peso > 60 && peso <= 90) {
        if (alt > 0 && alt < 120) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação D", peso, alt_m);
        }
        
        else if (alt >= 120 && alt <= 170) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação E", peso, alt_m);
        }
        
        else if (alt > 170) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação F", peso, alt_m);
        }
        
        else {
            printf("Verifique o valor da altura!");
        }   
    }
    
    else if (peso > 90) {
        if (alt > 0 && alt < 120) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação G", peso, alt_m);
        }
        
        else if (alt >= 120 && alt <= 170) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação H", peso, alt_m);
        }
        
        else if (alt > 170) {
            printf("A classificação de alguém que tem peso igual a %0.2fKg e altura igual a %0.2fm, tem classificação I", peso, alt_m);
        }
        
        else {
            printf("Verifique o valor da altura!");
        }   
    }
    
    else {
        printf("Verifique o peso digitado!");
    }
    // Fim if-else
   
   
    return 0;
}