#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float num, num_quad, num_cub, raiz_quad_num, raiz_cub_num;
    // Coleta de dados
    printf("Digite um numero maior que zero: \n");
    scanf("%f", &num);
    // Desculpa ai Manoel, mas fiquei curioso com if e else e queria testar
    // inicio if - else
    if (num > 0) {
        num_quad = pow(num , 2);
        num_cub = pow(num , 3);
        raiz_quad_num = sqrt(num);
        raiz_cub_num = pow(num , 1.0/3.0);
        printf("Número inicial: %0.3f \n; Seu quadrado: %0.3f \n; Seu cubo: %0.3f \n; Sua raiz quadrada = %0.3f \n; Sua raiz cubica = %0.3f", num, num_quad, num_cub, raiz_quad_num, raiz_cub_num);
        // Fim operação
    }
    else {
        printf("Amigão, é um numero MAIOR que zero!!!");
    }
    // fim if - else
    
    return 0;
}