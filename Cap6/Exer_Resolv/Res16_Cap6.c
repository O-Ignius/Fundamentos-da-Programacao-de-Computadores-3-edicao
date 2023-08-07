#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 10
#define tam2 5
    
    //variaveis
    int i, j, vet1[tam1], vet2[tam2], par[tam1], impar[tam1], op, aux1, aux2;
    
    //definidos
    aux1 = 0;
    aux2 = 0;
    
    
    
    //Inicio do programa
    for (i = 0; i < tam1; i++) {
        //coleta de dados
        printf("\nDigite o número do vetor 1 na %d° posição \n", i + 1);
        scanf("%d%*c", &vet1[i]);
    }
    
    for (i = 0; i < tam2; i++) {
        //coleta de dados
        printf("\nDigite o número do vetor 2 na %d° posição \n", i + 1);
        scanf("%d%*c", &vet2[i]);
    }
    
    //armazenar valores par / impar
    for (i = 0; i < tam1; i++) {
        op = vet1[i];
        
        // somar vetores
        for (j = 0; j < tam2; j++) {
            op = op + vet2[j];
        }
        
        //verificar se o valor é par
        if (op % 2 == 0) {
            par[aux1] = op;
            aux1++;
        }
        
        // verificar se o valor é impar
        else {
            impar[aux2] = op;
            aux2++;
        }
    }
    
    //saida
    //pares
    printf("\nVetor Par: \n");
    for (i = 0; i < tam1; i++) {
        printf("|  %d  ", par[i]);
    }
    
    //impares
    printf("\nVetor Impar: \n");
    for (i = 0; i < tam1; i++) {
        printf("|  %d  ", impar[i]);
    }
    
    //fim do programa

    
    return 0;
}