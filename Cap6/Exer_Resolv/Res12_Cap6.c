#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 5
    
    //variaveis
    float consumo[tam], aux, litro[tam];
    int i, j;
    char car[tam], eco;
    
    for (i = 0; i < tam; i++) {
        //coleta de dados
        printf("\nDigite a Inicial do modelo do carro: \n");
        scanf("%c%*c", &car[i]);
        printf("\nDigite o consumo desse carro: \n");
        scanf("%f%*c", &consumo[i]);
        }
    
    for (i = 0; i < tam; i++) {
        //combustivel consumido para andar 1000km
        litro[i] = 1000 / consumo[i];
        
        //saida
        printf("\nO carro %c gastaria %0.2fL de combustivel para percorrer 1000Km\n", car[i], litro[i]);
    }
    
    for (i = 0; i < tam; i++) {
        //zerar auxiliar
        aux = 0;
        for (j = 0; j < tam; j++) {
            if (consumo[i] > consumo[j] && i != j) {
                aux++;
            }
        }
        
        //se for menor
        if (aux == (tam - 1)) {
            eco = car[i];
        }
    }
    
    printf("\nO modelo de carro mais econômico é o: %c", eco);

    
    return 0;
}