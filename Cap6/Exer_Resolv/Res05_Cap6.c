#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 3

    //variaveis
    int i, j, X[tam], Y[tam], U[tam * 2], D[tam * 2], S[tam], P[tam], I[tam], rep, aux;


    //definidos
    aux = 0;
    j = 0;

    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor X \n", i + 1);
        scanf("%d%*c", &X[i]);
    }
    
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor Y \n", i + 1);
        scanf("%d%*c", &Y[i]);
    }
    
    printf("\nVetor X: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", X[i]);
    }
    
    printf("\nVetor Y: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", Y[i]);
    }
    
    
    //zerar alguns vetores
    for (i = 0; i < tam * 2; i++) {
        U[i] = 0;
    }
    
    //inicio uniao
    //primeiros numeros dos vetores será igual ao vetor X
    for (i = 0; i < tam; i++) {
        U[i] = X[i];
    }
    
    //primeira comparação
    for (i = 0; i < tam; i++) {
        rep = 0;
        
        for (j = 0; j < tam * 2; j++) {
            if (U[j] == Y[i]) {
                rep++;
            }
        }
        
        if (rep == 0) {
            U[aux + tam] = Y[i];
            aux++;
        }
    }
    
    //segunda comparação
    for (i = 0; i < tam * 2; i++) {
        for (j = 0; j < tam * 2; j++) {
            if (U[i] == U[j] && i != j) {
                U[j] = 0;
            }
        }
    }
    
    //retirar os 0
    for (i = 0; i < tam * 2; i++) {
        if (U[i] == 0) {
            if (U[i + 1] != 0) {
                if (i == (tam * 2) - 1) {
                    continue;
                }
                
                else {
                    U[i] = U[i + 1];
                    U[i + 1] = 0;
                }
            }
        }
    }
    
    
    printf("\nVetor União: \n");
    for (i = 0; i < tam * 2; i++) {
        printf("|  %d  ", U[i]);
    }//fim uniao
    
    
    //zerar variavel util
    aux = 0;
    
    //Diferença
    for (i = 0; i < tam; i++) {
        rep = 0;
        
        for (j = 0; j < tam; j++) {
            if (X[i] == Y[j]) {
                rep++;
            }
        }
        
        if (rep == 0) {
            D[aux] = X[i];
            aux++;
            D[aux] = Y[i];
            aux++;
        }
    }
    
    //printar vetor diferença
    printf("\nVetor diferença X com relação a Y: \n");
    for (i = 0; i < aux; i++) {
        printf("|  %d  ", D[i]);
        i++;
    }
    printf("\nVetor diferença Y com relação a X: \n");
    for (i = 1; i < aux; i++) {
        printf("|  %d  ", D[i]);
        i++;
    }
    
    
    //Soma de X e Y
    for (i = 0; i < tam; i++) {
        S[i] = X[i] + Y[i];
    }
    
    //saida da soma
    printf("\nVetor Soma: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", S[i]);
    }
    
    
    //Multiplicação X e Y
    for (i = 0; i < tam; i++) {
        P[i] = X[i] * Y[i];
    }
    
    //saida da produto
    printf("\nVetor Produto: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", P[i]);
    }
    
    
    //zerar variavel util
    aux = 0;
    
    //Intersecção
    for (i = 0; i < tam; i++) {
        rep = 0;
        
        for (j = 0; j < tam; j++) {
            if (X[i] == Y[j]) {
                rep++;
            }
        }
        
        if (rep != 0) {
            I[aux] = X[i];
            aux++;
        }
    }
    
    //saida da intersecção
    printf("\nVetor Intersecção: \n");
    for (i = 0; i < aux; i++) {
        printf("|  %d  ", I[i]);
    }
    
    //fim programa


    return 0;
}