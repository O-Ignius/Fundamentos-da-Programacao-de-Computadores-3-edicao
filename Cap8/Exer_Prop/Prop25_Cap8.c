#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 10
#define col 4


typedef struct {
    int codigo[tam];
    float nota[tam] [col];
}notas;

typedef struct {
    float media [tam];
    int recupe[tam];
}final;


//indicar subrotinas
final manipula (notas base);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int i, j;
    notas base;
    final resul;
   
   
    //inicio programa
    //coletar dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o código do %d° aluno: \n", i + 1);
        scanf("%d%*c", &base.codigo[i]);
        
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor da %d° nota do aluno: \n", j + 1);
            scanf("%f%*c", &base.nota[i] [j]);
        }
    }
   
    
    //chamar subrotinas
    resul = manipula(base);
   
   
    //saidas
    printf("\nMédia das notas: \n");
    for (i = 0; i < tam; i++) {
        printf("%d° Aluno: %0.2f \n", i + 1, resul.media[i]);
    }
    
    printf("\nNúmero dos alunos que precisam de recuperação: \n");
    for (i = 0; i < tam; i++) {
        printf("Aluno #%d \n", resul.recupe[i]);
    }
   
   
    //fim programa
   
   
    return 0;
}


//subrotina que calcula média e quais alunos precisam de recuperação
final manipula (notas base) {
    //variaveis
    float soma;
    int i, j, aux;
    final reto;
   
   
    //definidos
    aux = 0;
   
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        reto.recupe[i] = 0;
    }
    
    for (i = 0; i < tam; i++) {
        soma = 0;
        
        for (j = 0; j < col; j++) {
            soma += base.nota[i] [j];
        }
        
        reto.media[i] = (soma / col);
        
        if (reto.media[i] < 6) {
            reto.recupe[aux] = base.codigo[i];
            aux++;
        }
    }
    
    return reto;
   
    //fim sub
   
}