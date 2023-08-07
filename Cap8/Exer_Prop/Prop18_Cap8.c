#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 3


typedef struct {
    int vet[tam];
}prim10;



//indicar subrotinas
prim10 primos ();



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
   
    //variaveis
    int i;
    prim10 mai100;
    
    
    //inicio programa
    
    //chamar subrotinas
    mai100 = primos();
    
    
    //saidas
    printf("\nNúmeros primos acima de 100: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", mai100.vet[i]);
    }
    
    
    
    //fim programa
    
   
    return 0;
}


//media salarios
prim10 primos () {
    //variaveis
    int i, num, aux, div;
    prim10 reto;
    
    
    //definidos
    aux = 0;
    num = 100;
    
    
    //inicio sub
    while (aux != 3) {
        div = 0;
        num++;
        
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                div++;
            }
        }
        
        
        if (div == 2) {
            reto.vet[aux] = num;
            aux++;
        }
    }
    
    
    return reto;
    
    //fim sub
    
}