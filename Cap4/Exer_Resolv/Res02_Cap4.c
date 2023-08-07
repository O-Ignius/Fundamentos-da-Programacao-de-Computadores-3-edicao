#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Coleta de dados
    float not1, not2, not3, nota_media, falt_p_media;
    printf("Digite as 3 notas dos alunos em ordem: \n");
    scanf("%f %f %f", &not1, &not2, &not3);
    
    nota_media = (not1 + not2 + not3) / 3;
    // Fim operações
    
    if (nota_media < 3) {
    printf("Aluno Reprovado!");
    }
    //Considerando que a media seja 7, uma vez que no livro, alguem que tenha tirado 6,9 ainda nao teria passado
    else if (nota_media < 7) {
    falt_p_media = 7 - nota_media;
    printf("Aluno precisa de recuperação pois sua nota foi de %0.2f, faltando %0.2f para passar, logo, necessitam obter uma nota minima de 7 no exame", nota_media, falt_p_media);
    }
    else {
    printf("Aluno Aprovado");
    }
    //fim if-else
    
    return 0;
}