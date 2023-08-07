#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
#define lin 8
#define col 5
   
    //variaveis
    int i, j, prova[lin] [col], idade[lin], disci[col];
   
    //setar
   
    
    //coletar idade dos alunos
    for (i = 0; i < lin; i++) {
        printf("\nDigite a idade do %d° aluno: \n", i + 1);
        scanf("%d%*c", &idade[i]);
    }
    
    //coletar código das disciplinas
    for (i = 0; i < col; i++) {
        printf("\nDigite o código da %d° disciplina: \n", i + 1);
        scanf("%d%*c", &disci[i]);
    }
    
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite a quantia de provas que o aluno %d° fez na #%d disciplina \n", i + 1, disci[j]);
            scanf("%d%*c", &prova[i] [j]);
        }
    }
    
    //printar matrizs
    for (i = 0; i < lin; i++) {
        printf("O %d° aluno possui %d anos:  ", i + 1, idade[i]);
        for (j = 0; j < col; j++) {
            printf("  Disciplina #%d: %d provas  |", disci[j], prova[i] [j]);
        }
        printf("\n");
    }
    
    return 0;
}