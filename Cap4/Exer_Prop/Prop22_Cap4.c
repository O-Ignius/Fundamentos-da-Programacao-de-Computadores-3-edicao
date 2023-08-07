#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variáveis
    float peso;
    int idade;
   
    // coleta de dados
    printf("Qual grupo de risco: \n\n");
    printf("Digite a idade: \n");
    scanf("%d", &idade);
   
    // inicio if-else
    // menores de 20
    if (idade < 20 && idade > 0) {
        // Coleta de dados
        printf("Digite o peso: \n");
        scanf("%f", &peso);
        
        if (peso <= 60 && peso > 0) {
            printf("Seu grupo de risco é: 9");
        }
        
        else if (peso > 60 && peso <= 90) {
            printf("Seu grupo de risco é: 8");
        }
        
        else if (peso > 90) {
            printf("Seu grupo de risco é: 7");
        }
        
        else {
            printf("Erro, peso igual ou menor que 0, tente novamente!");
        }
    }
    
    // pessoas entre 19 e 51
    else if (idade >= 20 && idade <= 50) {
        // Coleta de dados
        printf("Digite o peso: \n");
        scanf("%f", &peso);
        
        if (peso <= 60 && peso > 0) {
            printf("Seu grupo de risco é: 6");
        }
        
        else if (peso > 60 && peso <= 90) {
            printf("Seu grupo de risco é: 5");
        }
        
        else if (peso > 90) {
            printf("Seu grupo de risco é: 4");
        }
        
        else {
            printf("Erro, peso igual ou menor que 0, tente novamente!");
        }
    }
    
    // maiores de 50
    else if (idade > 50) {
        // Coleta de dados
        printf("Digite o peso: \n");
        scanf("%f", &peso);
        
        if (peso <= 60 && peso > 0) {
            printf("Seu grupo de risco é: 3");
        }
        
        else if (peso > 60 && peso <= 90) {
            printf("Seu grupo de risco é: 2");
        }
        
        else if (peso > 90) {
            printf("Seu grupo de risco é: 1");
        }
        
        else {
            printf("Erro, peso igual ou menor que 0, tente novamente!");
        }
    }
    
    else {
        printf("Verifique a idade digitada!");
    }
    // fim if-else
   
   
    return 0;
}