#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
#define lin 8
#define col 5
   
    //variaveis
    float medidade;
    int i, j, prova[lin] [col], idade[lin], disci[col], qntidade, cod, aux, alun;
   
    //setar
    aux = 0;
    qntidade = 0;
    medidade = 0;
   
    
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
    
    //media idade alunos que nao fizeram nenhuma prova em alguma disciplina
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (prova[i] [j] == 0) {
                medidade += idade[i];
                qntidade++;
                break;
            }
        }
    }
    
    //calcular media idade alunos que nao fizeram nenhuma prova em alguma disciplina
    if (qntidade != 0) {
        medidade = medidade / qntidade;
    }
    
    else {
        medidade = 0;
    }
    
    
    printf("\nA média de idade dos alunos que não fizeram nenhuma prova em nenhuma disciplina é %0.2f anos \n", medidade);
    
    //lista com idade dos alunos que fizeram menos de 3 provas em determinada disciplina
    printf("\nlista com idade dos alunos que fizeram menos de 3 provas em determinada disciplina: \n");
    for (i = 0; i < lin; i++) {
        printf("  Aluno com %d anos : ", idade[i]);
        for (j = 0; j < col; j++) {
            if (prova[i] [j] < 3) {
                printf("  disciplina #%d  ", disci[j]);
            }
        }
        printf("\n");
    }
    
    do {
        aux = 0;
        alun = 0;
        
        printf("\nDigite o código da disciplina: |Parar: digite 0|\n");
        scanf("%d%*c", &cod);
        
        if (cod == 0) {
            continue;
        }
        
        
        for (i = 0; i < lin; i++) {
            for (j = 0; j < col; j++) {
                if (cod == disci[j]) {
                    aux = 1;
                    if (prova[i] [j] > 2 && (idade[i] > 18 && idade[i] < 25)) {
                        alun++;
                        break;
                    }
                }
            }
        }
        
        
        if (aux != 0) {
            printf("\nA quantia de Alunos com idade entre 18 e 25 anos que fizeram mais de duas provas da matéria #%d é: %d \n", cod, alun);
        }
        
        else {
            printf("\nCódigo digitado inválido, tente novamente!!\n");
        }
    }
    while(cod != 0);
    
    return 0;
}