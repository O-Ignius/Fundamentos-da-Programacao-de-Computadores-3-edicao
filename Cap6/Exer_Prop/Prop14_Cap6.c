#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 6

    //variaveis
    float nota1[tam], nota2[tam], soma[tam], class, aprov, reprov, teste;
    int i;
    char alunos[tam];


    //definidos
    aprov = 0;
    reprov = 0;
    teste = 0;
    class = 0;
    

    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite a inicial do %d° aluno: \n", i + 1);
        scanf("%c%*c", &alunos[i]);
        printf("\nDigite a primeira nota do aluno: \n");
        scanf("%f%*c", &nota1[i]);
        printf("\nDigite a segunda nota do aluno: \n");
        scanf("%f%*c", &nota2[i]);
    }
    
    //zerar vetor para nota media de cada aluno
    for (i = 0; i < tam; i++) {
        soma[i] = 0;
    }
    
    //soma das notas
    for (i = 0; i < tam; i++) {
        soma[i] = (soma[i] + nota1[i] + nota2[i]) / 2;
    }
    
    //quantia de aprovados e reprovados
    for (i = 0; i < tam; i++) {
        class = class + soma[i];
        
        if (soma[i] >= 7) {
            aprov++;
        }
        
        else if (soma[i] < 7 && soma[i] > 3) {
            teste++;
        }
        
        else {
            reprov++;
        }
    }
    
    printf("\nNotas dos alunos: \n");
    for (i = 0; i < tam; i++) {
        printf("\nAluno %c: \n1° Prova: %0.2f \n2° Prova: %0.2f \nMédia do aluno: %0.2f\n", alunos[i], nota1[i], nota2[i], soma[i]);
    }
    
    printf("\nA media da turma é %0.2f \n", class / tam);
    printf("\nAlunos: \nAprovados: %0.0f \nReprovados: %0.0f \nAlunos que necessitam de teste: %0.0f \n", aprov, reprov, teste);
    
    //fim programa


    return 0;
}