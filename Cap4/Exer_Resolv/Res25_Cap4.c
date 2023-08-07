#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   
    // Variáveis
    int ang_g, voltas, ang_result;
    
   
    // Coleta de dados
    printf("Preço dos produtos: \n\n");
    printf("Digite o ângulo em graus: \n");
    scanf("%d", &ang_g);
    
    
    // Inicio else-if
    if (ang_g > 360) {
        voltas = ang_g / 360;
        ang_result = ang_g % 360;
            
        if (ang_result == 0 || ang_result == 90 || ang_result == 180 || ang_result == 270 || ang_result == 360) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido anti-horário \nO ângulo está exatamente sobre os eixos", ang_result, voltas);
        }
            
        else if (ang_result > 0 && ang_result < 90) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido anti-horário \nO ângulo está no 1° quadrante", ang_result, voltas);
        }
            
        else if (ang_result > 90 && ang_result < 180) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido anti-horário \nO ângulo está no 2° quadrante", ang_result, voltas);
        }
            
        else if (ang_result > 180 && ang_result < 270) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido anti-horário \nO ângulo está no 3° quadrante", ang_result, voltas);
        }
            
        else {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido anti-horário \nO ângulo está no 4° quadrante", ang_result, voltas);
        }
    }
    
    else if (ang_g <= 360 && ang_g >= 0) {
        if (ang_g == 0 || ang_g == 90 || ang_g == 180 || ang_g == 270 || ang_g == 360) {
            printf("O ângulo é de %d \nO ângulo está exatamente sobre os eixos", ang_g);
        }
            
        else if (ang_g > 0 && ang_g < 90) {
            printf("O ângulo é de %d \nO ângulo está no 1° quadrante", ang_g);
        }
            
        else if (ang_g > 90 && ang_g < 180) {
            printf("O ângulo é de %d \nO ângulo está no 2° quadrante", ang_g);
        }
            
        else if (ang_g > 180 && ang_g < 270) {
            printf("O ângulo é de %d \nO ângulo está no 3° quadrante", ang_g);
        }
            
        else {
            printf("O ângulo é de %d \nO ângulo está no 4° quadrante", ang_g);
        }
    }
        
    else if (ang_g < -360) {
        voltas = -1 * (ang_g / 360);
        ang_result = ang_g % 360;
        
        if (ang_result == 0 || ang_result == -90 || ang_result == -180 || ang_result == -270 || ang_result == -360) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido horário \nO ângulo está exatamente sobre os eixos", ang_result, voltas);
        }
            
        else if (ang_result > -360 && ang_result < -270) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido horário \nO ângulo está no 4° quadrante", ang_result, voltas);
        }
            
        else if (ang_result > -270 && ang_result < -180) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido horário \nO ângulo está no 3° quadrante", ang_result, voltas);
        }
            
        else if (ang_result > -180 && ang_result < -90) {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido horário \nO ângulo está no 2° quadrante", ang_result, voltas);
        }
            
        else {
            printf("O ângulo é de %d \nO total de voltas foi de %d no sentido horário \nO ângulo está no 1° quadrante", ang_result, voltas);
        }
    }
    
    else {
        if (ang_g == 0 || ang_g == -90 || ang_g == -180 || ang_g == -270 || ang_g == -360) {
            printf("O ângulo é de %d \nO ângulo está exatamente sobre os eixos", ang_g);
        }
            
        else if (ang_g > -360 && ang_g < -270) {
            printf("O ângulo é de %d \nO ângulo está no 4° quadrante", ang_g);
        }
            
        else if (ang_g > -270 && ang_g < -180) {
            printf("O ângulo é de %d \nO ângulo está no 3° quadrante", ang_g);
        }
            
        else if (ang_g > -180 && ang_g < -90) {
            printf("O ângulo é de %d \nO ângulo está no 2° quadrante", ang_g);
        }
            
        else {
            printf("O ângulo é de %d \nO ângulo está no 1° quadrante", ang_g);
        }
    } 
    // Fim else-if
   
   
    return 0;
}