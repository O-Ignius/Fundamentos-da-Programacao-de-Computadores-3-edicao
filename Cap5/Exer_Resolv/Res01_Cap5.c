#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Definindo lingua
    setlocale (LC_ALL, "portuguese");
    
    //variáveis
    float val_in, aument, val_tot;
    int ano, ano_at;

    //definido
    val_in = 1000;
    aument = val_in * 0.015;
    ano = 2005;

    //Coleta de dados
    printf("Cálculo do total recebido por um trabalhador que iniciou em 2005 \n\n");
    printf("Digite o ano atual: \n");
    scanf("%d", &ano_at);

    // Inicio if-else
    if (ano >= 2006) {
        for (ano = 2006; ano <= ano_at; (ano++) && (aument = aument * 2)) {
            val_tot = val_in + aument;

            printf("O valor do sálário em %d é de R$%0.2f, com aumento de R$%0.2f com relação ao salário inicial de R$1000.00 em 2005 \n", ano, val_tot, aument);
        }
    }
    
    else {
        printf("O funcionário entrou na empresa em 2005, logo, só a dados dos anos após sua entrada. Revise o ano digitado!");
    }
    // Fim if-else
    

    return 0;
}

