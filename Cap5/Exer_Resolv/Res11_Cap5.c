#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    int n, def, i;
    
    //definidos
    def = 0;

    // coleta de dados
    printf("Verificar se o número é primo \n\n");
    printf("Digite um número inteiro maior que 1: \n");
    scanf("%d", &n);

    // repetição
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            def++;
        }
    }

    //saída
    if (def == 2) {
        printf("\nO número %d é primo", n);
    }
    
    else {
        printf("\nO número %d não é primo", n);
    }

    return 0;
}