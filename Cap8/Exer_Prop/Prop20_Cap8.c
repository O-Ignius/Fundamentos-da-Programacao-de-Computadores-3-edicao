#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 4


typedef struct {
    float medsal, medfil, maisal, salbaix;
}stats;



//indicar subrotinas
stats pesqui ();



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    stats resul;
   
   
    //inicio programa
   
    //chamar subrotinas
    resul = pesqui();
   
   
    //saidas
    printf("\nA média de salário é: %0.2f\n", resul.medsal);
    printf("\nA média de filhos é: %0.2f\n", resul.medfil);
    printf("\nO maior salário é: R$%0.2f\n", resul.maisal);
    printf("\nO percentual de pessoas que recebem menos que R$380.00 é: %0.2f%%\n", resul.salbaix);
   
   
   
    //fim programa
   
   
    return 0;
}


//subrotina retorna stats
stats pesqui () {
    //variaveis
    float sal, saltot, totfilho, maiorsal, pess380;
    int nfilho, qntpessoa;
    stats reto;
   
   
    //definidos
    saltot = 0;
    qntpessoa = 0;
    totfilho = 0;
    pess380 = 0;
   
   
    //inicio sub
    do {
        //coleta de dados
        printf("\nDigite o salario da %d° pessoa (para encerrar, digite qualquer valor menor que 0) \n", qntpessoa + 1);
        scanf("%f%*c", &sal);
        
        if (sal < 0) {
            continue;
        }
        
        printf("\nDigite a quantia de filhos da %d° pessoa \n", qntpessoa + 1);
        scanf("%f%*c", &nfilho);
        
        
        //salario total
        saltot += sal;
        
        //total de filhos
        totfilho++;
        
        
        //maior salario
        if (qntpessoa == 0) {
            maiorsal = sal;
        }
        
        else if (maiorsal < sal) {
            maiorsal = sal;
        }
        
        
        //pessoas com salário menor que 380 
        if (sal < 380) {
            pess380++;
        }
        
        //aumentar quantia de pessoas;
        qntpessoa++;
    }
    while (sal >= 0);
    
    
    //media salario:
    reto.medsal = saltot / qntpessoa;
    
    //media de filhos
    reto.medfil = totfilho / qntpessoa;
    
    //maior salario
    reto.maisal = maiorsal;
    
    //percentual de pessoas que ganham menos de 380
    reto.salbaix = (pess380 / qntpessoa) * 100;
   
    return reto;
   
    //fim sub
   
}