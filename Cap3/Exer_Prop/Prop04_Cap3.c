#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float nota1, nota2, media;
    printf("Digite as 2 notas: \n");
    scanf("%f %f", &nota1, &nota2);
    
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
    //fim operação
            
    printf("a media ponderada das notas %0.2f e %0.2f, com pesos de 2 e 3 respectivamente resultam em: %0.2f", nota1, nota2, media);
    
    return 0;
}