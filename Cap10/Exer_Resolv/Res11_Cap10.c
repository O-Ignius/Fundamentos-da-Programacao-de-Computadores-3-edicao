//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define alu 10
#define disci 6
#define tam 30

typedef struct {
    int codigal[alu], serie[alu];
    char nome[alu];
}aluno;

typedef struct {
    int codigdis[disci], carga[disci];
    char descri[disci];
}disciplina;

typedef struct {
    float notafim[tam];
    int codigal[tam], codigdis[tam], faltas[tam];
}matricula;


//indicar subrotinas
matricula realizar(aluno todos, disciplina materias);

matricula final(matricula confirmados);

void consulta(matricula confirmados, disciplina materias);

void aprov(matricula confirmados, disciplina materias);




int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int i, j, aux, rep, op;
    aluno todos;
    disciplina materias;
    matricula confirmados;
    
    
    //definidos
    i = 0;
   
    //inicio programa
    do {
        printf("\nDigite código do aluno: \n");
        scanf("%d%*c", &todos.codigal[i]);
        printf("\nDigite a inicial do aluno: \n");
        scanf("%c%*c", &todos.nome[i]);
        printf("\nDigite a série em que o aluno está: \n");
        scanf("%c%*c", &todos.serie[i]);
        
        if (todos.serie[i] >= 5 && todos.serie[i] <= 9) {
            i++;
        }
        
        else {
            printf("\nA série deve ser de 5 a 9! \n");
        }
    }
    while(i != alu);
    
    
    i = 0;
    
    
    do {
        rep = 0;
        
        printf("\nDigite código da disciplina: \n");
        scanf("%d%*c", &materias.codigdis[i]);
        printf("\nDigite a letra da descrição da disciplina: \n");
        scanf("%c%*c", &materias.descri[i]);
        printf("\nDigite a carga horária: \n");
        scanf("%c%*c", &materias.carga[i]);
        
        for (j = 0; j < i; j++) {
            if (aux == materias.codigdis[j]) {
                rep++;
            }
        }
        
        if (rep == 0) {
            materias.codigdis[i] = aux;
            i++;
        }
        
        else {
            printf("\nNão se pode ter 2 disciplinas com mesmo código!\n");
        }
    }
    while(i != disci);
    
    
   
    
    //chamar subrotina
    confirmados = realizar(todos, materias);
    
    
    do {
        printf("\nEscolha uma opção: \n1: Consultar alunos reprovados nas disciplinas \n2: Nome das disciplinas cursadas por determinado aluno \n3: Sair \n");
        scanf("%d%*c", &op);
        
        if (op == 3) {
            continue;
        }
        
        else if (op == 1) {
            consulta(confirmados, materias);
        }
        
        else if (op == 2) {
            aprov(confirmados, materias);
        }
    }
    while(op != 3);
    
    
    //saidas
   
    //fim programa
   
   
    return 0;
}


//subrotinas
matricula realizar(aluno todos, disciplina materias) {
    //variaveis
    float i;
    matricula reto;
   
   
    //definidos
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        printf("\nDigite o código da disciplina: \n");
        scanf("%d%*c", &reto.codigdis[i]);
        printf("\nDigite o código do aluno: \n");
        scanf("%d%*c", &reto.codigal[i]);
    }
    
    //saida
    return reto;
    
    //fim sub
   
}


matricula final(matricula confirmados) {
    //variaveis
    float i;
    matricula reto;
   
   
    //definidos
    reto = confirmados;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        printf("\n\tAluno #%d \tDisciplina #%d\n", confirmados.codigal[i], confirmados.codigdis[i]);
        
        printf("\nDigite as faltas do aluno: \n");
        scanf("%d%*c", &reto.faltas[i]);
        printf("\nDigite a nota final do aluno: \n");
        scanf("%f%*c", &reto.notafim[i]);
    }
    
    //saida
    return reto;
    
    //fim sub
   
}


void consulta(matricula confirmados, disciplina materias) {
    //variaveis
    float i, j, aux, qnt, carga;
   
   
    //definidos
    
    //inicio sub
    printf("\nReprovados: \n");
    for (j = 0; j < disci; j++) {
        carga = (materias.carga[j] * 0.25);
        
        for (i = 0; i < tam; i++) {
            if (materias.codigdis[i] == confirmados.codigdis[i]) {
                if (confirmados.notafim[i] < 7 || confirmados.faltas[i] > carga) {
                    printf("\n\tDisciplina #%d \nAluno #%d \nFaltas %d \nNota final: %f\n", confirmados.codigdis[i], confirmados.codigal[i], confirmados.faltas[i], confirmados.notafim[i]);
                }
            }
        }
    }
    //saida
    
    //fim sub
}


void aprov(matricula confirmados, disciplina materias) {
    //variaveis
    float i, j, aux, carga;
    int qnt;
   
   
    //definidos
    
    //inicio sub
    printf("\nDigite o código do aluno: \n");
    scanf("%d%*c", &aux);
    for (j = 0; j < disci; j++) {
        carga = (materias.carga[j] * 0.25);
        
        for (i = 0; i < tam; i++) {
            if (confirmados.codigal[i] == aux) {
                printf("\nO aluno está matriculado na disciplina #%d \nFaltas: %d \nNota final: %0.2f \n", confirmados.codigdis[i], confirmados.faltas[i], confirmados.notafim[i]);

                if (confirmados.faltas[i] < carga && confirmados.notafim[i] >= 7) {
                    printf("\nAprovado! \n");
                }
                
                else {
                    printf("\nReprovado! \n");
                }
            }
        }
    }
    //saida
    
    //fim sub
}