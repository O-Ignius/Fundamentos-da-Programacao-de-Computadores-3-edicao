#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float horas, min, hor_in_min, min_p_h, tempo_tot;
    printf("Digite as horas (max 24): \n");
    scanf("%2f", &horas);
    printf("Digite os minutos (max 99): \n");
    scanf("%2f", &min);
    
    if (min <= 60) {
    hor_in_min = horas * 60;
    tempo_tot = hor_in_min + min;
    printf("%0.0f:%0.0f são %0.0f minutos", horas, min, tempo_tot);
    }
    
    else {
    min_p_h = min / 60;
    horas = horas + (int) min_p_h;
    hor_in_min = horas * 60;
    min = min - 60;
    tempo_tot = hor_in_min + min;
    printf("%0.0f:%0.0f são %0.0f minutos", horas, min, tempo_tot);
    }
    // Fim operações if-else
    
    
    return 0;
}