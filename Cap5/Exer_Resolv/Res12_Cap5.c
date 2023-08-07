#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float sal_min, pagamen_op, tot_pecas, pecas, sal_fin, pecas_fem, pecas_mas, tot_pec_fem, tot_pec_mas, rico;
    char sex;
    int i, j, cod, func, m, f, cod_rico;

    //definidos
    sal_min = 1200;
    pagamen_op = 0;
    m = 0;
    f = 0;
    rico = 0;
    pecas_mas = 0;
    pecas_fem = 0;
    tot_pec_fem = 0;
    tot_pec_mas = 0;
   

    // o que faz:
    printf("Pagamento dos Funcionários (salário minimo = R$1200.00): \n");


    // inicio aplicação
    // Repetição
    for (i = 0; i < 15; i++) {

        //coleta de dados
        printf("\n\nDigite o código do funcionário: ");
        scanf("%d%*c", &cod);
        printf("\nDigite o número de peças fábricadas pelo funcionário: ");
        scanf("%f%*c", &pecas);
        printf("\nDigite o sexo do funcionário: \nM: Masculino \nF: Feminino \n");
        scanf("%c%*c", &sex);

        //até 30 peças
        if (pecas <= 30) {
            // operações
            sal_fin = sal_min;

            // caso seja mulher
            if (sex == 'F' || sex == 'f') {
                // operações
                pecas_fem = pecas;
                func = cod;
                f++;
            }
           
                // caso seja homem
            else if (sex == 'M' || sex == 'm') {
                // operações
                pecas_mas = pecas;
                func = cod;
                m++;
            }

        }
            //de 30 até 50 peças
        else if (pecas <= 50 && pecas > 30) {
            // operações
            sal_fin = sal_min + ((sal_min * 0.03) * pecas);
           
            // caso seja mulher
            if (sex == 'F' || sex == 'f') {
                // operações
                pecas_fem = pecas;
                func = cod;
                f++;
            }
           
                // caso seja homem
            else if (sex == 'M' || sex == 'm') {
                // operações
                pecas_mas = pecas;
                func = cod;
                m++;
            }
        }
       
            //mais de 50 peças
        else if (pecas > 50) {
            // operações
            sal_fin = sal_min + ((sal_min * 0.05) * pecas);

            // caso seja mulher
            if (sex == 'F' || sex == 'f') {
                // operações
                pecas_fem = pecas;
                func = cod;
                f++;
            }
           
                // caso seja homem
            else if (sex == 'M' || sex == 'm') {
                // operações
                pecas_mas = pecas;
                func = cod;
                m++;
            }
        }
       
        else {
            printf("\nNúmero de peças inválido");
            continue;
        }

        // o que ganha mais
        if (rico <= sal_fin) {
            rico = sal_fin;
            cod_rico = func;
        }


        //operações
        pagamen_op = pagamen_op + sal_fin;
        tot_pec_fem = tot_pec_fem + pecas_fem;
        tot_pec_mas = tot_pec_mas + pecas_mas;

        //saida
        printf("\nO funcionário #%d ganha R$%0.2f", func, sal_fin);


    }
    // operações
    tot_pecas = tot_pec_fem + tot_pec_mas;
    tot_pec_fem = tot_pec_fem / f;
    tot_pec_mas = tot_pec_mas / m;
   
    //saida
    printf("\nO gasto total com os funcionários será de R$%0.2f", pagamen_op);
    printf("\nO total de peças fábricadas por mês foi de %0.2f", tot_pecas);
    printf("\nOs funcíonário femininos produziram em média %0.2f peças \nOs funcionários masculinos produziram %0.2f peças", tot_pec_fem, tot_pec_mas);
    printf("\nO operário com maior salário é #%d, ganhando R$%0.2f", cod_rico, rico);
   
    // fim aplicação


    return 0;
}