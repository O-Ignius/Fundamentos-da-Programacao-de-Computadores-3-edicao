#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float pessoas, porcen_prim, porcen_quin;
    int i, idade, prim, segu, terc, quar, quin;
    
    //definidos
    pessoas = 0;
    prim = 0;
    segu = 0;
    terc = 0;
    quar = 0;
    quin = 0;
    
    for (i = 0; i < 8; i++) {
        //coleta de dados
        printf("Digite a idade da pessoa: \n");
        scanf("%d", &idade);
        
        if (idade <= 15) {
            prim++;
        }
        
        else if (idade >= 16 && idade <= 30) {
            segu++;
        }
        
        else if (idade >= 31 && idade <= 45) {
            terc++;
        }
        
        else if (idade >= 46 && idade <= 60) {
            quar++;
        }
        
        else if (idade > 60) {
            quin++;
        }
        
        //quantia de pessoas
        pessoas++;
        
    }
    
    //operações
    porcen_prim = (prim / pessoas) * 100;
    porcen_quin = (quin / pessoas) * 100;
   
    //saida
    printf("\nA quantia de pessoas em cada faixa etária: \n1° = %d \n2° = %d \n3° = %d \n4° = %d \n5° = %d \n", prim, segu, terc, quar, quin);
    printf("A porcentagem de pessoas na primeira faixa étaria é de %0.2f%% \n", porcen_prim);
    printf("A porcentagem de pessoas na ultima faixa étaria é de %0.2f%% \n", porcen_quin);
    
    
    return 0;
}