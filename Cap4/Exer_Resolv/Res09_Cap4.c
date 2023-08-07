#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    // Coleta de dados
    int vari;
    float dia, mes, ano, hora, min, auto_data;
    
    // Coleta de dados
    printf("Mostrar data e hora no formato: DD/MM/AAAA, HH:MM \n");
    printf("1: Captar dados automaticamente \n2: Digitar manualmente \n");
    scanf("%d", &vari);
    
    // Inicio if-else
    if (vari == 1) {
        // Ponteiro para struct que armazena os dados
        struct tm *auto_data;
        
        // Armazenar tempo em seg
        time_t segundos;
        
        // Obtendo o tempo
        time(&segundos);
                
        //converter seg para tempo local
        auto_data = localtime(&segundos);
        
        
        
        
       if (auto_data -> tm_mon == 0) {
       printf("Data: %d de Janeiro de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
    
       else if (auto_data -> tm_mon == 1) {
       printf("Data: %d de Fevereiro de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
       
       else if (auto_data -> tm_mon == 2) {
       printf("Data: %d de Março de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
        
       else if (auto_data -> tm_mon == 3) {
       printf("Data: %d de Abril de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
        
       else if (auto_data -> tm_mon == 4) {
       printf("Data: %d de Maio de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
        
       else if (auto_data -> tm_mon == 5) {
       printf("Data: %d de Junho de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
        
       else if (auto_data -> tm_mon == 6) {
       printf("Data: %d de Julho de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
        
       else if (auto_data -> tm_mon == 7) {
       printf("Data: %d de Agosto de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
       
       else if (auto_data -> tm_mon == 8) {
       printf("Data: %d de Setembro de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
       
       else if (auto_data -> tm_mon == 9) {
       printf("Data: %d de Outubro de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
       
       else if (auto_data -> tm_mon == 10) {
       printf("Data: %d de Novembro de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
        
       else {
       printf("Data: %d de Dezembro de %d \n", auto_data -> tm_mday, auto_data -> tm_year + 1900);
       printf("Horas: %d:%d", auto_data -> tm_hour, auto_data -> tm_min);
       }
    }
    
    else if (vari == 2) {
       printf("Digite a data na ordem Dia - Mês - Ano \n");
       scanf("%f %f %f", &dia, &mes, &ano);
       printf("Digite a hora no formato Hora - Minuto \n");
       scanf("%f %f", &hora, &min);
    
       if (mes == 1 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Janeiro de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 2 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Feveiro de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 3 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Março de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 4 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Abril de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 5 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Maio de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 6 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Junho de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 7 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Julho de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 8 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Agosto de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 9 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Setembro de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 10 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Outubro de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 11 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Novembro de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else if (mes == 12 && hora <= 24 && min <= 60) {
       printf("Data: %0.0f de Dezembro de %0.0f \n", dia, ano);
       printf("Horas: %0.0f:%0.0f", hora, min);
       }
    
       else {
          printf("Verifique se os números digitados estão corretos");
       }
    }
    
    else {
       printf("Reveja os números digitados e tente novamente!");
    }
    
    
    return 0;
}