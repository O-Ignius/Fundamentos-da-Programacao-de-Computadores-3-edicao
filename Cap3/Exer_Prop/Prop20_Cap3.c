    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float dist_esc, ang_esc, ang_rad, tam_escada, const_pi, altura;

        // Coleta de dados
        printf("Digite o ângulo da escada com o chão |Em Graus|: \n");
        scanf("%f", &ang_esc);
        printf("Digite a distância que a escada se encontra da parede: \n");
        scanf("%f", &dist_esc);
        
        // Operações
        const_pi = 3.141592;
        ang_rad = (ang_esc * const_pi) / 180;
        tam_escada = dist_esc / cos(ang_rad);
        altura = sqrt(pow(tam_escada , 2) - pow(dist_esc , 2));
        
        printf("O tamanho da escada é de %0.2f, posicionada a uma distância de %0.2f, fazendo %0.2f° com o chão, ela alcança uma altura de %0.2f", tam_escada, dist_esc, ang_esc, altura);
                
        
        return 0;
    }