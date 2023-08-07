    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float raio, compri, area, area_circunf, volume, const_pi;

        // Coleta de dados
        printf("Digite o valor do raio da esfera / circunferência: \n");
        scanf("%f", &raio);
        
        // Operações
        const_pi = 3.141592;
        compri = (const_pi * raio) * 2;
        area_circunf = const_pi * pow(raio , 2);
        area = const_pi * pow(raio , 2) * 4;
        volume = pow(raio , 3) * const_pi * 3 / 4;
        
        printf("Uma esfera de raio %0.2f tem area igual a %0.2f e volume igual a %0.2f \n", raio, area, volume);
        printf("Uma circunferência de raio %0.2f tem comprimento igual a %0.2f e área igual a %0.2f", raio, compri, area_circunf);
                
        
        return 0;
    }