    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        int vari;
        float num, num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

        // Coleta de dados
        printf("Tabuada até 10: \n");
        printf("1: adição \n2: subtração\n3: divisão\n4: multiplicação \n");
        scanf("%d", &vari);
        
        // Inicio cadeia else-if
        if (vari == 1){
            //Coleta de dados
            printf("Digite o número: \n");
            scanf("%f", &num);
            
            //Operações
            num0 = num + 0;
            num1 = num + 1;
            num2 = num + 2;
            num3 = num + 3;
            num4 = num + 4;
            num5 = num + 5;
            num6 = num + 6;
            num7 = num + 7;
            num8 = num + 8;
            num9 = num + 9;
            num10 = num + 10;
                    
            printf("%0.0f + 0 = %0.0f \n%0.0f + 1 = %0.0f \n%0.0f + 2 = %0.0f \n%0.0f + 3 = %0.0f \n%0.0f + 4 = %0.0f \n%0.0f + 5 = %0.0f \n%0.0f + 6 = %0.0f \n%0.0f + 7 = %0.0f \n%0.0f + 8 = %0.0f \n%0.0f + 9 = %0.0f\n%0.0f + 10 = %0.0f", num, num0, num, num1, num, num2, num, num3, num, num4, num, num5, num, num6, num, num7, num, num8, num, num9, num, num10);
        }
        
        else if (vari == 2) {
            //Coleta de dados
            printf("Digite o número: \n");
            scanf("%f", &num);
            
            //Operações
            num0 = num - 0;
            num1 = num - 1;
            num2 = num - 2;
            num3 = num - 3;
            num4 = num - 4;
            num5 = num - 5;
            num6 = num - 6;
            num7 = num - 7;
            num8 = num - 8;
            num9 = num - 9;
            num10 = num - 10;
                    
            printf("%0.0f - 0 = %0.0f \n%0.0f - 1 = %0.0f \n%0.0f - 2 = %0.0f \n%0.0f - 3 = %0.0f \n%0.0f - 4 = %0.0f \n%0.0f - 5 = %0.0f \n%0.0f - 6 = %0.0f \n%0.0f - 7 = %0.0f \n%0.0f - 8 = %0.0f \n%0.0f - 9 = %0.0f\n%0.0f - 10 = %0.0f", num, num0, num, num1, num, num2, num, num3, num, num4, num, num5, num, num6, num, num7, num, num8, num, num9, num, num10);
        }
        
        else if (vari == 3) {
            //Coleta de dados
            printf("Digite o número: \n");
            scanf("%f", &num);
            
            //Operações
            num1 = num / 1;
            num2 = num / 2;
            num3 = num / 3;
            num4 = num / 4;
            num5 = num / 5;
            num6 = num / 6;
            num7 = num / 7;
            num8 = num / 8;
            num9 = num / 9;
            num10 = num / 10;
                    
            printf("%0.0f / 0 = Não há divisão por 0 \n%0.0f / 1 = %0.2f \n%0.0f / 2 = %0.2f \n%0.0f / 3 = %0.2f \n%0.0f / 4 = %0.2f \n%0.0f / 5 = %0.2f \n%0.0f / 6 = %0.2f \n%0.0f / 7 = %0.2f \n%0.0f / 8 = %0.2f \n%0.0f / 9 = %0.2f\n%0.0f / 10 = %0.2f", num, num, num1, num, num2, num, num3, num, num4, num, num5, num, num6, num, num7, num, num8, num, num9, num, num10);
        }
        
        else if (vari == 4) {
            //Coleta de dados
            printf("Digite o número: \n");
            scanf("%f", &num);
            
            //Operações
            num0 = num * 0;
            num1 = num * 1;
            num2 = num * 2;
            num3 = num * 3;
            num4 = num * 4;
            num5 = num * 5;
            num6 = num * 6;
            num7 = num * 7;
            num8 = num * 8;
            num9 = num * 9;
            num10 = num * 10;
                    
            printf("%0.0f * 0 = %0.0f \n%0.0f * 1 = %0.0f \n%0.0f * 2 = %0.0f \n%0.0f * 3 = %0.0f \n%0.0f * 4 = %0.0f \n%0.0f * 5 = %0.0f \n%0.0f * 6 = %0.0f \n%0.0f * 7 = %0.0f \n%0.0f * 8 = %0.0f \n%0.0f * 9 = %0.0f\n%0.0f * 10 = %0.0f", num, num0, num, num1, num, num2, num, num3, num, num4, num, num5, num, num6, num, num7, num, num8, num, num9, num, num10);
        }
        
        else {
            printf("Número digitado é inválido, tente denovo!");
        }
        // Fim cadeia else-if      
        
        return 0;
    }