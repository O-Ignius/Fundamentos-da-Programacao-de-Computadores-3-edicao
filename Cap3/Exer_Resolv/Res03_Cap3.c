#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, p1, p2, p3, media;
    // Coleta de dados
    printf("Digite as notas! \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite o peso referente a cada nota na ordem anterior! \n");
    scanf("%f %f %f", &p1, &p2, &p3);
    media = (n1 * p1 + n2 * p2 + n3 * p3)/(n1 + n2 + n3);
    printf("a media ponderada das notas %0.2f, %0.2f, %0.2f é %0.2f", n1, n2, n3, media);
    // Fim operação
    
    return 0;
}