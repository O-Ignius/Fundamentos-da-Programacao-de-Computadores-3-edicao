#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 15


typedef struct {
    int numcon[tam];
    char nome[tam];
    float saldo[tam];
}cad;



//indicar subrotinas
cad cadastro();

void registros(cad conta);

cad exclui (cad conta);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int i, op;
    cad conta;
    
    
    //definidos
   
   
    //inicio programa
    //coletar dados
    do {
        printf("\nEscolha uma opção: \n1: Cadastrar contas \n2: Visualizar todas as contas de determinado cliente \n3: Excluir conta com menor saldo \n4: Sair\n");
        scanf("%d%*c", &op);
        
        if (op == 4) {
            continue;
        }
        
        else if (op == 1) {
            //chamar subrotinas
            conta = cadastro();
        }
        
        else if (op == 2) {
            //chamar subrotinas
            registros(conta);
        }
        
        else if (op == 3) {
            conta = exclui (conta);
        }
    }
    while(op != 4);
   
   
    //saidas
   
   
    //fim programa
   
   
    return 0;
}


//subrotina
cad cadastro () {
    //variaveis
    int i;
    cad reto;
   
   
    //definidos
   
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        printf("\nDigite o número da conta: \n");
        scanf("%d%*c", &reto.numcon[i]);
        printf("\nDigite a inicial do seu nome: \n");
        scanf("%c%*c", &reto.nome[i]);
        printf("\nDigite o saldo: \n");
        scanf("%f%*c", &reto.saldo[i]);
    }
    
    return reto;
   
    //fim sub
   
}

//visualizar conta
void registros (cad conta) {
    //variaveis
    int i, registro;
    char pessoa;
   
   
    //definidos
    registro = 0;
   
    
    //inicio sub
    printf("\nDigite a inicial do cliente: \n");
    scanf("%c%*c", &pessoa);
    
    for (i = 0; i < tam; i++) {
        if (conta.nome[i] == pessoa) {
            printf("\nNúmero da conta: %d \nSaldo: R$%0.2f \n", conta.numcon[i], conta.saldo[i]);
            registro++;
        }
    }
    
    if (registro == 0) {
        printf("\nEssa pessoa não consta no banco de dados! \n");
    }
   
    //fim sub
   
}


//excluir conta menor saldo
cad exclui (cad conta) {
    //variaveis
    float menor;
    int i, posi;
    cad reto;
   
   
    //definidos
    posi = -3;
    reto = conta;
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            menor = reto.saldo[i];
            posi = i;
        }
        
        else if (reto.saldo[i] < menor) {
            menor = reto.saldo[i];
            posi = i;
        }
    }
    
    printf("\nConta #%d, com saldo %0.2f foi excluida!\n", reto.numcon[posi], reto.saldo[posi]);
    
    
    reto.nome[posi] = '-';
    reto.numcon[posi] = -1;
    reto.saldo[posi] = 0;
    
    
    return reto;
   
    //fim sub
   
}