#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10
    
    //variaveis
    int i, vet[tam], aux = 0;
    
    
    //Inicio do programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite um valor inteiro para a %d° posição do vetor\n", i + 1);
        scanf("%d%*c", &vet[i]);
    }
    
    for (i = 0; i < tam; i++) {
        if (vet[i] > 50) {
            printf("\nO número %d na %d° posição do vetor (vet[%d]) é maior que 50\n", vet[i], i + 1, i);
            aux++;
        }
    }
    
    if (aux == 0) {
        printf("\nDentro do vetor dado, não há um número que seja maior que 50\n");
    }
    
    //fim do programa

    
    return 0;
}