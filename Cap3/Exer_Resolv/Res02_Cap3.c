#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, media;
    // Coleta de dados
    printf("Digite as notas! \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;
    printf("a media das notas %0.2f, %0.2f, %0.2f é %0.2f", n1, n2, n3, media);
    // Fim operação
    
    return 0;
}