#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define lin 4
#define col 3
#define tam 5
    

    //variaveis
    int i, j, vet1[tam], vet2[tam * 2], mat[lin] [col], multi, maior, menor, resul[lin] [col], somapares, qnt;


    //definidos
    somapares = 0;
    qnt = 0;
    
    
    //inicio programa   
    //preencher 1° vetor dos inteiros
    for (i = 0; i < tam; i++) {
        printf("\nDigite o número do %d° índice do 1° vetor: \n", i + 1);
        scanf("%d%*c", &vet1[i]);
    }
    
    //preencher 2° vetor dos inteiros
    for (i = 0; i < tam * 2; i++) {
        printf("\nDigite o número do %d° índice do 2° vetor: \n", i + 1);
        scanf("%d%*c", &vet2[i]);
    }
    
    
    //preencher matriz 
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("\nDigite o número da %d° linha e %d° coluna: \n", i + 1, j + 1);
            scanf("%d%*c", &mat[i] [j]);
        }
    }
    
    //printar 1° vetor dos inteiros
    printf("\nVetor 1: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", vet1[i]);
    }
    
    //printar 2° vetor dos inteiros
    printf("\nVetor 2: \n");
    for (i = 0; i < tam * 2; i++) {
        printf("|  %d  ", vet2[i]);
    }
    
    //printar matriz
    printf("\n\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat[i] [j]);
        }
        printf("\n");
    }
    
    //coletar maior elemento primeiro vetor
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            maior = vet1[i];
        }
        
        else if (maior < vet1[i]) {
            maior = vet1[i];
        }
    }
    
    //coletar menor elemento segundo vetor
    for (i = 0; i < tam * 2; i++) {
        if (i == 0) {
            menor = vet2[i];
        }
        
        else if (menor > vet2[i]) {
            menor = vet2[i];
        }
    }
    
    //maior vezes menor
    multi = maior * menor;
    
    //matriz resultante
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            resul[i] [j] = mat[i] [j] + multi;
        }
    }
    
    //printar matriz resultante
    printf("\nMatriz resultante: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", resul[i] [j]);
        }
        printf("\n");
    }
    
    //soma dos pares da matriz resultante
    for (i = 0; i < lin; i++) {
        somapares = 0;
        for (j = 0; j < col; j++) {
            if (resul[i] [j] % 2 == 0) {
                somapares = somapares + resul[i] [j];
            }
        }
        printf("\nSoma dos pares da %d° linha: %d", i + 1, somapares);
    }
    
    //quantia de elementos entre 1 e 5
    for (i = 0; i < lin; i++) {
        qnt = 0;
        for (j = 0; j < col; j++) {
            if (resul[j] [i] > 1 && resul[j] [i] < 5) {
                qnt++;
            }
        }
        printf("\nQuantia de números entre 1 e 5 na %d° coluna: %d", i + 1, qnt);
    }
    
    //fim programa


    return 0;
}