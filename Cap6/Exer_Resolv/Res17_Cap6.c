#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 6
    
    //variaveis
    int i, vet[tam], op = 0, impar = 0;
    
    //definidos
    
    
    
    //Inicio do programa
    for (i = 0; i < tam; i++) {
        //coleta de dados
        printf("\nDigite o número do vetor 1 na %d° posição \n", i + 1);
        scanf("%d%*c", &vet[i]);
    }
    
    //pares
    printf("\nPares: \n");
    for (i = 0; i < tam; i++) {
        //pares
        if (vet[i] % 2 == 0) {
            //saida
            printf("|  %d  ", vet[i]);
            
            
            if (op == 0) {
                op = vet[i];
            }
            
            else {
                op = op + vet[i];
            }
        }
    }
    
    //impares
    printf("\nImpares: \n");
    for (i = 0; i < tam; i++) {
        //impares
        if (vet[i] % 2 != 0) {
            //saida
            printf("|  %d  ", vet[i]);
            
            
            impar++;
        }
    }
    
    //saida
    printf("\n\nA soma dos números pares é de %d\n", op);
    printf("\nA quantia de impares é de %d\n", impar);
    //fim do programa

    
    return 0;
}