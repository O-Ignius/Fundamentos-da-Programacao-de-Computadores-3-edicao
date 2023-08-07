#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
#define lin 5
#define col 10
   
    //variaveis
    float preco[col], precmaiestoq[lin], custoarmaz[lin];
    int i, j, estoq[lin] [col], estoqtot[lin], qntprod[col], qntmaiestoq, menestoq;
   
    //setar
    menestoq = 0;
    
    
    //inicio programa
    //zerar vetores
    for (i = 0; i < col; i++) {
        qntprod[i] = 0;
    }
    
    for (i = 0; i < lin; i++) {
        custoarmaz[i] = 0;
        estoqtot[i] = 0;
    }
    
    //receber preço dos produtos
    for (i = 0; i < col; i++) {
        printf("\nDigite o preço do %d° produto: \n", i + 1);
        scanf("%f%*c", &preco[i]);
    }
    
    //coletar valores matriz
    for (i = 0; i < lin; i++) {
        printf("\n\t%d° armazém: \n", i + 1);
        for (j = 0; j < col; j++) {
            printf("\nDigite a quantia em estoque do %d° produto: \n", j + 1);
            scanf("%d%*c", &estoq[i] [j]);
        }
    }
    
    for (i = 0; i < lin; i++) {
        printf("\n\t%d° armazém: \n", i + 1);
        for (j = 0; j < col; j++) {
            printf("  %d° produto: %d  |", j + 1, estoq[i] [j]);
        }
        printf("\n");
    }
    
    //quantia de produtos em cada armazém
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            estoqtot[i] += estoq[i] [j];
        }
    }
    
    //printar quantia total de produtos em cada armazem
    for (i = 0; i < lin; i++) {
        printf("\nA quantia de produtos no %d° armazém é: %d\n", i + 1, estoqtot[i]);
    }
    
    //quantia de cada produto em todos os armazens
    for (i = 0; i < col; i++) {
        for (j = 0; j < lin; j++) {
            qntprod[i] += estoq[j] [i];
        }
    }
    
    //printar quantia de cada produtos em todos os armazens
    for (i = 0; i < col; i++) {
        printf("\nA quantia total do %d° produto é: %d\n", i + 1, qntprod[i]);
    }
    
    
    
    //preço do produto de maior estoque:
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (j == 0) {
                qntmaiestoq = estoq[i] [j];
                precmaiestoq[i] = preco[j];
            }
            
            else if (qntmaiestoq < estoq[i] [j]) {
                qntmaiestoq = estoq[i] [j];
                precmaiestoq[i] = preco[j];
            }
        }
    }
    
    //printar quantia total de produtos em cada armazem
    for (i = 0; i < lin; i++) {
        printf("\nO preço do produto em maior estoque no %d° armazém é: R$%0.2f \n", i + 1, precmaiestoq[i]);
    }
    
    //menor estoque armazenado
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i == 0 & j == 0) {
                menestoq = estoq[i] [j];
            }
            
            else if (menestoq > estoq[i] [j]) {
                menestoq = estoq[i] [j];
            }
        }
    }
    
    printf("\nO menor estoque armazenado é: %d \n", menestoq);
    
    //custo de cada armazém
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            custoarmaz[i] += estoq[i] [j] * preco[j];
        }
    }
    
    for (i = 0; i < lin; i++) {
        printf("\nPreço total do %d° armazém: R$%0.2f \n", i + 1, custoarmaz[i]);
    }
    //fim programa
    
    return 0;
}