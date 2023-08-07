#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 4


typedef struct {
    int vet1[tam];
    int vet2[tam];
}vetores;



//indicar subrotinas
vetores inter (int vet1[tam], int vet2[tam]);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
   
    //variaveis
    int i, vet1[tam], vet2[tam];
    vetores intersec;
    
    
    //inicio programa
    //coleta de dados
    printf("\n\tVetor 1: \n");
    for (i = 0; i < tam; i++) {
        printf("\nDigite o %d° valor\n", i + 1);
        scanf("%d%*c", &vet1[i]);
    }
        
    printf("\n\tVetor 2: \n");
    for (i = 0; i < tam; i++) {
        printf("\nDigite o %d° valor\n", i + 1);
        scanf("%d%*c", &vet2[i]);
    }
    
    
    printf("\nVetor 1: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vet1[i]);
    }
    
    printf("\nVetor 2: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", vet2[i]);
    }
    
    
    
    //chamar subrotinas
    intersec = inter(vet1, vet2);
    
    
    //saidas
    printf("\nVetor intersecção vetor 1 com relação ao 2: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", intersec.vet1[i]);
    }
    
    printf("\nVetor intersecção vetor 2 com relação ao 1: \n");
    for (i = 0; i < tam; i++) {
        printf("  %d  |", intersec.vet2[i]);
    }
    
    
    
    //fim programa
    
   
    return 0;
}


//media salarios
vetores inter (int vet1[tam], int vet2[tam]) {
    //variaveis
    int i, j, aux1, aux2, rep1, rep2;
    vetores reto;
    
    
    //definidos
    aux1 = 0;
    aux2 = 0;
    
    
    //inicio sub
    
    for (i = 0; i < tam; i++) {
        reto.vet1[i] = 0;
        reto.vet2[i] = 0;
    }
    
    for (i = 0; i < tam; i++) {
        reto.vet1[aux1] = vet1[i];
        aux1++;
        reto.vet2[aux2] = vet2[i];
        aux2++;
    }
    
    for (i = 0; i < tam; i++) {
        rep1 = 0;
        rep2 = 0;
        
        
        for (j = 0; j < tam; j++) {
            if (reto.vet1[i] == vet2[j]) {
                rep1++;
            }
            
            if (reto.vet2[i] == vet1[j]) {
                rep2++;
            }
        }
        
        if (rep1 > 0) {
            reto.vet1[i] = 0;
        }
        
        if (rep2 > 0) {
            reto.vet2[i] = 0;
        }
    }
    
    
    return reto;
    
    //fim sub
    
}