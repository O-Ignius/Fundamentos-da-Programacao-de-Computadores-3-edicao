#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float type_trap, base_m, base_M, aresta, altura, base_trian, pit, area;
    
    printf("Calcular área de trapézios: \n");
    printf("Escolha entre 1 para trapézio retângulo e 2 para trapézio isósceles! \n");
    scanf("%f", &type_trap);
    
    // Coleta de dados
    printf("Digite o valor da base maior: \n");
    scanf("%f", &base_M);
    printf("Digite o valor da base menor: \n");
    scanf("%f", &base_m);
            
    if (type_trap == 1) {
        if (base_M > base_m) {
            //coleta de dados
            printf("Digite o valor da altura: \n");
            scanf("%f", &altura);
            
            area = ((base_m + base_M) * altura) / 2;
            // Fim operações

            printf("Um trapézio retângulo com base maior igual a %0.2f, base menor igual a %0.2f, altura igual a %0.2f, tem uma área de %0.2f", base_M, base_m, altura, area);
            }
        
        else {
            printf("Valor da base inválido, favor verificar o valor digitado");
        }
    } 
            
    else if (type_trap == 2) {
        if (base_M > base_m) {
            // Coleta de dados
            printf("Digite o valor da aresta: \n");
            scanf("%f", &aresta);
            
            base_trian = (base_M - base_m) / 2;
            pit = pow(aresta , 2) - pow(base_trian , 2);
            altura = sqrt(pit);
            area = ((base_m + base_M) * altura) / 2;
            //fim operação

            printf("Um trapézio com base maior igual a %0.3f, base menor igual a %0.3f e arestas restantes igual a %0.3f, tem altura de %0.3f e consequentemente tem area igual a %0.3f", base_M, base_m, aresta, altura, area);
        }
    }
    
    else {
        printf("Número inválido, tente novamente!");
    }
    
    return 0;
}