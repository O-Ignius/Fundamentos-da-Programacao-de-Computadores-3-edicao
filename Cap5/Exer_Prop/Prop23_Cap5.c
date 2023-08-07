#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float sal, meses;
    int op;
    
    //definidos
    
    
    do {
        //coleta de dados
        printf("\nEscolha a opção desejada: \n1: Novo salário \n2: Férias \n3: Décimo terceiro \n4: Encerrar \n");
        scanf("%d%*c", &op);
        
        //finalizar
        if (op == 4) {
            continue;
        }
        
        // Novo salário
        else if (op == 1) {
            printf("\nDigite o salário: \n");
            scanf("%f%*c", &sal);
            
            //regra de aumento salarial
            if (sal <= 210) {
                sal = sal + (sal * 0.15);
            }
            
            else if (sal > 210 && sal <= 600) {
                sal = sal + (sal * 0.1);
            }
            
            if (sal > 600) {
                sal = sal + (sal * 0.05);
            }
            
            //saida
            printf("\nO salário final é de R$%0.2f\n", sal);
        }
        
        //ferias
        else if (op == 2) {
            //coleta de dados
            printf("\nDigite o salário: \n");
            scanf("%f%*c", &sal);
            
            //operações
            sal = sal + (sal / 3);
            
            //saida
            printf("\nO valor das férias é de R$%0.2f\n", sal);
        }
        
        //Décimo terceiro
        else if (op == 3) {
            //coleta de dados
            printf("\nDigite o salário: \n");
            scanf("%f%*c", &sal);
            printf("Digite o número de meses de trabalho |max 12 meses|: \n");
            scanf("%f%*c", &meses);
            
            //operações
            sal = (sal * meses) / 12;
            
            //saida
            printf("\nO valor do décimo terceiro é de R$%0.2f \n", sal);
        }
        
        else {
            printf("\nOpção inválida, tente denovo!\n");
        }
        
        
    }
    while (op != 4);
    
    
    return 0;
}