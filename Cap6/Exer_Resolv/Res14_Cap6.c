#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 2
    
    //variaveis
    float sal[tam], tempo[tam], aumento;
    int i;
    char name[tam];
    
    
    //Inicio do programa
    for (i = 0; i < tam; i++) {
        //coleta de dados
        printf("\nDigite a inicial do %d° funcionário \n", i + 1);
        scanf("%c%*c", &name[i]);
        printf("\nDigite o salário do %d° funcionário \n", i + 1);
        scanf("%f%*c", &sal[i]);
        printf("\nDigite tempo de serviço do %d° funcionário \n", i + 1);
        scanf("%f%*c", &tempo[i]);
    }
    
    //relatorios
    for (i = 0; i < tam; i++) {        
        //relatorio 2
        if (tempo[i] > 5 || sal[i] < 800) {
            if (tempo[i] > 5 && sal[i] < 800) {
                aumento = sal[i] * 0.35;

                printf("\nO funcionário %c terá aumento de R$%0.2f resultando em R$%0.2f", name[i], aumento, sal[i] + aumento);
            }

            else if (tempo[i] > 5) {
                aumento = sal[i] * 0.25;

                printf("\nO funcionário %c terá aumento de R$%0.2f resultando em R$%0.2f", name[i], aumento, sal[i] + aumento);
            }

            else if (sal[i] < 800) {
                aumento = sal[i] * 0.15;

                printf("\nO funcionário %c terá aumento de R$%0.2f resultando em R$%0.2f", name[i], aumento, sal[i] + aumento);
            }
        }
        
        //relatorio 1
        else {
            printf("\nO funcionário %c não terá aumento", name[i]);
        }
    }
    
    //fim do programa

    
    return 0;
}