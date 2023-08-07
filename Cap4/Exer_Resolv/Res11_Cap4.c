#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    int hr_in, hr_fin, hr_tot, min_in, min_fin, min_tot, hr_in_min, temp_f_min;
    float temp_f_h;
   
    // Coleta de dados
    printf("Tempo de jogatina: \n\n");
    printf("Digite o tempo de inicio de jogatina no formato HH:MM 24hrs: \n");
    scanf("%d %d", &hr_in, &min_in);
    printf("Digite o tempo de fim de jogatina no formato HH:MM 24hrs: \n");
    scanf("%d %d", &hr_fin, &min_fin);

    // Inicio if-else
    if (hr_in > hr_fin && hr_in <= 24 && hr_fin <= 24 && min_in <= 60 && min_fin <= 60) {
        if (min_in > min_fin) {
           
            // Operações
            hr_tot = 24 - (hr_in - hr_fin);
            hr_in_min = hr_tot * 60;
            min_tot = hr_in_min + min_fin - min_in;
            temp_f_h = min_tot / 60;
            temp_f_min = min_tot % 60;
           
       
            printf("\nUma jogatina que se inicia em %d:%d, termina em %d:%d, tem duração de %0.0f:%d", hr_in, min_in, hr_fin, min_fin, temp_f_h, temp_f_min);
        }
       
        else {
             // Operações
            hr_tot = 24 - (hr_in - hr_fin);
            hr_in_min = hr_tot * 60;
            min_tot = min_fin - min_in + hr_in_min;
            temp_f_h = min_tot / 60;
            temp_f_min = min_tot % 60;
       
            printf("\nUma jogatina que se inicia em %d:%d, termina em %d:%d, tem duração de %0.0f:%d", hr_in, min_in, hr_fin, min_fin, temp_f_h, temp_f_min);
        }
    }
   
    else if (hr_in < hr_fin && hr_in <= 24 && hr_fin <= 24 && min_in <= 60 && min_fin <= 60) {
        if (min_in > min_fin) {
            // Operações
            hr_tot = hr_fin - hr_in;
            hr_in_min = hr_tot * 60;
            min_tot = min_in - min_fin  + hr_in_min;
            temp_f_h = min_tot / 60;
            temp_f_min = min_tot % 60;
       
            printf("\nUma jogatina que se inicia em %d:%d, termina em %d:%d, tem duração de %0.0f:%d", hr_in, min_in, hr_fin, min_fin, temp_f_h, temp_f_min);
        }
       
        else {
             // Operações
            hr_tot = hr_fin - hr_in;
            hr_in_min = hr_tot * 60;
            min_tot = min_fin - min_in + hr_in_min;
            temp_f_h = min_tot / 60;
            temp_f_min = min_tot % 60;
       
            printf("\nUma jogatina que se inicia em %d:%d, termina em %d:%d, tem duração de %0.0f:%d", hr_in, min_in, hr_fin, min_fin, temp_f_h, temp_f_min);
        }
    }
   
    else {
        printf("\nReveja os números digitados \nLembre-se que o limite pra hora é 24 e pra minutos é 60!");
    }
    // Fim if-else
   
   
    return 0;
}