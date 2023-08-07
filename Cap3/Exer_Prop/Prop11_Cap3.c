    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float aresta, diag_M, diag_m, ang_M, ang_m, ang_M_rad, ang_m_rad, const_pi, area, tip;

        // Coleta de dados
        printf("Para calcular a área de um losangulo sabendo as diagonais, digite 1, para calcular usando ângulos e aresta, digite 2: \n");
        scanf("%f", &tip);
        const_pi = 3.141592;

        if (tip == 1) {

            // Coleta de dados
            printf("Digite o valor da diagonal maior: \n");
            scanf("%f", &diag_M);
            printf("Digite o valor da diagonal menor: \n");
            scanf("%f", &diag_m);

            // Operações
            area = (diag_M * diag_m) / 2;

            printf("um losangulo de diagonais %0.2f e %0.2f, tem uma área igual a %0.2f", diag_M, diag_m, area);
        }

        else if (tip == 2) {
            printf("Digite o valor da aresta do losangulo: \n");
            scanf("%f", &aresta);
            printf("Digite o valor do ângulo maior |EM GRAUS|: \n");
            scanf("%f", &ang_M);
            printf("Digite o valor da ângulo menor |EM GRAUS|: \n");
            scanf("%f", &ang_m);

            // Operações
            ang_M_rad = (ang_M * const_pi) / 180;
            ang_m_rad = (ang_m * const_pi) / 180;
            diag_M = sqrt(pow(aresta , 2) + pow(aresta , 2) - 2 * aresta *aresta * cos(ang_M_rad));
            diag_m = sqrt(pow(aresta , 2) + pow(aresta , 2) - 2 * aresta *aresta * cos(ang_m_rad));
            area = (diag_M * diag_m) / 2;

            printf("Um losangulo de aresta %0.2f, ângulos %0.0f° e %0.0f°, tem uma área igual a %0.2f", aresta, ang_M, ang_m, area);
        }

        else {
            printf("Número inválido, tente novamente!");
        }

        return 0;
    }