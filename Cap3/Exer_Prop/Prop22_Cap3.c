    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float lados, diagonais;

        // Coleta de dados
        printf("Calcular diagonais de um polígono convexo: \n\n");
        printf("Digite o número de lados do polígono: \n");
        scanf("%f", &lados);
        
        // Operações
        diagonais = lados * ((lados - 3) / 2);
        
        printf("Um polígono com %0.0f lados tem %0.0f diagonais", lados, diagonais);
             
        
        return 0;
    }