    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        int num, sera;
        //ps: não achei em nenhum fórum uma maneira de conseguir comparar uma variavel do tipo float com algo pra ver sua paridade, logo, tive que usar o int

        // Coleta de dados
        printf("Verificação paridade: \n\n");
        printf("Digite o número a ser verificado: \n");
        scanf("%d", &num);
        
        // Operações
        sera = num % 2;
        
        // Operações if-else
        if (sera == 0) {
            printf("O número digitado é PAR!");
        }
        
        else {
            printf("O número digitado é IMPAR!");
        }
        
            
        return 0;
    }