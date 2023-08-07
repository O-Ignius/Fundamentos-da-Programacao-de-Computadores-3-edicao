#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 20


typedef struct {
    float veto[tam];
}vetores;



//indicar subrotinas
float soma (vetores base);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
   
    //variaveis
    int i;
    float sum;
    vetores base;
    
    
    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o %d° número: \n", i + 1);
        scanf("%f%*c", &base.veto[i]);
    }
    
    //chamar subrotinas
    sum = soma(base);
    
    
    //saidas
    printf("\nVetor base\n");
    for (i = 0; i < tam; i++) {
        printf("  %0.2f  |", base.veto[i]);
    }
    
    printf("\n\nA soma dos elementos do vetor é: %0.2f\n", sum);
    
    
    
    //fim programa
    
   
    return 0;
}


//media salarios
float soma (vetores base) {
    //variaveis
    int i, somando;
    
    
    //definidos
    somando = 0;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        somando += base.veto[i];
    }
    
    
    return somando;
    
    //fim sub
    
}