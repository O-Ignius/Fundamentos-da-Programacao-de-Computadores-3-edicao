#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variáveis
    float peso, altura, imc, peso_id;
    int sexo;
   
    // coleta de dados
    printf("Cálcular IMC: \n\n");
    printf("Digite seu sexo: \n1: Masculino \n2: Feminino \n");
    scanf("%d", &sexo);
   
    // inicio if-else
    if (sexo == 1) {
        // coleta de dados
        printf("Digite o peso |Em KG| \n");
        scanf("%f", &peso);
        printf("Digite a altura |Em Metros| \n");
        scanf("%f", &altura);
       
        // operações
        imc = peso / (pow(altura , 2));
        peso_id = (72.7 * altura) - 58;
       
        printf("Para alguém que pese %0.2fKg e tenha altura igual a %0.2fm seu imc é %0.2f", peso, altura, imc);
        printf("\nO peso ideal segundo o livro seria de %0.2fKg", peso_id);
    }
   
    else if (sexo == 2) {
        // coleta de dados
        printf("Digite o peso |Em KG| \n");
        scanf("%f", &peso);
        printf("Digite a altura |Em Metros| \n");
        scanf("%f", &altura);
       
        // operações
        imc = peso / (pow(altura , 2));
        peso_id = (62.1 * altura) - 44.7;
       
        printf("Para alguém que pese %0.2fKg e tenha altura igual a %0.2fm seu imc é %0.2f", peso, altura, imc);
        printf("\nO peso ideal segundo o livro seria de %0.2fKg", peso_id);
    }
   
    else {
        printf("Entrada inválida, tente denovo!");
    }
    // fim if-else
   
   
    return 0;
}