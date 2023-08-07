#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 4
#define tam2 4
    

    //variaveis
    int i, j, mat1[tam1] [tam2], linha[tam1], coluna[tam2], diagpri, diagsec, igual;


    //definidos
    diagpri = 0;
    diagsec = 0;
    igual = 0;
    
    
    //inicio programa
    //preencher matriz 
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("\nDigite o valor da %d° linha %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat1[i] [j]);
        }
    }
    
    //printar matriz
    printf("\nMatriz Base: \n");
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            printf("|  %d  ", mat1[i] [j]);
        }
        printf("\n");
    }
    
    //zerar vetores
    for (i = 0; i < tam1; i++) {
        linha[i] = 0;
    }
    
    for (i = 0; i < tam2; i++) {
        coluna[i] = 0;
    }
    
    
    //somar as coisas
    //somar linhas
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            linha[i] = linha[i] + mat1[i] [j];
        }
    }
    
    //somar colunas
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            coluna[i] = coluna[i] + mat1[j] [i];
        }
    }
    
    //somar diagonal principal
    for (i = 0; i < tam1; i++) {
        diagpri = diagpri + mat1[i] [i];
    }
    
    //redefinir j para diag secundaria
    j = 0;
    
    //somar diagonal secundária
    for (i = tam1 - 1; i >= 0; i--) {
        diagsec = diagsec + mat1[i] [j];
        j++;
    }
    
    //verificar se é quadrado mágico
    for (i = 0; i < tam1; i++) {
        if (diagsec == diagpri && diagpri == linha[i] && diagpri == coluna[i]) {
            igual++;
        }
    }
    
    //saida
    if (igual == tam1) {
        printf("\nA matriz é um quadrado mágico!!! \n");
    }
    
    else {
        printf("\nA matriz não é um quadrado mágico! \n");
    }
    
    //saida
    
    
    //fim programa


    return 0;
}