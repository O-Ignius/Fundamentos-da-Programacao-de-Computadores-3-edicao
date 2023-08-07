#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define tam 3
    
    //variaveis
    int i, j;
    char vet1[tam], vet2[tam], aux;

    
    //definidos
    
    //inicio programa
    //preencher vetores
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do 1° vetor\n", i + 1);
        scanf("%c%*c", &vet1[i]);
    }
    
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do 2° vetor\n", i + 1);
        scanf("%c%*c", &vet2[i]);
    }
    
    //saida
    printf("\nVetor 1 antes da troca\n");
    for (i = 0; i < tam; i++) {
        printf("|  %c  ", vet1[i]);
    }
    
    printf("\nVetor 2 antes da troca\n");
    for (i = 0; i < tam; i++) {
        printf("|  %c  ", vet2[i]);
    }
    
    //definir j = tam
    j = tam - 1;
    
    //troca entre vetores
    for (i = 0; i < tam; i++) {
        aux = vet1[i];
        vet1[i] = vet2[j];
        vet2[j] = aux;
        
        j--;
    }
    
    //saida
    printf("\nVetor 1 após troca\n");
    for (i = 0; i < tam; i++) {
        printf("|  %c  ", vet1[i]);
    }
    
    printf("\nVetor 2 após troca\n");
    for (i = 0; i < tam; i++) {
        printf("|  %c  ", vet2[i]);
    }
    
    //fim programa
    


    return 0;
}