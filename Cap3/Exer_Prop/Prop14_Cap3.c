    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float ano_at, ano_nasc, idade, idade_mes, idade_sem, idade_dias, idade_horas, idade_minutos;

        // Coleta de dados
        printf("Conversão de idade para anos, meses, semanas, dias, horas e minutos: \n");
        printf("Digite o ano atual: \n");
        scanf("%f", &ano_at);
        printf("Digite o ano de nascimento da pessoa: \n");
        scanf("%f", &ano_nasc);
        
        // Operações
        idade = ano_at - ano_nasc;
        idade_mes = idade * 12;
        idade_sem = idade_mes * 4;
        idade_dias = idade_sem * 7;
        idade_horas = idade_dias * 24;
        idade_minutos = idade_horas * 60;
        
        printf("Alguém nascido em %0.0f tem atualmente aproximadamente: \n%0.0f Anos de idade \n%0.2f Meses de idade \n", ano_nasc, idade, idade_mes);
        printf("%0.2f Semanas de idade \n%0.2f Dias de idade \n%0.2f Horas de idade \n%0.2f Minutos de idade", idade_sem, idade_dias, idade_horas, idade_minutos);
        
        
        return 0;
    }