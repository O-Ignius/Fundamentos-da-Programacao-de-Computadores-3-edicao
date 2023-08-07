//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 5

//subrotina calculo média
float pesquisa (float *mediaidade, int *idademaior, int *qntfem) {
    //variaveis
    float media;
    int i, idade[tam], maioridade, qntfemazuloi, aux;
    char sexo[tam], olhos[tam], cabelos[tam];
    
    
    //definidos
    aux = 0;
    media = 0;
    maioridade = 0;
    qntfemazuloi = 0;
    
    
    //inicio sub
    //coleta de dados
    for (i = 0; i < tam; i++) {
        printf("\nDigite o sexo da %d° pessoa: \nF = Feminino \nM = Masculino\n", i + 1);
        scanf("%c%*c", &sexo[i]);
        printf("\nDigite a cor dos olhos da %d° pessoa: \nA = Azuis \nC = Castanhos\n", i + 1);
        scanf("%c%*c", &olhos[i]);
        printf("\nDigite a cor do cabelo da %d° pessoa: \nL = Louros \nP = Pretos \nC = Castanhos \n", i + 1);
        scanf("%c%*c", &cabelos[i]);
        printf("\nDigite idade da %d° pessoa :\n", i + 1);
        scanf("%d%*c", &idade[i]);
    }
    
    
    for (i = 0; i < tam; i++) {
        //media idade pessoas olhos castanhos cabelos pretos
        if ((olhos[i] == 'C' && cabelos[i] == 'P') || (olhos[i] == 'c' && cabelos[i] == 'p')) {
            media += idade[i];
            aux++;
        }
        
        //maior idade
        if (i == 0) {
            maioridade = idade[i];
        }
        
        else if (maioridade < idade[i]) {
            maioridade = idade[i];
        }
        
        //quantia de femininos idade entre 18 e 35(inclusive) cabelo louro e olho azul
        if (idade[i] <= 35 && idade[i] > 18) {
            if ((cabelos[i] == 'L' && olhos[i] == 'A') || (cabelos[i] == 'l' && olhos[i] == 'a')) {
                qntfemazuloi++;
            }
        }
        
    }
    
    //calculo média idade pessoas olhos castanhos cabelos pretos
    media = media / aux;
    
    //setar os valores no main diretamente
    *mediaidade = media;
    *idademaior = maioridade;
    *qntfem = qntfemazuloi;
    
    return 0;
    
    //fim sub
}




//principal
int main () {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
    //variaveis
    float mediaidade;
    int idademaior, qntfem;
    
    
    //definidos
    
    //inicio programa
    //chamar subrotina val
    pesquisa(&mediaidade, &idademaior, &qntfem);
    
    printf("\nMédia de idade pessoas com olhos castanhos e cabelos pretos: %0.2f \n", mediaidade);
    printf("\nMaior idade entre os habitantes: %d \n", idademaior);
    printf("\nQuantia de pessoas do gênero feminino que tem entre 18 e 35(incluso) anos, com cabelos louros e olhos azuis: %d \n", qntfem);
    
    //fim programa
    
    
    return 0;
}