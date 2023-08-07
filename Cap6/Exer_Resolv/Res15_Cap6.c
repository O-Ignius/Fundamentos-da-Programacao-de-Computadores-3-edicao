#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 10
#define tam2 5
    
    //variaveis
    int i, j, vet1[tam1], vet2[tam2];
    
    
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
    
    //verificar divisores inteiros
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {  
            if (vet1[i] % vet2[j] == 0) {
                printf("\nO número %d na %d° posição do vetor 1 é divisivel por %d na posição %d do vetor 2", vet1[i], i + 1, vet2[j], j + 1);
            }
        }
        
        if (j == (tam2 - 1)) {
                printf("\n");
            }
    }
    
    //fim do programa

    
    return 0;
}