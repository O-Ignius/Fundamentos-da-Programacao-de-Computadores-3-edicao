#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 15
#define num 5

    //variaveis
    int vet[tam], vet1[num], vet2[num];
    int i, j, aux1, aux2;


    //definidos
    aux1 = 0;
    aux2 = 0;


    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da %d° posição do vetor: \n", i + 1);
        scanf("%d%*c", &vet[i]);
    }

    //setar valores dos outros vetores como 0
    for (i = 0; i < num; i++) {
        vet1[i] = 0;
        vet2[i] = 0;
    }

    for (i = 0; i < tam; i++) {
        //adicionar valor par ao vetor par
        if (vet[i] % 2 == 0) {
            vet1[aux1] = vet[i];
            aux1++;
        }
        
        else {
            vet2[aux2] = vet[i];
            aux2++;
        }
        
        //verificar se vetor par está cheio
        if (vet1[num - 1] != 0) {
            printf("\nVetor par:\n");
            for (j = 0; j < num; j++) {
                printf("|  %d  ", vet1[j]);
            }
            
            printf("\n\nVetor par cheio, zerando...\n");
            // zerar vetor
            for (j = 0; j < num; j++) {
                vet1[j] = 0;
            }
            
            //zerar auxiliar
            aux1 = 0;
        }
        
        //verificar se vetor impar está cheio
        if (vet2[num - 1] != 0) {
            printf("\nVetor impar:\n");
            for (j = 0; j < num; j++) {
                printf("|  %d  ", vet2[j]);
            }
            
            printf("\n\nVetor impar cheio, zerando...\n");
            // zerar vetor
            for (j = 0; j < num; j++) {
                vet2[j] = 0;
            }
            
            //zerar auxiliar
            aux2 = 0;
        }
    }


//fim programa


return 0;
}