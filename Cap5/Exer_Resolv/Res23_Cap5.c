#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    // variáveis
    float sal_min, val_kw, qnt_kw, val_brut, val_tot, lucro_empres;
    int tip, consu, consu_500;
    
    //definidos
    consu_500 = 0;
    lucro_empres = 0;

    // o que faz:
    printf("Gasto elétrico: \n\n");
    printf("Digite o valor do salário minimo: \n");
    scanf("%f", &sal_min);


    //operações
    val_kw = sal_min / 8;


    // repetição
    do {
        //coleta de dados
        printf("Digite a quantia de kW gastos \n");
        scanf("%f", &qnt_kw);
        
        //finalizar
        if (qnt_kw == 0) {
            continue;
        }
        
        printf("Digite o tipo de consumidor: \n1: Residencial \n2: Comercial \n3: Industrial \n");
        scanf("%d", &consu);
        
        
        //operações
        val_brut = qnt_kw * val_kw;
        
        // tipo de consumidor
        if (consu == 1) {
            val_tot = val_brut + (val_brut * 0.05);
        }
        
        else if (consu == 2) {
            val_tot = val_brut + (val_brut * 0.1);
        }
        
        else if (consu == 3) {
            val_tot = val_brut + (val_brut * 0.15);
        }
        
        // quantia de pessoas que paga entre 500 e 1000
        if (val_tot > 500 && val_tot < 1000) {
            consu_500++;
        }
        
        // lucro da empresa
        lucro_empres = lucro_empres + val_tot;
        
        //valor pago pelo consumidor
        printf("\nO valor pago pelo consumidor é de R$%0.2f \n", val_tot);
    }
    while (qnt_kw != 0);

    //operações


    // saida
    printf("\nO valor de cada kW é de R$%0.2f\n", val_kw);
    printf("O faturamento total da empresa é de R$%0.2f \n", lucro_empres);
    printf("A quantia de consumidores que paga entre %d \n", consu_500);
    
    return 0;
}