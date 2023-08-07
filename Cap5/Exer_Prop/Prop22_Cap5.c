#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float altura[2], velhos;
    int idade;
    
    //definidos
    velhos = 0;
    altura[1] = 0;
    
    
    do {
        
        //coleta de dados
        printf("Digite a idade: \n");
        scanf("%d%*c", &idade);
        
        //finalizar
        if (idade <= 0) {
            continue;
        }
        
        printf("Digite a altura em metros: \n");
        scanf("%f%*c", &altura[0]);
        
        if (idade > 50) {
            altura[1] = altura[1] + altura[0];
            velhos++;
        }
        
        
    }
    while (idade > 0);
    
    //operações
    altura[1] = altura[1] / velhos;
    
    //saida
    printf("\nA média da altura das pessoas com mais de 50 anos é de %0.2f metros \n", altura[1]);
    
    return 0;
}