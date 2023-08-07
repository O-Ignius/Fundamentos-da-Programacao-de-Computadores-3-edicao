    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float num1, num2, num3, num4;

        // Coleta de dados
        printf("Números em ordem decrescente: \n\n");
        printf("Digite 3 números em ordem crescente |Sem repetir números digitados|: \n");
        scanf("%f %f %f", &num1, &num2, &num3);
        printf("Digite outro número |Sem repetir números digitados|: \n");
        scanf("%f", &num4);
        
        // Operações if-else
        if ((num1 < num2 && num2 < num3) && (num1 != num2 && num2 != num3 && num3 != num4)) {
            if (num3 < num4 ) {
            printf("a ordem decrescente dos números digitados é %0.2f | %0.2f | %0.2f | %0.2f", num4, num3, num2, num1);
            }
            else if (num4 > num2 && num4 < num3) {
                printf("a ordem decrescente dos números digitados é %0.2f | %0.2f | %0.2f | %0.2f", num3, num4, num2, num1);
            }
            else if (num4 > num1 && num4 < num2) {
                printf("a ordem decrescente dos números digitados é %0.2f | %0.2f | %0.2f | %0.2f", num3, num2, num4, num1);
            }
            else {
            printf("a ordem decrescente dos números digitados é %0.2f | %0.2f | %0.2f | %0.2f", num3, num2, num1, num4);
            }
        }
        
        else {
            printf("Reveja os números digitados!");
        }
        
            
        return 0;
    }