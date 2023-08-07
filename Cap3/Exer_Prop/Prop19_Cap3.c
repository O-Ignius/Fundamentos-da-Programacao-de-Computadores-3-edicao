    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float larg, comp, area, pot_ilum;

        // Coleta de dados
        printf("Digite as medidas de largura e comprimento: \n");
        scanf("%f %f", &larg, &comp);
        
        // Operações
        area = larg * comp;
        pot_ilum =18 * round(area);
        
        printf("Um comodo de %0.2f por %0.2f tem %0.2f de area e precisa de %0.2fW para iluminação", larg, comp, area, pot_ilum);
                
        
        return 0;
    }