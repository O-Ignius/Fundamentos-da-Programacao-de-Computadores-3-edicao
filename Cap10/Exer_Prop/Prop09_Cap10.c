//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



typedef struct {
    float sal, totvenda;
}venda;


//indicar subrotinas
void final(venda base);


int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int i;
    venda base;
    
    
    //definidos
    
   
    //inicio programa
    printf("\nDigite o salário do funcionário: \n");
    scanf("%f%*c", &base.sal);
    printf("\nDigite o total de vendas: \n");
    scanf("%f%*c", &base.totvenda);
    
   
    
    //chamar subrotina
    final(base);
    
    //saidas
   
    //fim programa
   
   
    return 0;
}


//subrotinas
void final(venda base) {
    //variaveis
    float salfim, comi;
   
   
    //definidos
    salfim = base.sal;
    
    
    //inicio sub
    comi = base.totvenda * 0.06;
    salfim += comi;
    
    //saida
    printf("\nO salário final é de R$%0.2f, sendo R$%0.2f de comissão\n", salfim, comi);
    
    //fim sub
   
}