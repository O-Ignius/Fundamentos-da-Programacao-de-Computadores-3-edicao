#include <stdio.h>
#include <stdlib.h>

int main() {
    //variáveis
    float idade;
   
    // coleta de dados
    printf("Verificação de maioridade: \n\n");
    printf("Confirme sua idade digitando-a: \n");
    scanf("%f", &idade);
   
   
    // inicio if-else
    if (idade >= 18) {
        printf("Maior de idade, já pode ser preso!");
    }
   
    else if (idade < 18) {
        printf("Menor de idade, ainda um garotinho juvenil!");
    }
   
    else {
        printf("Idade inválida, tente novamente");
    }
    // fim if-else
   
   
    return 0;
}