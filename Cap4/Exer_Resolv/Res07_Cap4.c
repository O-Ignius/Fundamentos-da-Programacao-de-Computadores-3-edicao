    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        float A, B, C;
        int I;
        
        // Coleta de dados
        printf("1: Números A B e C em ordem crescente \n2: Números A B e C em ordem decrescente \n3: Maior no meio \n");
        scanf("%d", &I);
        
        // Operações if-else
        if (I == 1) {
            // Coleta de dados
            printf("Digite os números A, B e C |Obrigatório números diferentes entre si|: \n");
            scanf("%f %f %f", &A, &B, &C);
            
            if (A < B && B < C) {
            printf("%0.2f é maior que %0.2f que é maior que %0.2f", C, B, A);
            }
            else if (A < B && B > C && C > A) {
            printf("%0.2f é maior que %0.2f que é maior que %0.2f", B, C, A);
            }    
            else if (A < B && B > C && C < A) {
            printf("%0.2f é maior que %0.2f que é maior que %0.2f", B, A, C);
            }
            else if (A > B && B > C) {
            printf("%0.2f é maior que %0.2f que é maior que %0.2f", A, B, C);
            }
            else if (A > B && B < C && C < A) {
            printf("%0.2f é maior que %0.2f que é maior que %0.2f", A, C, B);
            }
            else {
            printf("%0.2f é maior que %0.2f que é maior que %0.2f", C, A, B);
            }
        }
        else if (I == 2) {
            // Coleta de dados
            printf("Digite os números A, B e C |Obrigatório números diferentes entre si|: \n");
            scanf("%f %f %f", &A, &B, &C);
            
            if (A > B && B > C) {
            printf("%0.2f é menor que %0.2f que é menor que %0.2f", C, B, A);
            }
            else if (A > B && B < C && C < A) {
            printf("%0.2f é menor que %0.2f que é menor que %0.2f", B, C, A);
            }    
            else if (A > B && B < C && C > A) {
            printf("%0.2f é menor que %0.2f que é menor que %0.2f", B, A, C);
            }
            else if (A < B && B < C) {
            printf("%0.2f é menor que %0.2f que é menor que %0.2f", A, B, C);
            }
            else if (A < B && B > C && C > A) {
            printf("%0.2f é menor que %0.2f que é menor que %0.2f", A, C, B);
            }
            else {
            printf("%0.2f é menor que %0.2f que é menor que %0.2f", C, A, B);
            }   
        }
        else if (I == 3) {
            // Coleta de dados
            printf("Digite os números A, B e C |Obrigatório números diferentes entre si|: \n");
            scanf("%f %f %f", &A, &B, &C);
            
            if (A > B && A > C) {
                printf ("A ordem onde o maior número fica no meio é: %0.2f | %0.2f | %0.2f", B, A, C);
            }
            else if (B > A && B > C) {
                printf ("A ordem onde o maior número fica no meio é: %0.2f | %0.2f | %0.2f", A, B, C);
            }
            else if (C > A && C > B) {
                printf ("A ordem onde o maior número fica no meio é: %0.2f | %0.2f | %0.2f", B, C, A);
            }
        }
        else {
            printf("Reveja os números digitados!!");
        }
        
            
        return 0;
    }