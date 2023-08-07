#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float preco_in, impos, val_transp, seguro, tot_impos, preco_fin;
    int pais;
    char transp, perigo;
    
    //definidos
    seguro = 0;
    tot_impos = 0;
    
   
    do {
        //coleta de variaveis
        printf("Digite o valor do produto: \n");
        scanf("%f%*c", &preco_in);
        
        //finalizar
        if (preco_in <= 0) {
            continue;
        }
        
        printf("\nEscolha o país de origem: \n1: Estados Unidos   \n2: México   \n3: Outros \n");
        scanf("%d%*c", &pais);
        printf("\nQual o meio de transporte?    \nT: Terrestre    \nF: Fluvial  \nA: Aéreo \n");
        scanf("%c%*c", &transp);
        printf("\nA carga é perigosa?   S: Sim  N: Não \n");
        scanf("%c%*c", &perigo);
        
        // calcular imposto
        if (preco_in <= 100) {
            impos = preco_in * 0.05;
        }
        
        else if (preco_in > 100) {
            impos = preco_in * 0.1;
        }
        
        //Valor transporte
        // carga perigosa
        if (perigo == 's' || perigo == 'S') {
            // pais de origem
            if (pais == 1) {
                //operações
                val_transp = 50;
                
                // caso seja aéreo
                if (transp == 'A' || transp == 'a') {
                    seguro = preco_in / 2;
                }
            }
            
            else if (pais == 2) {
                //operações
                val_transp = 21;
                seguro = preco_in / 2;
            }
            
            else if (pais == 3) {
                //operações
                val_transp = 24;
                
                // caso seja aéreo
                if (transp == 'A' || transp == 'a') {
                    seguro = preco_in / 2;
                }
            }
        }
        
        //carga nao perigosa
        else if (perigo == 'n' || perigo == 'N') {
            // pais de origem
            if (pais == 1) {
                //operações
                val_transp = 12;
                
                // caso seja aéreo
                if (transp == 'A' || transp == 'a') {
                    seguro = preco_in / 2;
                }
            }
            
            else if (pais == 2) {
                //operações
                val_transp = 21;
                seguro = preco_in / 2;
            }
            
            else if (pais == 3) {
                //operações
                val_transp = 60;
                
                // caso seja aéreo
                if (transp == 'A' || transp == 'a') {
                    seguro = preco_in / 2;
                }
            }
        }
        
        //operações
        tot_impos = tot_impos + impos;
        preco_fin = preco_in + seguro + val_transp;
        
        //saida
        printf("\nO valor final do produto foi de R$%0.2f \nSendo esses: \nSeguro = R$%0.2f \nTransporte = R$%0.2f \nImpostos = R$%0.2f \n", preco_fin, seguro, val_transp, impos);
        
        
    }
    while (preco_in > 0);
   
    //saida
    printf("O valor total dos impostos foi de R$%0.2f", tot_impos);

    return 0;
}