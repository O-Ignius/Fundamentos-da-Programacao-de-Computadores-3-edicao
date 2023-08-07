#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variáveis
    float idade;
   
    // coleta de dados
    printf("Classificação do nadador com base na idade: \n\n");
    printf("Digite a idade do nadador: \n");
    scanf("%f", &idade);
   
    // inicio if-else
    if (idade >= 5 && idade <= 7) {
        printf("A idade do nadador é %0.2f anos, sendo classificado como Infantil", idade);
    }
   
    else if (idade >= 8 && idade <= 10) {
        printf("A idade do nadador é %0.2f anos, sendo classificado como Juvenil", idade);
    }
   
    else if (idade >= 11 && idade <= 15) {
        printf("A idade do nadador é %0.2f anos, sendo classificado como Adolescente", idade);
    }
   
    else if (idade >= 16 && idade <= 30) {
        printf("A idade do nadador é %0.2f anos, sendo classificado como Adulto", idade);
    }
   
    else if (idade > 30) {
        printf("A idade do nadador é %0.2f anos, sendo classificado como Sênior", idade);
    }
   
    else {
        printf("O nadador tem menos de 5 anos, não sendo colocado em nenhuma classificação!");
    }
    // fim if-else
   
   
    return 0;
}