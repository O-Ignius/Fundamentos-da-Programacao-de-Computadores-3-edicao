#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    // Coleta de dados
    int vari;
    float num1, num2, soma, raiz1, raiz2;
    printf("1: Soma de dois números \n2: Raiz quadrada de dois números \n");
    scanf("%d", &vari);
    
    if (vari == 1) {
    // Coleta de dados
    printf("Digite dois números: \n");
    scanf("%f %f", &num1, &num2);
    
    // Operações
    soma = num1 + num2;
    
    printf("A soma de %0.2f mais %0.2f resulta em %0.2f", num1, num2, soma);
    }
    
    else if (vari == 2) {
       // Coleta de dados
       printf("Digite dois números: \n");
       scanf("%f %f", &num1, &num2);
       
       // Operações
       raiz1 = sqrt(num1);
       raiz2 = sqrt(num2);
    
       // Operações if-else
       if (num1 >= 0 && num2 >= 0) {
          printf("R raiz quadrada de %0.2f é %0.2f \nA raiz quadrada de %0.2f é %0.2f", num1, raiz1, num2, raiz2);
       }
       else {
          printf("Não existe raiz quadrada de número negativo dentro do intervalo dos números reais");
       }
    }
    
    else {
       printf("Número inválido, tente novamente!");
    }
    //fim if-else
    
    
    return 0;
}