#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variáveis
    float hr_ext, hr_falt, premio, val_premio, hr_tot;
   
    // coleta de dados
    printf("Cálcular prêmio do funcionário com base nas horas trabalhadas: \n\n");
    printf("Digite a quatia de horas extras: \n");
    scanf("%f", &hr_ext);
    printf("Digite a quatia de horas faltadas pelo funcionário: \n");
    scanf("%f", &hr_falt);
   
    
    // operações
    premio = (hr_ext * 60) - ((hr_falt * 60) * 2 / 3);
    hr_tot = premio / 60;
    
    
    // inicio if-else
    if (premio < 600 && premio > 0) {
        val_premio = 100;
        
        printf("O funcionário receberá um prêmio de R$%0.2f, pois trabalhou por %0.2f minutos ou %0.2f horas", val_premio, premio, hr_tot);
    }
    
    else if (premio >= 600 && premio < 1200) {
        val_premio = 200;
        
        printf("O funcionário receberá um prêmio de R$%0.2f, pois trabalhou por %0.2f minutos ou %0.2f horas", val_premio, premio, hr_tot);
    }
    
    else if (premio >= 1200 && premio < 1800) {
        val_premio = 300;
        
        printf("O funcionário receberá um prêmio de R$%0.2f, pois trabalhou por %0.2f minutos ou %0.2f horas", val_premio, premio, hr_tot);
    }
    
    else if (premio >= 1800 && premio < 2400) {
        val_premio = 400;
        
        printf("O funcionário receberá um prêmio de R$%0.2f, pois trabalhou por %0.2f minutos ou %0.2f horas", val_premio, premio, hr_tot);
    }
    
    else if (premio >= 2400) {
        val_premio = 500;
        
        printf("O funcionário receberá um prêmio de R$%0.2f, pois trabalhou por %0.2f minutos ou %0.2f horas", val_premio, premio, hr_tot);
    }
    
    else {
        printf("Hora igual ou menor que zero, logo o valor não pode ser calculado!");
    }
    // fim if-else
   
   
    return 0;
}