#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam1 15
#define tam2 30

typedef struct {
    int num_doc[tam2];
    int cod_cli[tam2];
    int data_venc[tam2];
    int data_pag[tam2];
    float valor[tam2];
    float juros[tam2];
}documentos;

typedef struct {
    int cod_cli[tam1];
    char nome[tam1];
    int fone[tam1];
    int endereco[tam1];
}clientes;



//indicar subrotinas
clientes cadastro1();

documentos cadastro2();

clientes excluir1 (int clie, clientes banco, documentos todos);

documentos excluir2 (int docu, documentos todos);

documentos excluir3 (int clie, clientes banco, documentos todos);

documentos excluir4 (int ini, int fim, documentos todos);

clientes recadastro(clientes banco);

void total(int clie, documentos todos);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    int i, clie, docu, ini, fim;
    char op;
    clientes banco;
    documentos todos;
    
    
    //definidos
   
   
    //inicio programa
    //coletar dados
    do {
        printf("\nEscolha uma opção: \na: Cadastrar clientes \nb: Cadastrar documentos \nc: Excluir clientes \nd: Excluir documentos individuais \ne: Excluir documentos por cliente \nf: Excluir documentos por período \ng: Alterar informações sobre os cliente \nh: Mostrar total de documentos de determinado cliente \ni: Sair\n");
        scanf("%cs%*c", &op);
        
        if (op == 'i') {
            continue;
        }
        
        else if (op == 'a') {
            //chamar subrotinas
            banco = cadastro1();
        }
        
        else if (op == 'b') {
            //chamar subrotinas
            todos = cadastro2();
        }
        
        else if (op == 'c') {
            printf("\nDigite o código do cliente: \n");
            scanf("%d%*c", &clie);
            
            //chamar subrotinas
            banco = excluir1(clie, banco, todos);
        }
        
        else if (op == 'd') {
            printf("\nDigite o código do documento: \n");
            scanf("%d%*c", &docu);
            
            //chamar subrotinas
            todos = excluir2 (docu, todos);
        }
        
        else if (op == 'e') {
            printf("\nDigite o código do cliente: \n");
            scanf("%d%*c", &clie);
            
            //chamar subrotinas
            todos = excluir2 (docu, todos);
        }
        
        else if (op == 'f') {
            printf("\nDigite o inicio do período: \n");
            scanf("%d%*c", &ini);
            printf("\nDigite o fim do perido: \n");
            scanf("%d%*c", &fim);
            
            //chamar subrotinas
            todos = excluir4(ini, fim, todos);
        }
        
        else if (op == 'g') {
            //chamar subrotinas
            banco = recadastro(banco);
        }
        
        else if (op == 'h') {
            printf("\nDigite o código do cliente: \n");
            scanf("%d%*c", &clie);
            
            //chamar subrotinas
            total(clie, todos);
        }
    }
    while(op != 'i');
   
   
    //saidas
   
   
    //fim programa
   
   
    return 0;
}


//subrotinas
//a
clientes cadastro1() {
    //variaveis
    int i;
    clientes reto;
   
   
    //definidos
   
    
    //inicio sub
    for (i = 0; i < tam1; i++) {
        printf("\nDigite o número código do cliente: \n");
        scanf("%d%*c", &reto.cod_cli[i]);
        printf("\nDigite a inicial do seu nome: \n");
        scanf("%c%*c", &reto.nome[i]);
        printf("\nDigite o celular: \n");
        scanf("%d%*c", &reto.fone[i]);
        printf("\nDigite o número da casa: \n");
        scanf("%d%*c", &reto.endereco[i]);
    }
    
    return reto;
   
    //fim sub
   
}

//b
documentos cadastro2() {
    //variaveis
    int i;
    documentos reto;
   
   
    //definidos
   
    
    //inicio sub
    for (i = 0; i < tam2; i++) {
        printf("\nDigite o número do documento: \n");
        scanf("%d%*c", &reto.num_doc[i]);
        printf("\nDigite o número código do cliente: \n");
        scanf("%d%*c", &reto.cod_cli[i]);
        printf("\nDigite a data de vencimento: \n");
        scanf("%d%*c", &reto.data_venc[i]);
        printf("\nDigite a data de pagamento: \n");
        scanf("%d%*c", &reto.data_pag[i]);
        printf("\nDigite o valor: \n");
        scanf("%f%*c", &reto.valor[i]);
        printf("\nDigite os juros: \n");
        scanf("%d%*c", &reto.juros[i]);
    }
    
    return reto;
   
    //fim sub
   
}

//c
clientes excluir1 (int clie, clientes base, documentos todos) {
    //variaveis
    int i, j, qnt;
    clientes reto;
   
   
    //definidos
    reto = base;
    qnt = 0;
   
    
    //inicio sub
    for (i = 0; i < tam1; i++) {
        if (reto.cod_cli[i] == clie) {
            for (j = 0; j < tam2; j++) {
                if (todos.cod_cli[j] == reto.cod_cli[i]) {
                    qnt++;
                }
            }
        }
    }
    
    if (qnt == 0) {
        for (i = 0; i < tam1; i++) {
            if (reto.cod_cli[i] == clie) {
                reto.cod_cli[i] == 0;
                reto.nome[i] == '-';
                reto.fone[i] == 0;
                reto.endereco[i] == 0;
            }
        }
    }
    
    else {
        printf("\nEsse cliente possui documentos vinculados a ele! \n");
    }
    
    return reto;
   
    //fim sub
   
}

//d
documentos excluir2 (int docu, documentos todos) {
    //variaveis
    int i, qnt;
    documentos reto;
   
   
    //definidos
    qnt = 0;
    reto = todos;
    
    //inicio sub
    for (i = 0; i < tam2; i++) {
        if (reto.num_doc[i] == docu) {
            reto.num_doc[i] = 0;
            reto.data_pag[i] = 0;
            reto.data_venc[i] = 0;
            reto.juros[i] = 0;
            reto.cod_cli[i] = 0;
            reto.valor[i] = 0;
            
            qnt++;
        }
    }
    
    if (qnt == 0) {
        printf("\nDocumento não encontrado! \n");
    }
    
    return reto;
   
    //fim sub
   
}

//e
documentos excluir3 (int clie, clientes banco, documentos todos) {
    //variaveis
    int i, qnt;
    documentos reto;
   
   
    //definidos
    reto = todos;
    qnt = 0;
    
    
    //inicio sub
    for (i = 0; i < tam2; i++) {
        if (reto.cod_cli[i] == clie) {
            reto.num_doc[i] = 0;
            reto.data_pag[i] = 0;
            reto.data_venc[i] = 0;
            reto.juros[i] = 0;
            reto.cod_cli[i] = 0;
            reto.valor[i] = 0;

            qnt++;
        } 
    }
    
    if (qnt == 0) {
        printf("\nCliente não encontrado! \n");
    }
    
    return reto;
   
    //fim sub
   
}

//f
documentos excluir4 (int ini, int fim, documentos todos) {
    //variaveis
    int i;
    documentos reto;
   
   
    //definidos
    reto = todos;
    
    
    //inicio sub
    for (i = 0; i < tam2; i++) {
        if (reto.data_venc[i] > ini && reto.data_venc[i] < fim) {
            reto.num_doc[i] = 0;
            reto.data_pag[i] = 0;
            reto.data_venc[i] = 0;
            reto.juros[i] = 0;
            reto.cod_cli[i] = 0;
            reto.valor[i] = 0;
        } 
    }
    
    return reto;
   
    //fim sub
   
}

//g
clientes recadastro(clientes banco) {
    //variaveis
    int i;
    clientes reto;
   
   
    //definidos
    reto = banco;
   
    
    //inicio sub
    for (i = 0; i < tam1; i++) {
        printf("\n\tcliente #%d:\n", banco.cod_cli[i]);
        printf("\nDigite a inicial do seu nome: \n");
        scanf("%c%*c", &reto.nome[i]);
        printf("\nDigite o celular: \n");
        scanf("%d%*c", &reto.fone[i]);
        printf("\nDigite o número da casa: \n");
        scanf("%d%*c", &reto.endereco[i]);
    }
    
    return reto;
   
    //fim sub
   
}

//h
void total(int clie, documentos todos) {
    //variaveis
    int i, qnt;
   
   
    //definidos
    qnt = 0;
    
    
    //inicio sub
    for (i = 0; i < tam2; i++) {
        if (todos.cod_cli[i] == clie) {
            qnt++;
        }
    }
    
    printf("\nA quantia de documentos do cliente #%d é: %d\n", clie, qnt);
   
    //fim sub
   
}