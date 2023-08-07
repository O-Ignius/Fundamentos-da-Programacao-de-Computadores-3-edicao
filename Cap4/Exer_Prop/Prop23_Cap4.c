#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variáveis
    float val_prod, desc, val_fin, pre_prod_qnt;
    int codi, qnt_prod;
   
    // coleta de dados
    printf("Valor do produto: \n\n");
    printf("Digite o código do produto |Entre 1 a 40|: \n");
    scanf("%d", &codi);
    printf("Digite a qunatia comprada do produto: \n");
    scanf("%d", &qnt_prod);
   
    // inicio if-else
    if (codi >= 1 && codi <= 10) {
        // operações
        val_prod = 10;
        pre_prod_qnt = val_prod * qnt_prod;
        
        
        if (pre_prod_qnt <= 250) {
            desc = pre_prod_qnt * 0.05;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else if (pre_prod_qnt > 250 && pre_prod_qnt <= 500) {
            desc = pre_prod_qnt * 0.1;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else {
            desc = pre_prod_qnt * 0.15;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        } 
    }
    
    else if (codi >= 11 && codi <= 20) {
        // operações
        val_prod = 15;
        pre_prod_qnt = val_prod * qnt_prod;
        
        
        if (pre_prod_qnt <= 250) {
            desc = pre_prod_qnt * 0.05;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else if (pre_prod_qnt > 250 && pre_prod_qnt <= 500) {
            desc = pre_prod_qnt * 0.1;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else {
            desc = pre_prod_qnt * 0.15;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        } 
    }
    
    else if (codi >= 21 && codi <= 30) {
        // operações
        val_prod = 20;
        pre_prod_qnt = val_prod * qnt_prod;
        
        
        if (pre_prod_qnt <= 250) {
            desc = pre_prod_qnt * 0.05;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else if (pre_prod_qnt > 250 && pre_prod_qnt <= 500) {
            desc = pre_prod_qnt * 0.1;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else {
            desc = pre_prod_qnt * 0.15;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        } 
    }
    
    else if (codi >= 31 && codi <= 40) {
        // operações
        val_prod = 30;
        pre_prod_qnt = val_prod * qnt_prod;
        
        
        if (pre_prod_qnt <= 250) {
            desc = pre_prod_qnt * 0.05;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else if (pre_prod_qnt > 250 && pre_prod_qnt <= 500) {
            desc = pre_prod_qnt * 0.1;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        }
        
        else {
            desc = pre_prod_qnt * 0.15;
            val_fin = pre_prod_qnt - desc;
            
            printf("Comprando %d unidades do produto a R$%0.2f com código igual a %d tem-se: \nPreço total bruto igual a R$%0.2f \nDesconto de R$%0.2f \nValor final igual a R$%0.2f", qnt_prod, val_prod, codi, pre_prod_qnt, desc, val_fin);
        } 
    }
        
    
    else {
        printf("Verifique os números digitados!");
    }
    // fim if-else
   
   
    return 0;
}