//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 20


typedef struct {
    float sal[tam];
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
        printf("\nDigite o salário: \n");
        scanf("%f%*c", &base.sal[i]);
        printf("\nDigite a idade: \n");
        scanf("%d%*c", &base.idade[i]);
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
    float medsal, medfilho, maiorsal, percmulher;
    int i;
   
   
    //definidos
    medsal = 0;
    medfilho = 0;
    maiorsal = 0;
    percmulher = 0;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        medsal += base.sal[i];
        medfilho += base.numfil[i];
        
        //maior salario
        if (i == 0) {
            maiorsal = base.sal[i];
        }
        
        else if (maiorsal < base.sal[i]) {
            maiorsal = base.sal[i];
        }
        
        //perc mulher com salário maior que 1000
        if (base.sal[i] > 1000) {
            percmulher++;
        }
    }
    
    printf("\nA media de salário é: R$%0.2f \n", medsal / tam);
    printf("\nA media de filhos é: %0.2f \n", medfilho / tam);
    printf("\nO maior salário é: R$%0.2f \n", maiorsal);
    printf("\nO percentual de mulheres com salário maior que R$1000.00 é: %0.2f%% \n", (percmulher / tam) * 100);
    
    //fim sub
   
}