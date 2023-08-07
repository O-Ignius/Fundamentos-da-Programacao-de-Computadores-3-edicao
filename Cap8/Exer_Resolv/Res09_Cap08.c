//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 5

//subrotina calculo média
int val (int *mai, int *men) {
    //variaveis
    int i, valor[tam], maior, menor;
    
    //definidos
    
    
    
    //inicio sub
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o %d° Valor: \n", i + 1);
        scanf("%d%*c", &valor[i]);
    }
    
    //verificar maior e menor
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            maior = valor[i];
        }
        
        else if (maior < valor[i]) {
            maior = valor[i];
        }
        
        if (i == 0) {
            menor = valor[i];
        }
        
        else if (menor > valor[i]) {
            menor = valor[i];
        }
    }
    
    *mai = maior;
    *men = menor;
    
    return 0;
    
    //fim sub
}




//principal
int main () {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variaveis
    int men, mai;
    
    
    //definidos
    men = 0;
    mai = 0;
    
    //inicio programa
    //chamar subrotina val
    val(&mai, &men);
    
    printf("\nO menor valor é: %d\n", men);
    printf("\nO maior valor é: %d\n", mai);
    
    //fim programa
    
    
    return 0;
}