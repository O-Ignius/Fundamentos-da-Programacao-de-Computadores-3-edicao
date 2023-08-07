    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float cat1, cat2, hip;

        // Coleta de dados
        printf("CALCULAR A HIPOTENUSA DE UM TRIÂNGULO: \n");
        printf("Digite o valor dos catetos em ordem: \n");
        scanf("%f %f", &cat1, &cat2);
        
        // Operações
        hip = sqrt(pow(cat1 , 2) + pow(cat2 , 2));
        
        printf("Um triângulo de catetos %0.2f e %0.2f tem uma hipotenusa de %0.2f", cat1, cat2, hip);
                
        
        return 0;
    }