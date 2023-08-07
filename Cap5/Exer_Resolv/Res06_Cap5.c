#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // setar idioma
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float sal_min, val_hr, aux_al, hr_trab, sal_in, codig, sal_fin;
    int i;
    char categ, turn;

    //definidos
    sal_min = 450;


    printf("Calcular salário final do funcionário \n\n");



    // inicio aplicação
    for (i = 0; i < 10; i++) {
        // coleta de dados
        printf("Digite a categoria do funcionário: \nO: Operário \nG: Gerente \n");
        scanf("%c%*c", &categ);
        printf("Digite o turno do funcionário: \nM: Matutino \nV: Vespertino \nN: Noturno \n");
        scanf("%c%*c", &turn);
        printf("Digite o código referente ao funcionário: \n");
        scanf("%f", &codig);
        printf("Digite a quantia de horas trabalhadas pelo funcionário: \n");
        scanf("%f", &hr_trab);


        //Gerentes
        if (categ == 'G' || categ == 'g') {
            //turno noturno
            if (turn == 'N' || turn == 'n') {
                // Operações
                val_hr = sal_min * 0.18;
                sal_in = val_hr * hr_trab;
               
               
                // Auxilio alimentação
                if (sal_in <= 300) {
                    // Operações
                    aux_al = sal_in * 0.2;
                }
               
                else if (sal_in > 300 && sal_in <= 600) {
                    // Operações
                    aux_al = sal_in * 0.15;
                }
               
                else {
                    // Operações
                    aux_al = sal_in * 0.05;
                }// Fim Auxilio alimentação
            }
           
            // turno vespertino ou matutino
            else if (turn == 'V' || turn == 'v' || turn == 'M' || turn == 'm'){
                // Operações
                val_hr = sal_min * 0.15;
                sal_in = val_hr * hr_trab;
               
               
                // Auxilio alimentação
                if (sal_in <= 300) {
                    // Operações
                    aux_al = sal_in * 0.2;
                }
               
                else if (sal_in > 300 && sal_in <= 600) {
                    // Operações
                    aux_al = sal_in * 0.15;
                }
               
                else {
                    // Operações
                    aux_al = sal_in * 0.05;
                }// Fim Auxilio alimentação
            }
           
            else {
                printf("Turno inválido, tente novamente! \n");
                continue;
            }
        }            
       
        // Operarios
        else if (categ == 'O' || categ == 'o') {
            //turno noturno
            if (turn == 'N' || turn == 'n') {
                // Operações
                val_hr = sal_min * 0.13;
                sal_in = val_hr * hr_trab;
               
               
                // Auxilio alimentação
                if (sal_in <= 300) {
                    // Operações
                    aux_al = sal_in * 0.2;
                }
               
                else if (sal_in > 300 && sal_in <= 600) {
                    // Operações
                    aux_al = sal_in * 0.15;
                }
               
                else {
                    // Operações
                    aux_al = sal_in * 0.05;
                }// Fim Auxilio alimentação
            }
           
            // turno vespertino ou matutino
            else if (turn == 'V' || turn == 'v' || turn == 'M' || turn == 'm') {
                // Operações
                val_hr = sal_min * 0.1;
                sal_in = val_hr * hr_trab;
               
               
                // Auxilio alimentação
                if (sal_in <= 300) {
                    // Operações
                    aux_al = sal_in * 0.2;
                }
               
                else if (sal_in > 300 && sal_in <= 600) {
                    // Operações
                    aux_al = sal_in * 0.15;
                }
               
                else {
                    // Operações
                    aux_al = sal_in * 0.05;
                }// Fim Auxilio alimentação
            }
           
            else {
                printf("Turno inválido, tente novamente! \n");
                continue;
            }
        }
       
        else {
            printf("Categoria inválida, tente novamente! \n");
            continue;
        }
       
        //salário final
        sal_fin = sal_in + aux_al;
       
        //saída
        printf("\nO Funcionário com código %0.2f, trabalhou por %0.2f horas, ganhando R$%0.2f por hora trabalhada \n", codig, hr_trab, val_hr);
        printf("Sendo seu salário inicial igual a R$%0.2f, recebendo auxílio alimentação de R$%0.2f \nSeu salário final foi de R$%0.2f \n\n", sal_in, aux_al, sal_fin);
    }
    // fim aplicação


    return 0;
}