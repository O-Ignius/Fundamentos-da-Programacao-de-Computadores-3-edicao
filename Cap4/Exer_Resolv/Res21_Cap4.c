#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float est_ori, peso_kg, carga, preco_carg, peso_ton, impos, val_tot;
   
    // Coleta de dados
    printf("Cálculo carga: \n\n");
    printf("Digite o código da carga: \n");
    scanf("%f", &carga);
    printf("Digite o código do estado de origem da carga: \n");
    scanf("%f", &est_ori);
    printf("Digite o peso da carga |Em ton|: \n");
    scanf("%f", &peso_ton);
    
    // Operações
    peso_kg = peso_ton * 1000;
    
   
    // Inicio if-else
    if (carga >= 10 && carga <= 20 && peso_kg > 0) {
        if (est_ori == 1) {
            preco_carg = peso_kg * 100;
            impos = preco_carg * 0.35;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 2) {
            preco_carg = peso_kg * 100;
            impos = preco_carg * 0.25;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 3) {
            preco_carg = peso_kg * 100;
            impos = preco_carg * 0.15;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 4) {
            preco_carg = peso_kg * 100;
            impos = preco_carg * 0.05;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 5) {
            preco_carg = peso_kg * 100;
            impos = preco_carg * 0;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else {
            printf("código do estado de origem da carga INVÁLIDO, tente denovo!");
        }
    }
    
    else if (carga >= 21 && carga <= 30 && peso_kg > 0) {
        if (est_ori == 1) {
            preco_carg = peso_kg * 250;
            impos = preco_carg * 0.35;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 2) {
            preco_carg = peso_kg * 250;
            impos = preco_carg * 0.25;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 3) {
            preco_carg = peso_kg * 250;
            impos = preco_carg * 0.15;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 4) {
            preco_carg = peso_kg * 250;
            impos = preco_carg * 0.05;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 5) {
            preco_carg = peso_kg * 250;
            impos = preco_carg * 0;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else {
            printf("código do estado de origem da carga INVÁLIDO, tente denovo!");
        }
    }
    
    else if (carga >= 31 && carga <= 40 && peso_kg > 0) {
        if (est_ori == 1) {
            preco_carg = peso_kg * 340;
            impos = preco_carg * 0.35;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 2) {
            preco_carg = peso_kg * 340;
            impos = preco_carg * 0.25;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 3) {
            preco_carg = peso_kg * 340;
            impos = preco_carg * 0.15;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 4) {
            preco_carg = peso_kg * 340;
            impos = preco_carg * 0.05;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else if (est_ori == 5) {
            preco_carg = peso_kg * 340;
            impos = preco_carg * 0;
            val_tot = preco_carg + impos;
            
            printf("Uma carga de %0.2fKg tem: \nValor bruto = R$%0.2f \nValor de imposto = R$%0.2f \nValor total = R$%0.2f", peso_kg, preco_carg, impos, val_tot);
        }
        
        else {
            printf("código do estado de origem da carga INVÁLIDO, tente denovo!");
        }
    }
    
    else {
        printf("Código de estado ou peso INVÁLIDOS, reveja os números digitados e tente novamente!");
    }
    // Fim if-else
   
   
    return 0;
}