#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float val, prim_prest, val_tot_praz, val_tot_vis, val_tot;
    int i;
    char trans;
    
    //definidos
    prim_prest = 0;
    val_tot_praz = 0;
    val_tot_vis = 0;
    val_tot = 0;
    
    //o que faz
    printf("Cálculo transação: \n\n");

    
    
    for (i = 0; i < 15; i++) {
        printf("Digite o tipo de transação: V: A vista  P: A prazo \n");
        scanf("%c%*c", &trans);
        printf("Digite o valor da transação: \n");
        scanf("%f%*c", &val);
        
        if (trans == 'v' || trans == 'V') {
            val_tot_vis = val_tot_vis + val;
        }
        
        else if (trans == 'p' || trans == 'P') {
            val_tot_praz = val_tot_praz + val;
            
            prim_prest = prim_prest + (val / 3);
        }
        
        val_tot = val_tot + val;
    }
    
    //saida
    printf("\nO valor total de todas as compras é de R$%0.2f \n", val_tot);
    printf("O valor total das compras a vista é de R$%0.2f \nO valor total das compras a prazo é de R$%0.2f \n", val_tot_vis, val_tot_praz);
    printf("O valor da soma de todas as primeiras parcelas das compras a prazo é de R$%0.2f", prim_prest);
            
    
    return 0;
}