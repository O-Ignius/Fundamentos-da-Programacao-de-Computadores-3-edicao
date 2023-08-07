#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float tot , nul, branc;
    int voto[6];
    
    //definidos
    voto[1] = 0;
    voto[2] = 0;
    voto[3] = 0;
    voto[4] = 0;
    voto[5] = 0;
    voto[6] = 0;
    tot = 0;
    
    
    do {
        
        //coleta de dados
        printf("Vote: \n1: Candidato 1 \n2: Candidato 2 \n3: Candidato 3 \n4: Candidato 4 \n5: Voto Nulo \n6: Voto em branco \n");
        scanf("%d%*c", &voto[0]);
        
        //finalizar
        if (voto[0] == 0) {
            continue;
        }
        
        //cada candidato
        else if (voto[0] == 1) {
            voto[1]++;
        }
        
        else if (voto[0] == 2) {
            voto[2]++;
        }
        
        else if (voto[0] == 3) {
            voto[3]++;
        }
        
        else if (voto[0] == 4) {
            voto[4]++;
        }
        
        //votos nulos
        else if (voto[0] == 5) {
            voto[5]++;
        }
        
        //votos brancos
        else if (voto[0] == 6) {
            voto[6]++;
        }
        
        //caso erre o digito
        else {
            printf("\nVoto inválido, tente novamente!!\n");
        }
        
        //total votos
        tot++;
        
    }
    while (voto[0] != 0);
    
    //operações
    nul = (voto[5] * 100) / tot;
    branc = (voto[6] *100) / tot;
    
    //saida
    printf("\nResultado da eleição: \n");
    printf("\nCandidato 1: %d \nCandidato 2: %d \nCandidato 3: %d \nCandidato 4: %d \nNulo: %d \nEm branco: %d \n", voto[1], voto[2], voto[3], voto[4], voto[5], voto[6]);
    printf("A procentagem de nulos sobre o total de votos é de %0.2f%% \nA procentagem de brancos sobre o total de votos é de: %0.2f%% \n", nul, branc);
    
    
    return 0;
}