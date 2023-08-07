#include <stdio.h>
#include <stdlib.h>

int main() {
    //variáveis
    float senha;
   
    // coleta de dados
    printf("Login: \n\n");
    printf("Digite a senha de login: \n");
    scanf("%f", &senha);
   
   
    // inicio if-else
    if (senha == 4531) {
        printf("Login bem sucedido!");
    }
   
    else if (senha == 1727) {
        printf("Senha igual a do PEDR1NH0GamEPl4ys, favor mudar!");
    }
   
    else {
        printf("Senha inválida, tente novamente!");
    }
    // fim if-else
   
   
    return 0;
}