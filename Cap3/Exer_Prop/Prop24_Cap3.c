    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float val_real, val_dolar, val_marc_alem, val_lib_est, val_lib_est_liv, val_euro, val_dolar_liv;

        // Coleta de dados
        printf("Conversão monetária (26/03/2023): \n\n");
        printf("Digite o valor em reais: \n");
        scanf("%f", &val_real);
        
        // Operações
        val_dolar = 0.19 * val_real;
        val_marc_alem = 0.5 * val_real;
        val_lib_est = 0.16 * val_real;
        val_lib_est_liv = 0.28 * val_real;
        val_euro = 0.18 * val_real;
        val_dolar_liv = 0.55 * val_real;
        
        printf("R$%0.2f = %0.2f Euros; %0.2f Dólares; %0.2f Libras esterlinas -- cot: 26/03/2023 \n", val_real, val_euro, val_dolar, val_lib_est);
        printf("R$%0.2f = %0.2f Marcos alemães; %0.2f Dólares; %0.2f Libras esterlinas -- cot: livro Fundamentos da programação de computadores, 3°edição", val_real, val_marc_alem, val_dolar_liv, val_lib_est_liv);
        
        
        
        return 0;
    }