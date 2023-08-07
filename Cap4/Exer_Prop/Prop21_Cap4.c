#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variáveis
    int codigo;
   
    // coleta de dados
    printf("Procedência do produto: \n\n");
    printf("Digite o código do produto |De 1 a 30|: \n");
    scanf("%d", &codigo);
   
    // inicio if-else
    if (codigo == 1) {
        printf("O produto vem do Sul");
    }
   
    else if (codigo == 2) {
        printf("O produto vem do Norte");
    }
   
    else if (codigo == 3) {
        printf("O produto vem do Leste");
    }
   
    else if (codigo == 4) {
        printf("O produto vem do Oeste");
    }
   
    else if (codigo == 5 || codigo == 6) {
        printf("O produto vem do Nordeste");
    }
    
    else if (codigo >= 7 && codigo <= 9) {
        printf("O produto vem do Sudeste");
    }
    
    else if (codigo >= 10 && codigo <= 20) {
        printf("O produto vem do Centro-Oeste");
    }
    
    else if (codigo >= 21 && codigo <= 30) {
        printf("O produto vem do Sudoeste");
    }
    
    else {
        printf("Verifique o número digitado");
    }
    // fim if-else
   
   
    return 0;
}