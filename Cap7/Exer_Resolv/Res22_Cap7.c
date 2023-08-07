#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define lin 5
#define col 3

    //variaveis
    float prod[lin] [col], quadrad, estoque[lin - 1], maior2, men, custo, aux, valarmaz[lin - 1];
    int i, j;


    //definidos
    
    
    //inicio programa
    //receber valores da matriz
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i != lin - 1) {
                printf("\nDigite a quantia do %d° produto em estoque no %d° armazem: \n", j + 1, i + 1);
                scanf("%f%*c", &prod[i] [j]);
            }
            
            //armazenar valor do produto na ultima linha
            else {
                printf("\nDigite o valor do %d° produto: \n", j + 1);
                scanf("%f%*c", &prod[i] [j]);
            }
        }
    }
    
    //zerar vetor estoque
    for (i = 0; i < lin - 1; i++) {
        estoque[i] = 0;
        valarmaz[i] = 0;
    }
    
    
    //armazenar total de estoque de cada armazen
    for (i = 0; i < lin - 1; i++) {
        for (j = 0; j < col; j++) {
            estoque[i] += prod[i] [j];
            
            //maior estoque do produto 2
            if (j == 1) {
                if (i == 0) {
                    maior2 = prod[i] [j];
                }
                
                else if (maior2 < prod[i] [j]) {
                    maior2 = prod[i] [j];
                }
            }
        }
    }
    
    //menor estoque
    for (i = 0; i < lin - 1; i++) {
        if (i == 0) {
            aux = estoque[i];
            men = i;
        }
        
        else if (aux > estoque[i]) {
            aux = estoque[i];
            men = i;
        }
    }
    
    //custo total de cada armazen
    for (i = 0; i < lin - 1; i++) {
        for (j = 0; j < col; j++) {
            valarmaz[i] += prod[i] [j] * prod[lin - 1] [j];
        }
    }
    
    //printar matriz
    printf("\n\nMatriz base: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i != lin - 1) {
                printf("|  Estoque: %0.2f  ", prod[i] [j]);
            }
            
            //armazenar valor do produto na ultima linha
            else {
                printf("|  Valor: R$%0.2f  ", prod[i] [j]);
            }
        }
        printf("\n");
    }
    
    //quantia de cada armazem
    printf("\nQuantia total de cada armazem: \n");
    for (i = 0; i < lin - 1; i++) {
        printf("\n%d° Armazem: %0.2f", i + 1, estoque[i]);
    }
    
    printf("\nO maior valor do 2° armazém é: %0.2f \n", maior2);
    
    printf("\nO armazém com menor volume de estoque é o %0.0f°, com estoque igual a: %0.2f \n", men + 1, aux);
    
    for (i = 0; i < col; i++) {
        printf("\nValor do %d° produto: R$%0.2f \n", i + 1, prod[lin - 1] [i]);
    }
    
    for (i = 0; i < lin - 1; i++) {
        printf("\nO custo total do %d° armazém é de: R$%0.2f \n", i + 1, valarmaz[i]);
    }
    //fim programa


    return 0;
}