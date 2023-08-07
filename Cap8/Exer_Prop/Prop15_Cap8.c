#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 15


typedef struct {
    int veto[tam];
}vetores;



//indicar subrotinas
int pares (vetores base);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
   
    //variaveis
    int i, par;
    vetores base;
    
    
    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o %d° número: \n", i + 1);
        scanf("%d%*c", &base.veto[i]);
    }
    
    //chamar subrotinas
    par = pares(base);
    
    
    //saidas
    printf("\nVetor base\n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", base.veto[i]);
    }
    
    printf("\n\nA quantia de pares é: %d\n", par);
    
    
    
    //fim programa
    
   
    return 0;
}


//media salarios
int pares (vetores base) {
    //variaveis
    int i, reto;
    
    
    //definidos
    reto = 0;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        if (base.veto[i] == 0) {
            reto++;
        }
        
        else if (base.veto[i] % 2 == 0) {
            reto++;
        }
    }
    
    
    return reto;
    
    //fim sub
    
}