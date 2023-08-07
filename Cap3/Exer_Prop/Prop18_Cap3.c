    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float temp_c, temp_f, temp_k;

        // Coleta de dados
        printf("Digite a temperatura |Em °C|: \n");
        scanf("%f", &temp_c);
        
        // Operações
        temp_f = temp_c * 1.8 + 32;
        temp_k = temp_c + 273.15;
        
        printf("%0.2f Celsius são: \n%0.2f F \n%0.2f K", temp_c, temp_f, temp_k);
                
        
        return 0;
    }