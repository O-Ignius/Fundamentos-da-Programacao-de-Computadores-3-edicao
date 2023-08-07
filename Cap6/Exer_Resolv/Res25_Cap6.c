#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");

#define tam 10

    //variaveis
    int i, cont, prim[tam], num, tot10, aux;


    //definidos
    num = 100;
    tot10 = 0;
    aux = 0;
    

    //inicio programa
    do {
        //zerar cont
        cont = 0;
        
        //verificar quais são os primos
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                cont++;
            }
        }
        
        //guardar num primo
        if (cont == 2) {
            prim[aux] = num;
            tot10++;
            aux++;
        }
        
        //aumentar valor num
        num++;
    }
    while(tot10 != 10);
    
    printf("\nPrimos maiores que 100: \n");
    for (i = 0; i < tam; i++) {
        printf("|  %d  ", prim[i]);
    }
    
    //fim programa


    return 0;
}