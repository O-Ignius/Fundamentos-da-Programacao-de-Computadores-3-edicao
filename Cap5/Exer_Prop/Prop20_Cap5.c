#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float med_arit, peso[4], med_pond, nota[3];
    int opc, i;
    
    
    do {
        //definidos
        med_arit = 0;
        med_pond = 0;
        peso[3] = 0;
        
        //coleta de dados
        printf("Escolha uma opção: \n1: Média aritmética \n2: Média ponderada \n3: Sair \n");
        scanf("%d%*c", &opc);
        
        //finalizar
        if (opc == 3) {
            continue;
        }
        
        //media aritmetica
        else if (opc == 1) {
            for (i = 0; i < 2; i++) {
                //coleta de dados
                printf("\nDigite a nota: \n");
                scanf("%f%*c", &nota[i]);
                
                //operações
                med_arit = med_arit + nota[i];
            }
            
            //saida
            printf("\nA média aritmética das 2 notas é de %0.2f\n\n", med_arit / i);
        }
        
        //media ponderada
        else if (opc == 2) {
            for (i = 0; i < 3; i++) {
                //coleta de dados
                printf("\nDigite a nota: \n");
                scanf("%f%*c", &nota[2]);
                printf("Digite o peso da nota: \n");
                scanf("%f%*c", &peso[i]);
                
                //operacoes
                med_pond = med_pond + (nota[2] * peso[i]);
                peso[3] = peso[3] + peso[i];
            }
            //operacoes
            med_pond = med_pond / peso[3];
            
            //saida
            printf("\nA média ponderada das 3 notas é de %0.2f\n\n", med_pond);
        }
        
        else {
            printf("\nOpção inválida, tente novamente! \n");
        }
    }
    while (opc != 3);
    
    
    return 0;
}