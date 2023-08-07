//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//subrotina que coleta e verifica se o numero é positivo ou não
int soma (float num1, float num2) {
    //variaveis
    int i, sum, intei;
    
    //definidos
    sum = 0;
    intei = num2;
    
    //calculo
    //caso o segundo não seja um inteiro
    if (num2 - intei > 0) {
        for (i = num1 + 1; i <= num2; i++) {
            sum += i;
        }
    }
    
    //caso sejas
    else {
        for (i = num1 + 1; i <= num2 - 1; i++) {
            sum += i;
        }
    }
    
    //saida
    printf("\nA soma dos inteiros entre o intervalo (%0.2f , %0.2f) = %d \n", num1, num2, sum);
    
    return (sum);
}


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variáveis
    float num1, num2, resultado;
    
    
    //inicio programa
    //coleta de dados
    do {
        printf("\nDigite o parâmetro para o inicio do intervalo: \n");
        scanf("%f%*c", &num1);

        printf("\nDigite o parâmetro para o fim do intervalo: \n");
        scanf("%f%*c", &num2);
        
        if (num1 < 0 || num2 < 0) {
            printf("\nOs números precisam ser positivos!! \n");
        }
    }
    while ( ! (num1 >= 0) || !(num2 >= 0));
    
    resultado = soma(num1, num2);
    //fim do programa
    
    return 0;
}