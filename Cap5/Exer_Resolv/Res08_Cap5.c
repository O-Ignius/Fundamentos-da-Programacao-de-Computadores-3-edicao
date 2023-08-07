#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float num_term, term1, term2, term3;
    int i;

    //definidos
    term1 = 2;
    term2 = 7;
    term3 = 3;

    printf("Termos em série \n\n");
    printf("Digite o número de termos: \n");
    scanf("%f", &num_term);


    // inicio aplicação
    printf("Série de números: \n");
   
    if (num_term <= 1 && num_term != 0) {
        printf("%0.1f | ", term1);
    }
   
    else if (num_term > 1 && num_term <= 2) {
        printf("%0.1f | ", term1);
        printf("%0.1f | ", term2);
    }
   
    else if (num_term >= 3) {
        printf("%0.1f | ", term1);
        printf("%0.1f | ", term2);
        printf("%0.1f | ", term3);
    }
   
    else {
        printf (" Número menor ou igual a zero, tente novamente");
    }
   
    // Repetição
    for (i = 3; i < num_term; i++) {
        if (i < num_term) {
            term1 = term1 * 2;
           
            //saida
            printf("%0.1f | ", term1);
           
            if (i < num_term - 1) {
            term2 = term2 * 3;
           
            //saida
            printf("%0.1f | ", term2);
           
                if (i < num_term - 2) {
                term3 = term3 * 4;

                //saida
                printf("%0.1f | ", term3);
                }
            }
        }
    }
    // fim aplicação


    return 0;
}