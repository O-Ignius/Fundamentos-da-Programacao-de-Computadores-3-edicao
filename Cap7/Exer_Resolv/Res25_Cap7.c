#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define prod 5
#define loja 3

    //variaveis
    int i, j, mes1[prod] [loja], mes2[prod] [loja], bimes[prod] [loja], maivend[3], totloj[loja], totprod[prod];


    //definidos
    
    
    //inicio programa
    //receber valores das matrizes
    printf("\nPrimeiro Mês: \n");
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            printf("\nDigite a quantia de vendas do %d° produto na %d° loja: \n", i + 1, j + 1);
            scanf("%d%*c", &mes1[i] [j]);
        }
    }
    
    printf("\nSegundo Mês: \n");
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            printf("\nDigite a quantia de vendas do %d° produto na %d° loja: \n", i + 1, j + 1);
            scanf("%d%*c", &mes2[i] [j]);
        }
    }
    
    //printar matrizes
    //mês 1
    printf("\n1° Mês: \n");
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            printf("|  %d  ", mes1[i] [j]);
        }
        printf("\n");
    }
    
    //mês 2
    printf("\n2° Mês: \n");
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            printf("|  %d  ", mes2[i] [j]);
        }
        printf("\n");
    }
    
    //zerar matriz bimestral
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            bimes[i] [j] = 0;
        }
    }
    
    //zerar vetores
    for (i = 0; i < loja; i++) {
        totloj[i] = 0;
    }
    
    for (i = 0; i < prod; i++) {
        totprod[i] = 0;
    }
    
    
    //venda bimestral
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            bimes[i] [j] += mes1[i] [j] + mes2[i] [j];
        }
    }
    
    //maior venda do bimestes [0] = quantia; [1] = produto; [2] = loja
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            if (i == 0 && j == 0) {
                maivend[0] = bimes[i] [j];
                maivend[1] = i + 1;
                maivend[2] = j + 1;
            }
            
            else if (maivend[0] < bimes[i] [j]) {
                maivend[0] = bimes[i] [j];
                maivend[1] = i + 1;
                maivend[2] = j + 1;
            }
        }
    }
    
    //total vendido de cada loja bimestre
    for (i = 0; i < loja; i++) {
        for (j = 0; j < prod; j++) {
            totloj[i] += bimes[j] [i];
        }
    }
    
    //total de cada produto bimestre
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            totprod[i] += bimes[i] [j];
        }
    }
    
    //printar vendas bimestrais
    printf("\nVendas bimestrais: \n");
    for (i = 0; i < prod; i++) {
        for (j = 0; j < loja; j++) {
            printf("|  %d  ", bimes[i] [j]);
        }
        printf("\n");
    }
    
    //printar maior venda
    //[0] = quantia; [1] = produto; [2] = loja
    printf("\nA maior venda do bimestre foi feita pela %d° loja, vendendo %d exemplares do %d° produto \n", maivend[2], maivend[0], maivend[1]);
    
    //total vendido por loja no bimestre
    printf("\nVendas bimestrais de cada loja: \n");
    for (i = 0; i < loja; i++) {
        printf("|  %d° Loja: %d  ", i + 1, totloj[i]);
    }
    
    //total de determinado produto vendido por bimestre
    printf("\nVendas bimestrais de cada produto: \n");
    for (i = 0; i < prod; i++) {
        printf("|  %d° produto: %d  ", i + 1, totprod[i]);
    }
    
    //fim programa


    return 0;
}