#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float sal_min, hr_trab, sal_brut, impos, gratif, aux_alim, sal_liq;
    int turn, clas;
   
    // Coleta de dados
    printf("Salário: \n\n");
    printf("Digite o valor do salário minimo: \n");
    scanf("%f", &sal_min);
    printf("Digite a quantia de horas trabalhadas: \n");
    scanf("%f", &hr_trab);
    printf("Turno de trabalho: \n1: Matutino \n2: Vespertino \n3: Noturno \n");
    scanf("%d", &turn);
    
   
    // Inicio else-if
    // Turno matutino
    if (turn == 1 && sal_min > 0) {
        // Coleta de dados
        printf("Classificação do trabalhador: \n1: Operário \n2: Gerente \n");
        scanf("%d", &clas);
        
        // Operações
        sal_brut = hr_trab * (sal_min * 0.1);
        
        // Operários
        if (clas == 1 && sal_brut < 300) {
            impos = sal_brut * 0.03;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Operário do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Operário do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Operário do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        }
        
        else if (clas == 1 && sal_brut >= 300) {
            impos = sal_brut * 0.05;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Operário do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Operário do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Operário do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        }
        
        // Gerentes
        else if (clas == 2 && sal_brut < 400) {
            impos = sal_brut * 0.04;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Gerente do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Gerente do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Gerente do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        }
        
        else if (clas == 2 && sal_brut >= 400) {
            impos = sal_brut * 0.06;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Gerente do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Gerente do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Gerente do turno Matutino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        } 
    }
    
    // Turno vespertino
    else if (turn == 2 && sal_min > 0) {
        // Coleta de dados
        printf("Classificação do trabalhador: \n1: Operário \n2: Gerente \n");
        scanf("%d", &clas);
        
        // Operações
        sal_brut = hr_trab * (sal_min * 0.15);
        
        // Operários
        if (clas == 1 && sal_brut < 300) {
            impos = sal_brut * 0.03;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Operário do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Operário do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Operário do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        }
        
        else if (clas == 1 && sal_brut >= 300) {
            impos = sal_brut * 0.05;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Operário do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Operário do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Operário do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        }
        
        // Gerentes
        else if (clas == 2 && sal_brut < 400) {
            impos = sal_brut * 0.04;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Gerente do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Gerente do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Gerente do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        }
        
        else if (clas == 2 && sal_brut >= 400) {
            impos = sal_brut * 0.06;
            gratif = 30;
            aux_alim = sal_brut / 3;
            sal_liq = sal_brut + aux_alim + gratif - impos;
            
            if (sal_liq < 350) {
                printf("O salário bruto de um Gerente do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Mal remunerado");
            }
            
            else if (sal_liq >= 350 && sal_liq <= 600) {
                printf("O salário bruto de um Gerente do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Remunerado normalmente");
            }
            
            else {
                printf("O salário bruto de um Gerente do turno Vespertino é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                printf("\nLogo o profissional é Bem remunerado");
            }
        }
    }
    
    // Turno noturno        
    else if (turn == 3 && sal_min > 0) {
        // Coleta de dados
        printf("Classificação do trabalhador: \n1: Operário \n2: Gerente \n");
        scanf("%d", &clas);
        
        // Operações
        sal_brut = hr_trab * (sal_min * 0.12);
        
        // Operários
        if (clas == 1 && sal_brut < 300) {
            impos = sal_brut * 0.03;
            // Se trabalha mais de 80 horas
            if (hr_trab > 80) {
                gratif = 50;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
            
            else {
                gratif = 30;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
        }
        
        else if (clas == 1 && sal_brut >= 300) {
            impos = sal_brut * 0.05;
            // Se trabalha mais de 80 horas
            if (hr_trab > 80) {
                gratif = 50;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
            
            else {
                gratif = 30;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Operário do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
        }
        
        // Gerentes
        else if (clas == 2 && sal_brut < 400) {
            impos = sal_brut * 0.04;
            // Se trabalha mais de 80 horas
            if (hr_trab > 80) {
                gratif = 50;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
            
            else {
                gratif = 30;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
        }
        
        else if (clas == 2 && sal_brut >= 400) {
            impos = sal_brut * 0.06;
            // Se trabalha mais de 80 horas
            if (hr_trab > 80) {
                gratif = 50;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
            
            else {
                gratif = 30;
                aux_alim = sal_brut / 3;
                sal_liq = sal_brut + aux_alim + gratif - impos;

                if (sal_liq < 350) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Mal remunerado");
                }

                else if (sal_liq >= 350 && sal_liq <= 600) {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Remunerado normalmente");
                }

                else {
                    printf("O salário bruto de um Gerente do turno Noturno é de R$%0.2f, pagando R$%0.2f de imposto e somando auxílio alimentação e gratificação seu salário líquido é de R$%0.2f",sal_brut, impos, sal_liq);
                    printf("\nLogo o profissional é Bem remunerado");
                }
            }
        }
    }
    
    else {
        printf("Reveja o que foi digitado!");
    }
    // Fim else-if
   
   
    return 0;
}