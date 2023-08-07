#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define turm 3
#define alun 8
#define disc 4

    //variaveis
    float notas[turm] [alun] [disc], medalu[turm] [alun], medturm[turm];
    int i, j, k;


    //definidos
    
    
    //inicio programa
    //receber valores da matriz
    for (i = 0; i < turm; i++) {
        printf("\n%d° Turma: \n", i + 1);
        for (j = 0; j < alun; j++) {
            for (k = 0; k < disc; k++) {
                printf("\nDigite a nota do %d° aluno na %d° disciplina: \n", j + 1, k + 1);
                scanf("%f%*c", &notas[i] [j] [k]);
            }
            
        }
    }
    
    //zerar matriz nota aluno/turma
    for (i = 0; i < turm; i++) {
        for (j = 0; j < alun; j++) {
            medalu[i] [j] = 0;
        }
    }
    
    //zerar vetor media de cada turma
    for (i = 0; i < turm; i++) {
        medturm[i] = 0;
    }
    
    
    //setar alguns valores
    for (i = 0; i < turm; i++) {
        for (j = 0; j < alun; j++) {
            for (k = 0; k < disc; k++) {
                //nota total de cada aluno em todas as disciplinas
                medalu[i] [j] += notas[i] [j] [k];
                
                //nota total da turma
                medturm[i] += notas[i] [j] [k];
            }
        }
    }
    
    //dividir a nota total dos alunos pela quantia de materia
    for (i = 0; i < turm; i++) {
        for (j = 0; j < alun; j++) {
            medalu[i] [j] = medalu[i] [j] / disc;
        }
    }
    
    //dividir a nota total da turma pela quantia de alunos
    for (i = 0; i < turm; i++) {
        medturm[i] = medturm[i] / alun;
    }
    
    //media de cada aluno de cada turma
    printf("\nMédia de cada aluno de cada turma: \n");
    for (i = 0; i < turm; i++) {
        printf("\n%d° Turma: \n", i + 1);
        for (j = 0; j < alun; j++) {
            printf("\n%d° Aluno: %0.2f \n", j + 1, medalu[i] [j]);
        }
    }
    
    for (i = 0; i < turm; i++) {
        printf("\nA média da %d° turma é: %0.2f \n", i + 1, medturm[i]);
    }
    
    //fim programa


    return 0;
}