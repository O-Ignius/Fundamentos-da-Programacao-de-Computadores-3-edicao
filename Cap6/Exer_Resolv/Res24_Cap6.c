#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 8

    //variaveis
    int i, j, A[tam], rep[tam], set, val, aux;


    //definidos
    val = 0;
    set = 0;
    aux = 0;
    

    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor\n", i + 1);
        scanf("%d%*c", &A[i]);
    }
    
    for (i = 0; i < tam; i++) {
        rep[i] = 0;
    }
    
    for (i = 0; i < tam; i++) {
        val = 0;
        set = 0;
        
        for (j = i; j < tam; j++) {
            if (A[j] == A[i] && rep[aux] != A[i]) {
                val++;
                
                if (rep[aux - 1] != A[i]) {
                    rep[aux] = A[i];
                    
                    //aumentar valor auxiliar
                    aux++;
                    set++;
                }
            }
        }
        
        
                    
        for (j = 0; j < aux; j++) {
            if (val > 1) {
                if (set == j + 1) {
                    printf("\nO número %d é repetido %d vezes \n", rep[aux - 1], val);
                    val = 0;
                }
            }
        }
    }
    
    
    //fim programa


    return 0;
}