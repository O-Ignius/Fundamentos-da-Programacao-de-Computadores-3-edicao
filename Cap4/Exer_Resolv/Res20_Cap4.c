#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float cod_pai, cod_produ, peso_kg, impos, val_tot, peso_g, preco_tot;
   
    // Coleta de dados
    printf("Produtos: \n\n");
    printf("Digite o código de origem do país: \n");
    scanf("%f", &cod_pai);
    printf("Digite o código do produto: \n");
    scanf("%f", &cod_produ);
    printf("Digite o peso do produto |Em Kg|: \n");
    scanf("%f", &peso_kg);
    
    // Operações
    peso_g = peso_kg * 1000;
    
   
    // Inicio if-else
    if (cod_pai  == 1 && peso_g > 0) {
        if (cod_produ >= 1 && cod_produ <= 4) {
            // Operações
            preco_tot = 10 * peso_g;
            impos = preco_tot * 0;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else if (cod_produ >= 5 && cod_produ <= 7) {
            // Operações
            preco_tot = 25 * peso_g;
            impos = preco_tot * 0;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else if (cod_produ >= 8 && cod_produ <= 10) {
            // Operações
            preco_tot = 35 * peso_g;
            impos = preco_tot * 0;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else {
            printf("Verifique o código de produto digitado!");
        }
    }
    
    else if (cod_pai  == 2 && peso_g > 0) {
        if (cod_produ >= 1 && cod_produ <= 4) {
            // Operações
            preco_tot = 10 * peso_g;
            impos = preco_tot * 0.15;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else if (cod_produ >= 5 && cod_produ <= 7) {
            // Operações
            preco_tot = 25 * peso_g;
            impos = preco_tot * 0.15;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else if (cod_produ >= 8 && cod_produ <= 10) {
            // Operações
            preco_tot = 35 * peso_g;
            impos = preco_tot * 0.15;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else {
            printf("Verifique o código de produto digitado!");
        }
    }
    
    else if (cod_pai  == 3 && peso_g > 0) {
        if (cod_produ >= 1 && cod_produ <= 4) {
            // Operações
            preco_tot = 10 * peso_g;
            impos = preco_tot * 0.25;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else if (cod_produ >= 5 && cod_produ <= 7) {
            // Operações
            preco_tot = 25 * peso_g;
            impos = preco_tot * 0.25;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else if (cod_produ >= 8 && cod_produ <= 10) {
            // Operações
            preco_tot = 35 * peso_g;
            impos = preco_tot * 0.25;
            val_tot = preco_tot + impos;
            
            printf("O produto comprado pesa %0.2fg \nSeu preço bruto é de R$%0.2f \nO valor do imposto cobrado sobre ele é de R$%0.2f \nSeu valor final é de R$%0.2f", peso_g, preco_tot, impos, val_tot);
        }
        
        else {
            printf("Verifique o código de produto digitado!");
        }
    }
    
    else {
        printf("Verifique o código de pais ou peso do produto digitado!");
    }
    // Fim if-else
   
   
    return 0;
}