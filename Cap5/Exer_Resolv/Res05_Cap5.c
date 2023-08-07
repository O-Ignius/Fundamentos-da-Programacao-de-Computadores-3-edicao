#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //Definindo lingua
    setlocale(LC_ALL, "portuguese");

    //variáveis
    float term, exp, x_exp, fat, op, fat_tot, result;
    int i, j, den, x;

    // definidos
    den = 1;


    //Objetivo
    printf("Exponencial divido por fatorial: \n\n");
    printf("Digite O número de termos: \n");
    scanf("%f", &term);
    printf("Digite o valor de X: \n");
    scanf("%d", &x);



    // inicio for
    for (i = 1; i <= term; i++) {

        //x exponencial:
        if (i % 2 == 0) {
            x_exp = pow(x, (i + 1));
        }
        else {
            x_exp = -1 * pow(x, (i + 1));
        }



        //fatorial
        //denominador
        if (den == 1) {
            op = 0;
        }
        
        else if (den == 4) {
            op = 1;
        }

        // definir j para 1
        j = 1;

        for (fat = 1; j <= den; j++) {
            fat = fat * j;
        }

        // crescer / decrescer o denominador
        if (op == 0) {
            den++;
        }
        
        else if (op == 1) {
            den--;
        }

        // resultado divisão
        result = x_exp / fat;

        printf("%0.2f / %0.2f = %0.4f \n", x_exp, fat, result);
    }


    return 0;
}// fim programa