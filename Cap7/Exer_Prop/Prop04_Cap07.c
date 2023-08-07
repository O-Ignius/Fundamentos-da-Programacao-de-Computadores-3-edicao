#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define alu 15
#define aval 5
    
    //variaveis
    float notas[alu] [aval], medialu, mediatot;
    int i, j;
    char nome[alu];
    
    //setar
    mediatot = 0;
    
    
    //coletar valores vetor/matriz
    for (i = 0; i < alu; i++) {
        printf("\nDigite o nome do %d° aluno \n", i + 1);
        scanf("%c%*c", &nome[i]);
        
        for (j = 0; j < aval; j++) {
            printf("\nDigite a nota do %c aluno na %d° avaliação \n", nome[i], j + 1);
            scanf("%f%*c", &notas[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nNotas por aluno: \n");
    for (i = 0; i < alu; i++) {
        printf("Aluno %c:  ", nome[i]);
        for (j = 0; j < aval; j++) {
            printf("  %0.2f  |", notas[i] [j]);
        }
        printf("\n");
    }
    
    
    //aprovado nota >= 7 | exame nota > 4 && nota < 7 | Reprovado nota <= 4
    
    //realizar médias
    for (i = 0; i < alu; i++) {
        medialu = 0;
        
        for (j = 0; j < aval; j++) {
            medialu += notas[i] [j];
        }
        
        //media de cada aluno
        medialu = medialu / aval;
        
        //media da classe
        mediatot += medialu;
        
        
        //verificar se foi aprovado, reprovado ou precisa de exame
        if (medialu >= 7) {
            printf("\nO aluno %c foi Aprovado, pois obteve média igual a %0.2f\n", nome[i], medialu);
        }
        
        else if (medialu < 7 && medialu > 4) {
            printf("\nO aluno %c precisa ser submetido a teste, pois obteve média igual a %0.2f\n", nome[i], medialu);
        }
        
        else {
            printf("\nO aluno %c foi Reprovado, pois obteve média igual a %0.2f\n", nome[i], medialu);
        }
    }
    
    //calculo media total
    mediatot = mediatot / alu;
    
    //saida media total
    printf("\nA média total da turma foi de %0.2f \n", mediatot);
    
    
    
    return 0;
}