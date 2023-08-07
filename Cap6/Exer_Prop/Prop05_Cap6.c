#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define lo 15
#define lp 10

    //variaveis
    int i, j, prog[lp], logi[lo], iguais[lo], aux;


    //definidos
    aux = 0;

    //inicio programa
    //preencher vetor
    for (i = 0; i < lp; i++) {
        printf("\nDigite a matrícula do %d° aluno de Linguagem de Programação: \n", i + 1);
        scanf("%d%*c", &prog[i]);
    }
    
    for (i = 0; i < lo; i++) {
        printf("\nDigite a matrícula do %d° aluno de Lógica: \n", i + 1);
        scanf("%d%*c", &logi[i]);
    }
    
    //alunos nos 2 cursos
    for (i = 0; i < lo; i++) {
        for (j = 0; j < lp; j++) {
            if (logi[i] == prog[j]) {
                iguais[aux] = logi[i];
                aux++;
            }
        }
    }
    
    //saida
    printf("\nHá %d Alunos em ambos os cursos: \n", aux);
    for (i = 0; i < aux; i++) {
        printf("\n#%d \n", iguais[i]);
    }
    //fim programa


    return 0;
}