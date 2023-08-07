    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float ang1, ang2, ang3;

        // Coleta de dados
        printf("Calcular 3° ângulo do triângulo, sabendo os outros 2: \n\n");
        printf("Digite o valor dos 2 ângulos conhecidos: \n");
        scanf("%f %f", &ang1, &ang2);
        
        // Operações
        if (ang1 + ang2 < 180) {
            ang3 = 180 - (ang1 + ang2);

            printf("O 3° ângulo do triângulo é %0.2f", ang3);
        }
        else {
            printf("Não é um triângulo!");
        }
        
        return 0;
    }