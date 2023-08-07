#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam1 5
#define tam2 5
    

    //variaveis
    float distcid[tam1] [tam2], consumo;
    int i, j, menor;
    char cidade[tam1];


    //definidos
    menor = 0;
    
    
    //inicio programa
    //coletar consumo veiculo
    printf("\nDigite o consumo do veículo (Km/L): \n");
    scanf("%f%*c", &consumo);
    
    //vetor com nome das cidades
    for (i = 0; i < tam1; i++) {
        printf("\nDigite a inicial da %d° cidade: \n", i + 1);
        scanf("%c%*c", &cidade[i]);
    }
    
    
    //preencher matriz 
    for (i = 0; i < tam1; i++) {
        for (j = i; j < tam2; j++) {
            if (i != j) {
                printf("\nDigite a distância em Km entre a cidade %c e a cidade %c: \n", cidade[i], cidade[j]);
                scanf("%f%*c", &distcid[i] [j]);
            }
            
            else {
                distcid[i] [j] = 0;
            }
        }
    }
    
    //printar matriz
    printf("\nConsumo do veículo: %0.2f Km/L \n", consumo);
    for (i = 0; i < tam1; i++) {
        if (i != tam2 - 1) {
            printf("\nProduto %c até: \n", cidade[i]);   
        }
        
        for (j = i; j < tam2; j++) {
            if (i != j) {
                printf("|  Cidade %c: %0.2f Km, gasto de %0.2f litros de combustível", cidade[j], distcid[i] [j], distcid[i] [j] / consumo);   
            }
        }
        printf("\n");
    }
    
    //menos de 250 km
    printf("\nPercursos que não passam de 250 Km: \n");
    for (i = 0; i < tam1; i++) {
        for (j = i; j < tam2; j++) {
            if (i != j && distcid[i] [j] <= 250) {
                printf("\nCidade %c até cidade %c: distância de %0.2f Km\n", cidade[i], cidade[j],distcid[i] [j]);
            }
        }
    }
    
    //fim programa


    return 0;
}