#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 10
#define tam2 3

    //variaveis
    float notas[tam1] [tam2], menota;
    int i, j, men1, men2, men3, aux;


    //definidos
    men1 = 0;
    men2 = 0;
    men3 = 0;

    
    //inicio programa
    //preencher matriz
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite a nota da %d prova do %d° aluno: \n", j+1 ,i + 1);
            scanf("%f%*c", &notas[i] [j]);
        }
    }
    
    //verificar maior
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            //menor nota do aluno
            if (j == 0) {
                menota = notas[i] [j];
                aux = j;
            }
            
            else if (menota > notas[i] [j]) {
                menota = notas[i] [j];
                aux = j;
            }
        }
        
        //saida menor nota aluno
        printf("\nA menor nota do %d° aluno é: %0.2f \n", i + 1, menota);
        
        //verificar quantia de notas menores em cada prova
        if (aux == 0) {
            men1++;
        }
        
        else if (aux == 1) {
            men2++;
        }
        
        else if (aux == 2) {
            men3++;
        }
    }
    
    printf("\nQuantia de menores notas: \n1° prova: %d \n2° prova: %d \n3° prova: %d", men1, men2, men3);
    
    //fim programa


    return 0;
}