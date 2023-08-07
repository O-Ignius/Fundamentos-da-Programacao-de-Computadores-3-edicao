#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 24

    //variaveis
    int i, janela[tam], corredor[tam], menu, consulta, ocupado;
    char tipo;


    //definidos
    ocupado = 0;
    

    //inicio programa
    //zerar vetores
    for (i = 0; i < tam; i++) {
        janela[i] = 0;
        corredor[i] = 0;
    }
    
    //opções
    do {
        printf("\nEscolha uma opção: \n1: Vender passagem \n2: Mapa de ocupação do ônibus \n3: Finalizar \n");
        scanf("%d%*c", &menu);
        
        if (menu == 3) {
            continue;
        }
        
        else if (menu == 1) {
            printf("\nQual a preferência de assento: \nC: Corredor \nJ: Janela \n");
            scanf("%c%*c", &tipo);
            printf("\nQual o número da poltrona? \n");
            scanf("%d%*c", &consulta);
            
            //verificar se o onibus está lotado
            for (i = 0; i < tam; i++) {
                if (janela[i] == 1) {
                    ocupado++;
                }
                
                if (corredor[i] == 1) {
                    ocupado++;
                }
            }
            
            //caso não tenha lugar
            if (ocupado == (tam * 2)) {
                printf("\nÔnibus inteiro lotado!! \n");
                continue;
            }
            
            //caso ainda tenha lugar
            else if (ocupado != (tam * 2)) {
                //guardar espaço na janela
                if (tipo == 'j' || tipo == 'J') {
                    if (janela[consulta] == 0) {
                        printf("\nAssento reservado com sucesso!! \n");
                        janela[consulta] = 1;
                    }

                    else {
                        printf("\nAssento já está reservado \n");
                    }
                }

                //guardar espaço no corredor
                else if (tipo == 'c' || tipo == 'C') {
                    if (corredor[consulta] == 0) {
                        printf("\nAssento reservado com sucesso!! \n");
                        corredor[consulta] = 1;
                    }

                    else {
                        printf("\nAssento já está reservado \n");
                    }
                }
            }
        }
        
        else if (menu == 2) {
            for (i = 0; i < tam; i++) {
                //janela
                if (i == 0) {
                    printf("\nJanela:\n\n");
                }
                
                if (janela[i] == 0) {
                    printf("Livre \n");
                }
                
                else if (janela[i] == 1) {
                    printf("Ocupado \n");
                }
            }
            
            for (i = 0; i < tam; i++) {
                //corredor
                if (i == 0) {
                    printf("\nCorredor: \n");
                }
                
                if (corredor[i] == 0) {
                    printf("Livre \n");
                }
                
                else if (corredor[i] == 1) {
                    printf("Ocupado \n");
                }
            }
        }
    }
    while(menu != 3);
    
    //fim programa


    return 0;
}