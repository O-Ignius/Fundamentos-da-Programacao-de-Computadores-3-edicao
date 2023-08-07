    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float hr, min, hr_min, min_seg, min_tot, seg_tot;

        // Coleta de dados
        printf("Conversão horas p/ minutos e segundos: \n\n");
        printf("Digite o das horas e dos minutos: \n");
        scanf("%f %f", &hr, &min);
        
        // Operações
        hr_min = hr * 60;
        min_seg = min * 60;
        min_tot = min + hr_min;
        seg_tot = min_tot * 60;
        
        printf("%0.0f horas e %0.0f minutos são: \n%0.01f minutos \n%0.0f segundos", hr, min, min_tot, seg_tot);
        
        
        return 0;
    }