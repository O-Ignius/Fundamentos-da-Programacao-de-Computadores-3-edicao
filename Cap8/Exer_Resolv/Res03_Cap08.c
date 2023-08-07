//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//subrotina que coleta e verifica se o numero é positivo ou não
int soma (int a, int b, int c) {
    //variaveis
    int i, sum;
    
    //definidos
    sum = 0;
    
    //calculo
    for (i = b; i <= c; i++) {
        if (i % a == 0) {
            sum += i;
        }
    }
    
    //saida
    printf("\nA soma dos inteiros entre o intervalo (%d , %d) que são divisiveis por %d é igual a: %d \n", b, c, a, sum);
    
    return (sum);
}


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variáveis
    int a, b, c, resultado;
    
    
    //inicio programa
    //coleta de dados
    do {
        printf("\nDigite o número que sera usado como parâmetro para a soma: \n");
        scanf("%d%*c", &a);
        
        printf("\nDigite o parâmetro para o inicio do intervalo: \n");
        scanf("%d%*c", &b);

        printf("\nDigite o parâmetro para o fim do intervalo: \n");
        scanf("%d%*c", &c);
        
        if (a <= 1) {
            printf("\nO parâmetro da soma precisa ser maior que 1 !!\n");
        }
    }
    while ( ! (a > 1));
    
    resultado = soma(a, b, c);
    //fim do programa
    
    return 0;
}