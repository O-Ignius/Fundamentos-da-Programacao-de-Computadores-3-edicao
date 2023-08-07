//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 20


typedef struct {
    char sex[tam];
    float renda[tam];
    int idade[tam], numfil[tam];
}pesqui;


//indicar subrotinas
void resultados(pesqui base);


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int i;
    pesqui base;
    
    
    //definidos
   
   
    //inicio programa
    for (i = 0; i < tam; i++) {
        //coletar dados
        printf("\n\t%d° Pessoa\n", i + 1);
        printf("\nDigite o sexo da pessoa: \nF: Feminino \nM: Masculino\n");
        scanf("%c%*c", &base.sex[i]);
        printf("\nDigite a idade: \n");
        scanf("%d%*c", &base.idade[i]);
        printf("\nDigite a renda familiar: \n");
        scanf("%f%*c", &base.renda[i]);
        printf("\nDigite o número de filhos: \n");
        scanf("%d%*c", &base.numfil[i]);
    }
    
   
    
    //chamar subrotina
    resultados(base);
    
    //saidas
   
    //fim programa
   
   
    return 0;
}


//subrotinas
void resultados(pesqui base) {
    //variaveis
    float medsal;
    int i, menor, maior, mulher;
   
   
    //definidos
    medsal = 0;
    menor = 0;
    maior = 0;
    mulher = 0;
    
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        //media salario
        medsal += base.renda[i];
        
        //menor idade
        if (i == 0) {
            menor = base.idade[i];
        }
        
        else if (menor > base.idade[i]) {
            menor = base.idade[i];
        }
        
        //maior idade
        if (i == 0) {
            maior = base.idade[i];
        }
        
        else if (maior < base.idade[i]) {
            maior = base.idade[i];
        }
        
        // quantidade de mulheres com mais de dois filhos e com renda familiar inferior a R$ 600,00
        if (base.sex[i] == 'F' || base.sex[i] == 'f') {
            if (base.numfil[i] > 2 && base.renda[i] < 600) {
                mulher++;
            }
        }
    }
    
    printf("\nA media salarial é: R$%0.2f \n", medsal / tam);
    printf("\nA maior idade entre os habitantes é: %d \n", maior);
    printf("\nA menor idade entre os habitantes é: %d \n", menor);
    printf("\nA quantidade de mulheres com mais de dois filhos e com renda familiar inferior a R$ 600,00 é: %d \n", mulher);
    
    //fim sub
   
}