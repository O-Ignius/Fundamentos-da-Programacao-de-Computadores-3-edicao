#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float val_prod, custo_esto, impos, val_fin, med_ad, M_fim, m_fim, impos_tot;
    char refri, categ;
    int i, barato, normal, caro;
    
    //definidos
    barato = 0;
    normal = 0;
    caro = 0;
    med_ad = 0;
    M_fim = 0;
    m_fim = 1000;
    impos_tot = 0;

    // o que faz:
    printf("Divisão de produtos \n\n");
    
    
    // repetição
    for (i = 1; i <= 1; i++) {
        // coleta de dados
        printf("Digite o preço do produto: \n");
        scanf("%f%*c", &val_prod);
        printf("O produto precisa de refrigeração? \nS: Sim \nN: Não \n");
        scanf("%c%*c", &refri);
        printf("Qual categoria do produto? \nA: Alimentos \nL: Limpeza \nV: Vestuário \n");
        scanf("%c%*c", &categ);
        
        // valor até 20
        if (val_prod <= 20) {
            
            //alimentação
            if  (categ == 'A' || categ == 'a') {
                // operações
                custo_esto = 2;
                impos = val_prod * 0.04;
                val_fin = custo_esto + impos + val_prod;
            }
            
            //Limpeza
            else if  (categ == 'L' || categ == 'l') {
                // nao precisa de refrigeração
                if (refri == 'n' || refri == 'N') {
                    impos = val_prod * 0.02;
                }
                
                // precisa de refrigeração
                else if (refri == 's' || refri == 'S') {
                    impos = val_prod * 0.04;
                }
                
                // operações
                custo_esto = 3;
                val_fin = custo_esto + impos + val_prod;
            }
            
            //Vestuário
            else if  (categ == 'V' || categ == 'v') {
                // nao precisa de refrigeração
                if (refri == 'n' || refri == 'N') {
                    impos = val_prod * 0.02;
                }
                
                // precisa de refrigeração
                else if (refri == 's' || refri == 'S') {
                    impos = val_prod * 0.04;
                }
                
                // operações
                custo_esto = 4;
                val_fin = custo_esto + impos + val_prod;
            }
            
            //classificação
            if (val_fin <= 20) {
                barato++;
            }
                
            else if (val_fin > 20 && val_fin <= 100) {
                normal++;
            }
                
            else {
                caro++;
            }
            
        }
        
        // valor de 20 até 50 (incluso)
        else if (val_prod > 20 && val_prod <= 50) {
            
            //não precisa de refrigeração
            if (refri == 'n' || refri == 'N') {
                // se for alimento
                if (categ == 'a' || categ == 'A') {
                    impos = val_prod * 0.04;
                }
                
                // se nao for alimento
                else {
                    impos = val_prod * 0.02;
                }
                
                // operações
                custo_esto = 0;
                val_fin = custo_esto + impos + val_prod;
            }
            
            //precisa de refrigeração
            else if (refri == 's' || refri == 'S') {
                // operações
                custo_esto = 6;
                impos = val_prod * 0.04;
                val_fin = custo_esto + impos + val_prod;
            }
            
            //classificação
            if (val_fin <= 20) {
                barato++;
            }
                
            else if (val_fin > 20 && val_fin <= 100) {
                normal++;
            }
                
            else {
                caro++;
            }
            
        }
        
        // maior que 50
        else if (val_prod > 50) {
            
            //não precisa de refrigeração
            if (refri == 'n' || refri == 'N') {
                //alimentação
                if  (categ == 'A' || categ == 'a') {
                    // operações
                    custo_esto = 0;
                    impos = val_prod * 0.04;
                    val_fin = custo_esto + impos + val_prod;
                }

                //Limpeza
                else if  (categ == 'L' || categ == 'l') {
                    // operações
                    custo_esto = 1;
                    impos = val_prod * 0.02;
                    val_fin = custo_esto + impos + val_prod;

                }

                //Vestuário
                else if  (categ == 'V' || categ == 'v') {  
                    // operações
                    custo_esto = 0;
                    impos = val_prod * 0.02;
                    val_fin = custo_esto + impos + val_prod;
                }
            }
            
            //precisa de refrigeração
            else if (refri == 's' || refri == 'S') {
                //alimentação
                if  (categ == 'A' || categ == 'a') {
                    // operações
                    custo_esto = 5;
                    impos = val_prod * 0.04;
                    val_fin = custo_esto + impos + val_prod;
                }

                //Limpeza
                else if  (categ == 'L' || categ == 'l') {
                    // operações
                    custo_esto = 2;
                    impos = val_prod * 0.04;
                    val_fin = custo_esto + impos + val_prod;

                }

                //Vestuário
                else if  (categ == 'V' || categ == 'v') {  
                    // operações
                    custo_esto = 4;
                    impos = val_prod * 0.04;
                    val_fin = custo_esto + impos + val_prod;
                }
            }
            
            //classificação
            if (val_fin <= 20) {
                barato++;
            }
                
            else if (val_fin > 20 && val_fin <= 100) {
                normal++;
            }
                
            else {
                caro++;
            }
            
        }
        
        //maior e menor preços
        if (M_fim <= val_fin) {
            M_fim = val_fin;
        }
        
        if (m_fim >= val_fin) {
            m_fim = val_fin;
        }
        
        // operações
        med_ad = med_ad + (impos + custo_esto);
        impos_tot = impos_tot + impos;
        
        // saida
        printf("\n O produto custa um total de R$%0.2f, sendo R$%0.2f de impostos sobre o valor base e R$%0.2f pela estocagem \n", val_fin, impos, custo_esto);
    }
    
    //operações
    med_ad = med_ad / (i - 1);
    
    // saida
    printf("\nA média dos adicionais é de R$%0.2f \n", med_ad);
    printf("O maior valor final é de R$%0.2f \nO menor valor final é de R$%0.2f \n", M_fim, m_fim);
    printf("O total de impostos é de R$%0.2f \n", impos_tot);
    printf("%d produtos são baratos \n%d produtos são normais \n%d produtos são caros \n", barato, normal, caro);
    
    
    return 0;
}