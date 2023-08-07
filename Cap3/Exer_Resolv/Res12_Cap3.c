#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float num1, num2, nums_elev1, nums_elev2;
    // Coleta de dados
    printf("Digite um numero maior que zero: \n");
    scanf("%f %f", &num1, &num2);
    // Desculpa ai Manoel, mas fiquei curioso com if e else e queria testar
    // inicio if - else
    if (num1 > 0 && num2 > 0) {
        nums_elev1 = pow(num1, num2);
        nums_elev2 = pow(num2, num1);
        printf("Números iniciais: %0.3f e %0.3f \n; Números elevados um ao outro: %0.3f e %0.3f", num1, num2, nums_elev1, nums_elev2);
        // Fim operação
    }
    else {
        printf("Amigão, ambos os números tem de ser MAIORES que zero!!!");
    }
    // fim if - else
    
    return 0;
}