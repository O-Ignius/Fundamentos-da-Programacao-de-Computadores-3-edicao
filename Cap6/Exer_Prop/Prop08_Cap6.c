#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 7

    //variaveis
    float nota[tam], falta, maior;
    int i, nerd;
    char aluno[tam];


    //definidos


    //inicio programa
    //preencher vetor
    for (i = 0; i < tam; i++) {
        printf("\nDigite a inicial do nome do aluno: \n");
        scanf("%c%*c", &aluno[i]);
        printf("\nDigite a média final desse aluno: \n");
        scanf("%f%*c", &nota[i]);
    }
    
    for (i = 0; i < tam; i++) {
        //aluno não aprovado
        if (nota[i] < 7) {
            falta = 7 - nota[i];
            printf("\nO aluno %c precisa de %0.2f pontos", aluno[i], falta);
        }
    }
    
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            maior = nota[i];
        }
        
        else if (maior < nota[i]) {
            maior = nota[i];
            nerd = i;
        }
    }
    
    //saida
    printf("\nO aluno com maior média é %c, sendo a média igual a %0.2f", aluno[nerd], maior);


    //fim programa


    return 0;
}