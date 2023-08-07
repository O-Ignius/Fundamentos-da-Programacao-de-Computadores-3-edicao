#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variáveis
    float val_prod, aument, val_fin, impos;
    int refri, categ;
   
    // coleta de dados
    printf("Valor do final produto: \n\n");
    printf("Digite o valor do produto: \n");
    scanf("%f", &val_prod);
   
    // inicio if-else
    // produto menor igual a 25
    if (val_prod <= 25 && val_prod > 0) {
        // coleta de dados
        printf("Qual a categoria do produto? \n1: Limpeza \n2: Alimentação \n3: Vestuário \n");
        scanf("%d", &categ);
        printf("O produto necessita de refrigeração? \n1: Não \n2: Sim   \n");
        scanf("%d", &refri);
        
        // limpeza 1
        if (categ == 1) {
            // operações
            aument = val_prod * 0.05;
            
            // impostos sobre produto que necessita refrigeração
            if (refri == 2) {
                // operações
                impos = val_prod * 0.05;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
            
            else {
                // operações
                impos = val_prod * 0.08;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
        } // fim limpeza 1
        
        // Inicio alimentação 2
        else if (categ == 2) {
            // operações
            aument = val_prod * 0.08;
            impos = val_prod * 0.05;
            val_fin = val_prod + impos + aument;
                
            printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
            // Classificação
            if (val_fin <= 50){
                printf ("Com relação ao preço final do produto, sua classificação é: Barato");
            }
                
            else if (val_fin > 50 && val_fin < 120) {
                printf ("Com relação ao preço final do produto, sua classificação é: Normal");
            }
                
            else {
                printf ("Com relação ao preço final do produto, sua classificação é: Caro");
            }
            // classificação
        } // Fim alimentação 2
        
        // Inicio vestuário 3
        else if (categ == 3) {
            // operações
            aument = val_prod * 0.1;
            
            // impostos sobre produto que necessita refrigeração
            if (refri == 2) {
                // operações
                impos = val_prod * 0.05;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
            
            else {
                // operações
                impos = val_prod * 0.08;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
        }// fim vestuário 3
        
        else {
            printf("Categoria inválida, tente novamente!");
        }
    }// fim produto menor igual a 25
    
    // valor produto maior que 25
    else if (val_prod > 25) {
        // coleta de dados
        printf("Qual a categoria do produto? \n1: Limpeza \n2: Alimentação \n3: Vestuário \n");
        scanf("%d", &categ);
        printf("O produto necessita de refrigeração? \n1: Não \n2: Sim   \n");
        scanf("%d", &refri);
        
        // limpeza 1
        if (categ == 1) {
            // operações
            aument = val_prod * 0.12;
            
            // impostos sobre produto que necessita refrigeração
            if (refri == 2) {
                // operações
                impos = val_prod * 0.05;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
            
            else {
                // operações
                impos = val_prod * 0.08;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
        } // fim limpeza 1
        
        // Inicio alimentação 2
        else if (categ == 2) {
            // operações
            aument = val_prod * 0.15;
            impos = val_prod * 0.05;
            val_fin = val_prod + impos + aument;
                
            printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
            // Classificação
            if (val_fin <= 50){
                printf ("Com relação ao preço final do produto, sua classificação é: Barato");
            }
                
            else if (val_fin > 50 && val_fin < 120) {
                printf ("Com relação ao preço final do produto, sua classificação é: Normal");
            }
                
            else {
                printf ("Com relação ao preço final do produto, sua classificação é: Caro");
            }
            // classificação
        } // Fim alimentação 2
        
        // Inicio vestuário 3
        else if (categ == 3) {
            // operações
            aument = val_prod * 0.18;
            
            // impostos sobre produto que necessita refrigeração
            if (refri == 2) {
                // operações
                impos = val_prod * 0.05;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
            
            else {
                // operações
                impos = val_prod * 0.08;
                val_fin = val_prod + impos + aument;
                
                printf("Um produto com valor inicial de R$%0.2f tem acréscimo de preço igual a R$%0.2f mais impostos de R$%0.2f, resultando em um valor final de R$%0.2f \n", val_prod, aument, impos, val_fin);
                
                // Classificação
                if (val_fin <= 50){
                    printf ("Com relação ao preço final do produto, sua classificação é: Barato");
                }
                
                else if (val_fin > 50 && val_fin < 120) {
                    printf ("Com relação ao preço final do produto, sua classificação é: Normal");
                }
                
                else {
                    printf ("Com relação ao preço final do produto, sua classificação é: Caro");
                }
                // classificação
            }
        }// fim vestuário 3
        
        else {
            printf("Categoria inválida, tente novamente!");
        }
    }// fim produto mais que 25 
    
    else {
        printf("Verifique o preço digitado!");
    }
    // fim if-else
   
   
    return 0;
}