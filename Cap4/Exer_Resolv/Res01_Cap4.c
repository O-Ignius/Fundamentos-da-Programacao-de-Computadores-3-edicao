#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float trab_lab, prova_sem, prova_fin, nota_media;
    printf("Digite as notas do trabalho de laboratório, do exame semestral e do exame final respectivamente: \n");
    scanf("%f %f %f", &trab_lab, &prova_sem, &prova_fin);
    
    nota_media = ((trab_lab * 2) + (prova_sem * 3) + (prova_fin * 5)) / 10;
    // Fim operações
    
    if (nota_media < 5) {
    printf("O aluno obteve nota E");
    }
    else if (nota_media < 6) {
    printf("O aluno obteve nota D");
    }
    else if (nota_media < 7) {
    printf("O aluno obteve nota C");
    }
    else if (nota_media < 8) {
    printf("O aluno obteve nota B");
    }
    else {
    printf("O aluno obteve nota A");
    }
    
    
    return 0;
}