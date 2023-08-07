#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float maior, menor, soma, val_par, qnt_num;
    int par, impar, num;
    
    //definidos
    soma = 0;
    par = 0;
    impar = 0;
    maior = 0;
    menor = 0;
    qnt_num = 0;
    val_par = 0;
    

    // o que faz:
    printf("Varios números: \n\n");
    


    //operações



    // repetição
    do {
        // coleta de dados
        printf("\nDigite o número: \n");
        scanf("%d%*c", &num);
        
        //cancelar operações
        if (num == 30000) {
            continue;
        }
        
        // soma dos digitados
        soma = soma + num;
        
        
        //maior e menor
        if (maior <= num) {
            maior = num;
        }
        
        else if (menor == 0) {
            menor = num;
        }
        
        else if (menor >= num) {
            menor = num;
        }
        
        //verificar se é par ou não
        if (num % 2 == 0) {
            val_par = val_par + num;
            
            par++;
        }
        
        else if (num % 2 != 0) {
            impar++;
        }
        
        
        //quantia de números
        qnt_num++;
    }
    while (num != 30000);

    //operações
    impar = 

    // saida
    printf("\nA soma dos números digitados foi de: %0.2f", soma);
    printf("\nA quantia de números digitados foi: %0.0f", qnt_num);
    printf("\nA média dos números digitados foi de: %0.2f", soma / qnt_num);
    printf("\nO maior número digitado foi: %0.0f \nO menor número digitado foi: %0.0f", maior, menor);
    printf("\nA média dos números pares digitados foi de: %0.2f", val_par / par);
    printf("\nA porcentagem de ímpares é de: %0.2f", impar / qnt_num);
    
    return 0;
}