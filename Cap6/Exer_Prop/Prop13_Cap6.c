#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 8

    //variaveis
    float notas[tam], soma;
    int i;
    char alunos[tam];


    //definidos
    soma = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite a inicial do %d° aluno: \n", i + 1);
        scanf("%c%*c", &alunos[i]);
        printf("\nDigite a nota do aluno: \n");
        scanf("%f%*c", &notas[i]);
    }
    
    //soma das notas
    for (i = 0; i < tam; i++) {
        soma = soma + notas[i];
    }
    
    printf("\nNotas dos alunos: \n");
    for (i = 0; i < tam; i++) {
        printf("\nAluno %c: %0.2f\n", alunos[i], notas[i]);
    }
    
    printf("\nA media da turma é %0.2f", soma / tam);
    
    //fim programa


    return 0;
}