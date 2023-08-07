//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 50


typedef struct {
    char descri[tam];
    float valor[tam];
    int estoq[tam], codigo[tam];
}produ;


//indicar subrotinas
produ altera(produ base);

void mostra(produ base);

void mostramen5(produ base);


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int i, op;
    produ base;
    
    
    //definidos
    op = 0;
    
   
    //inicio programa
    for (i = 0; i < tam; i++) {
        //coletar dados
        printf("\n\t%d° Produto\n", i + 1);
        printf("\nDigite o código do produto\n");
        scanf("%d%*c", &base.codigo[i]);
        printf("\nDigite a letra da descrição: \n");
        scanf("%c%*c", &base.descri[i]);
        printf("\nDigite o valor unitário: \n");
        scanf("%f%*c", &base.valor[i]);
        printf("\nDigite a quantia em estoque: \n");
        scanf("%d%*c", &base.estoq[i]);
    }
    
    do {
        printf("\nEscolha uma opção: \n1: Alterar descrição - valor e estoque do produto \n2: Mostrar todos produtos com determinada descrição \n3: mostrar todos os produtos com quantia menor que 5 \n4: finalizar \n");
    
        if (op == 4) {
            continue;
        }
        
        else if (op == 1) {
            base = altera(base);
        }
        
        else if (op == 2) {
            mostra(base);
        }
        
        else if (op == 3) {
            mostramen5(base);
        }
    }
    while(op != 4);
   
    
    //chamar subrotina
    
    
    //saidas
   
    //fim programa
   
   
    return 0;
}


//subrotinas
produ altera(produ base) {
    //variaveis
    int i, codi, qnt;
    produ reto;
   
   
    //definidos
    reto = base;
    qnt = 0;
    
    
    //inicio sub
    printf("\nDigite o código do produto: \n");
    scanf("%d%*c", &codi);
    
    for (i = 0; i < tam; i++) {
        if (base.codigo[i] == codi) {
            //recoletar dados
            printf("\nDigite a letra da descrição: \n");
            scanf("%c%*c", &base.descri[i]);
            printf("\nDigite o valor unitário: \n");
            scanf("%f%*c", &base.valor[i]);
            printf("\nDigite a quantia em estoque: \n");
            scanf("%d%*c", &base.estoq[i]);
            qnt++;
        }
    }
    
    if (qnt == 0) {
        printf("\nNúmero inválido! \n");
    }
    
    else {
        return reto;
    }
    
    
    
    //fim sub
   
}


void mostra(produ base) {
    //variaveis
    int i, qnt;
    char desc;
   
   
    //definidos
    qnt = 0;
    
    
    //inicio sub
    printf("\nDigite a letra da descrição do produto: \n");
    scanf("%c%*c", &desc);
    
    for (i = 0; i < tam; i++) {
        if (base.descri[i] == desc) {
            printf("\n%d° produto: \nCódigo: #%d \nValor unitário: %0.2f \nQuantia em estoque: %d\n", qnt + 1, base.codigo[i], base.valor[i], base.estoq[i]);
            qnt++;
        }
    }
    
    if (qnt == 0) {
        printf("\nDescrição inválida! \n");
    }
    
    
    
    //fim sub
}


void mostramen5(produ base) {
    //variaveis
    int i, qnt;
   
   
    //definidos
    qnt = 0;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        if (base.estoq[i] < 5) {
            printf("\n%d° produto: \nCódigo: #%d \nDescrição: %c \nValor unitário: %0.2f \nQuantia em estoque: %d\n", qnt + 1, base.codigo[i], base.descri[i], base.valor[i], base.estoq[i]);
            qnt++;
        }
    }
    
    if (qnt == 0) {
        printf("\nNão há produtos com estoque menor que 5! \n");
    }
    
    
    
    //fim sub
}