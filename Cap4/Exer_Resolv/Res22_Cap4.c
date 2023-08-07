#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    float sal_base, sal_liq, temp_serv, impos, gratif;
   
    // Coleta de dados
    printf("Salário: \n\n");
    printf("Digite o valor do salário base: \n");
    scanf("%f", &sal_base);
    printf("Digite a quantia de horas trabalhadas: \n");
    scanf("%f", &temp_serv);
    
   
    // Inicio if-else
    // Salário base menor que 200
    if (sal_base < 200 && sal_base > 0 && temp_serv > 0) {
        // tempo serviço menor igual a 3
        if (temp_serv <= 3) {
            // Operações
            impos = sal_base * 0;
            gratif = 23;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
        // tempo serviço entre 3 e 6
        else if (temp_serv > 3 && temp_serv < 6) {
            // Operações
            impos = sal_base * 0;
            gratif = 35;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
        // tempo serviço maior q 6
        else {
            // Operações
            impos = sal_base * 0;
            gratif = 33;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
    }
    // Salário base entre 200 e 450
    else if (sal_base >= 200 && sal_base <= 450 && temp_serv > 0) {
        // tempo serviço menor igual a 3
        if (temp_serv <= 3) {
            // Operações
            impos = sal_base * 0.03;
            gratif = 23;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
        // tempo serviço entre 3 e 6
        else if (temp_serv > 3 && temp_serv < 6) {
            // Operações
            impos = sal_base * 0.03;
            gratif = 35;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
        // tempo serviço maior q 6
        else {
            // Operações
            impos = sal_base * 0.03;
            gratif = 33;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
    }
    // Salário base entre 450 e 700
    else if (sal_base > 450 && sal_base < 700 && temp_serv > 0) {
        // Salário liquido menor igual a 500
        if (sal_liq <= 500) {
            // tempo serviço menor igaul a 3
            if (temp_serv <= 3) {
            // Operações
            impos = sal_base * 0.08;
            gratif = 23;
            sal_liq = sal_base - impos + gratif;
            
                if (sal_liq <= 350) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
                }

                else if (sal_liq > 350 && sal_liq < 600) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
                }

                else {
                     printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
                }
            }
            // tempo serviço entre 3 e 6
            else if (temp_serv > 3 && temp_serv < 6) {
                // Operações
                impos = sal_base * 0.08;
                gratif = 35;
                sal_liq = sal_base - impos + gratif;

                if (sal_liq <= 350) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
                }

                else if (sal_liq > 350 && sal_liq < 600) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
                }

                else {
                     printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
                }
            }
            // tempo serviço maior q 6
            else {
                // Operações
                impos = sal_base * 0.08;
                gratif = 33;
                sal_liq = sal_base - impos + gratif;

                if (sal_liq <= 350) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
                }

                else if (sal_liq > 350 && sal_liq < 600) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
                }

                else {
                     printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
                }
            }	
        }
        // Salario liquido maior que 500
        else {
            // tempo servico menor igual a 3
            if (temp_serv <= 3) {
                 // Operações
                impos = sal_base * 0.08;
                gratif = 20;
                sal_liq = sal_base - impos + gratif;

                if (sal_liq <= 350) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
                }

                else if (sal_liq > 350 && sal_liq < 600) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
                }

                else {
                     printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
                }
            }
            // Tempo serviço maior q 3
            else {
                 // Operações
                impos = sal_base * 0.08;
                gratif = 30;
                sal_liq = sal_base - impos + gratif;

                if (sal_liq <= 350) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
                }

                else if (sal_liq > 350 && sal_liq < 600) {
                    printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
                }

                else {
                     printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
                }
            }
        }
    }
    // Salário base maior que 700
    else if (sal_base >= 700 && temp_serv > 0) {
        // tempo serviço menor igual a 3
        if (temp_serv <= 3) {
            // Operações
            impos = sal_base * 0.12;
            gratif = 20;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
        // tempo serviço maior q 3
        else {
            // Operações
            impos = sal_base * 0.12;
            gratif = 30;
            sal_liq = sal_base - impos + gratif;
            
            if (sal_liq <= 350) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como A", sal_base, impos, gratif, sal_liq);
            }
            
            else if (sal_liq > 350 && sal_liq < 600) {
                printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como B", sal_base, impos, gratif, sal_liq);
            }
            
            else {
                 printf ("Alguém que tenha um salário base de R$%0.2f, paga R$%0.2f de impostos e ganha gratificação de R$%0.2f \nRecebendo um salário final de R$%0.2f e tendo classificação como C", sal_base, impos, gratif, sal_liq);
            }
        }
    }
    else {
       printf("Verifique os valores digitados");
    }
    // Fim if-else
   
   
    return 0;
}