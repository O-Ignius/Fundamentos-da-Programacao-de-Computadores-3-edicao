//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 50


typedef struct {
    char sex[tam], olhos[tam];
    float altura[tam];
    int idade[tam];
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
        printf("\nDigite a altura em metros: \n");
        scanf("%f%*c", &base.altura[i]);
        printf("\nDigite a cor dos olhos: \nA: Azuius \nV: Verdes \nC: Castanhos \n");
        scanf("%c%*c", &base.olhos[i]);
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
    float medolhocast, homem;
    int i, maioridade, mulher, aux;
   
   
    //definidos
    medolhocast = 0;
    maioridade = 0;
    mulher = 0;
    homem = 0;
    aux = 0;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        // média de idade das pessoas com olhos castanhos e altura superior a 1,60 m
        if (base.olhos[i] == 'C' || base.olhos[i] == 'c') {
            if (base.olhos[i] > 1.6) {
                medolhocast += base.idade[i];
                aux++;
            }
        }
        
        // a maior idade entre os habitantes
        if (i == 0) {
            maioridade = base.idade[i];
        }
        
        else if (maioridade < base.idade[i]) {
            maioridade = base.idade[i];
        }
        
        // a quantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos (inclusive) ou que tenham olhos verdes e altura inferior a 1,70 m
        if (base.sex[i] == 'F' || base.sex[i] == 'f') {
            if ((base.idade[i] > 20 && base.idade[i] <= 45) || ((base.olhos[i] == 'V' || base.olhos[i] == 'v') && base.altura[i] < 1.7)) {
                mulher++;
            }
        }
        
        // percentual de homens
        if (base.sex[i] == 'M' || base.sex[i] == 'm') {
            homem++;
        }
    }
    
    printf("\nA media de idade das pessoas com olhos castanhos e altura superior a 1,60 m é: %0.2f \n", medolhocast / aux);
    printf("\nA maior idade entre os habitantes é: %d \n", maioridade);
    printf("\nA quantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos (inclusive) ou que tenham olhos verdes e altura inferior a 1,70 m é: %d \n", mulher);
    printf("\nO percentual de mulheres com salário maior que R$1000.00 é: %0.2f%% \n", (homem / tam) * 100);
    
    //fim sub
   
}