#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float a, b, c, x1, x2, bask, delta;
    int vari;
   
    // Coleta de dados
    printf("Resolver equação 2° grau: \n\n");
    printf("Digite os coeficientes e o termo independente da equação |Formato: Ax² Bx C|: \n");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b , 2) - 4 * (a * c);
   
    // Inicio if-else
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("as raízes da equação %0.2fx² + (%0.2fx) + (%0.2f) são: \nx1 = %0.2f \nx2= %0.2f", a, b, c, x1, x2);
    }
    
    else {
        printf("O resultado da raíz na fórmula de bhaskara não existe dentro dos números reais!");
    }
    // Fim if-else
   
   
    return 0;
}