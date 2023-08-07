#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
#define quest 8
    
    //setar idioma
    setlocale(LC_ALL, "portuguese");

   
    //variaveis
    float aprovados, nota;
    int i, j, alunos, num_aluno;
    char gab[quest], resp[quest];
    
    //definidos
    aprovados = 0;
    
    
    //inicio programa
    //quantia de alunos
    printf("Digite a quantia de alunos: \n");
    scanf("%d%*c", &alunos);
    
    
    
    //gabarito
    for (i = 0; i < quest; i++) {
        printf("Digite a resposta da %d° questão \n", i + 1);
        scanf("%c%*c", &gab[i]);
    }
    
    for (i = 0; i < alunos; i++) {
        //definir nota como 0 inicialmente
        nota = 0;
        
        
        //receber número do aluno
        printf("Digite o número do aluno: \n");
        scanf("%d%*c", &num_aluno);
        
        //gabarito aluno
        for (j = 0; j < quest; j++) {
            //coletar resposta do aluno
            printf("Digite a resposta da %d° questão do aluno %d \n", j + 1, i + 1);
            scanf("%c%*c", &resp[j]);
            
            //verificar qual nota do aluno
            if (gab[j] == resp[j]) {
                nota++;
            }
        }
        
        if (nota >= 6) {
            printf("\nO aluno #%d foi aprovado com nota %0.0f \n", num_aluno, nota);
            aprovados++;
        }
        
        else {
            printf("\nO aluno #%d foi reprovado com nota %0.0f \n", num_aluno, nota);
        }
    }
    
    printf("\nA porcentagem de alunos aprovados foi de %0.2f%% \n", (aprovados / alunos) * 100);
    
    //fim programa
    
    return 0;
}