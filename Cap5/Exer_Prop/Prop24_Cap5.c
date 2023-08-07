#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    int val, men, mai, aux;
    
    //definidos
    mai = 1;
    aux = 0;
    
    
    do {
        //coleta de dados
        printf("\nDigite um número inteiro maior que 0: \n");
        scanf("%d%*c", &val);
        
        //finalizar
        if (val == 0) {
            continue;
        }
        
        else if (val > 0) {
            //maior valor
            if (mai <= val) {
                mai = val;
            }
            
            //menor valor
            if (aux == 0) {
                men = val;
            }
            
            else if (men >= val){
                men = val;
            }
        }
        
        else {
            printf("Número negativo é invalido, tente denovo com um número válido");
        }
        //aumentar valor auxiliar
        aux++;
        
    }
    while (val != 0);
    
    printf("\nO maior valor foi: %d \nO menor valor foi: %d \n", mai, men);
    
    
    return 0;
}