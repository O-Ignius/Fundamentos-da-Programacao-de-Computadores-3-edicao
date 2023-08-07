#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float nota1, nota2, media, reprov, aprov, teste, med_class;
    int i;

    //definidos
    reprov = 0;
    teste = 0;
    aprov = 0;
    med_class = 0;
   
    // o que faz:
    printf("Notas dos alunos: \n\n");


    // inicio aplicação
    // Repetição
    for (i = 0; i < 6; i++) {
        //coleta de dados
        printf("\nDigite a primeira nota do aluno: \n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno: \n");
        scanf("%f", &nota2);
       
        // operações
        media = (nota1 + nota2) / 2;
        med_class = media + med_class;
       
        //if else media
        if (media <= 3) {
            //saida
            printf("Reprovado \n");
           
            reprov = reprov + 1;        
        }
       
        else if (media > 3 && media < 7) {
            //saida
            printf("Precisa de teste \n");
           
            teste = teste + 1;
        }
       
        else {
            //saida
            printf("Aprovado \n");
           
            aprov = aprov + 1;
        }// fim if else media
    }
   
    //saida
    printf("\nAlunos aprovados: %0.0f \nAlunos reprovados: %0.0f \nAlunos que precisam passar no teste: %0.0f \n", aprov, reprov, teste);
    printf("A média total da classe é de %0.2f", med_class / 6);
    // fim aplicação


    return 0;
}