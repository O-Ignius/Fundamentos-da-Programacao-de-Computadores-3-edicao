#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    float saldos[tam], dinheiro, total;
    int i, codig[tam], menu, consulta;


    //definidos
    total = 0;
    

    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o número da conta: \n");
        scanf("%d%*c", &codig[i]);
        printf("\nDigite o saldo da conta: \n");
        scanf("%f%*c", &saldos[i]);
    }
    
    //definir i
    i = 0;
    
    do {
        //opção
        printf("\nEscolha uma opção: \n1: Efetuar depósito \n2: Efetuar saque \n3: Consultar ativo bancário \n4: Encerrar \n");
        scanf("%d%*c", &menu);
        
        //finalizar
        if (menu == 4) {
            continue;
        }
        
        //Deposito
        else if (menu == 1) {
            //solicitações
            printf("\nDigite o número da conta: \n");
            scanf("%d%*c", &consulta);
            
            for (i = 0; i < tam; i++) {
                if (consulta == codig[i]) {
                    consulta = i;
                    i = tam - 1;
                }
            }
            
            //caso conta não exista
            if (i != tam) {
                printf("\nConta não consta na base de dados\n");
                //continue;
            }
            
            //valor a ser depositado
            printf("\nDigite o valor a ser depositado em R$: \n");
            scanf("%f%*c", &dinheiro);
            
            saldos[consulta] = saldos[consulta] + dinheiro;
            
            printf("\nNovo saldo da conta: R$%0.2f \n", saldos[consulta]);
        }
        
        //saque
        else if (menu == 2) {
            //solicitações
            printf("\nDigite o número da conta: \n");
            scanf("%d%*c", &consulta);
            
            for (i = 0; i < tam; i++) {
                if (consulta == codig[i]) {
                    consulta = i;
                    i = tam - 1;
                }
            }
            
            //caso conta não exista
            if (i != tam) {
                printf("\nConta não consta na base de dados\n");
                continue;
            }
            
            else {
                //valor a ser retirado
                printf("\nDigite o valor a ser retirado em R$: \n");
                scanf("%f%*c", &dinheiro);
                
                if (saldos[consulta] >= dinheiro) {
                    saldos[consulta] = saldos[consulta] - dinheiro;
                    printf("\nSaldo restante: R$%0.2f\n", saldos[consulta]);
                }
                
                else {
                    printf("\nA quantia a ser sacada é maior que a quantia na conta bancária! \n");
                }
            }
        }
        
        //consultar total ativo
        else if (menu == 3) {
            for (i = 0; i < tam; i++) {
                total = total + saldos[i];
            }
            
            printf("\nO saldo total do somátório de todas as contas bancárias é de R$%0.2f\n", total);
        }
    }
    while(menu != 4);
    

//fim programa


return 0;
}