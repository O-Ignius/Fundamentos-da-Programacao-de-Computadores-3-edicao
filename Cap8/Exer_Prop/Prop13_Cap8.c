#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 15


typedef struct {
    int veto[tam];
}vetoint;

typedef struct {
    char veto[tam];
}vetochar;

typedef struct {
    float veto[tam];
}vetofloat;



//indicar subrotinas
float media (vetofloat sal);
int menorida (vetoint idade);
int maiorida (vetoint idade);
int femin (vetochar sex, vetoint nfilho, vetofloat sal);




int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
   
    //variaveis
    float medi;
    int i, menidade, maidade, mulheres;
    vetoint nfilho, idade;
    vetochar sex;
    vetofloat sal;
    
    
    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o sexo do %d° participante:   F: Feminino   M: Masculino\n", i + 1);
        scanf("%c%*c", &sex.veto[i]);
        printf("\nDigite a idade do %d° participante: \n", i + 1);
        scanf("%d%*c", &idade.veto[i]);
        printf("\nDigite o número de filhos %d° participante: \n", i + 1);
        scanf("%d%*c", &nfilho.veto[i]);
        printf("\nDigite o salário do %d° participante: \n", i + 1);
        scanf("%f%*c", &sal.veto[i]);
    }
    
    //chamar subrotinas
    medi = media(sal);
    menidade = menorida(idade);
    maidade = maiorida(idade);
    mulheres = femin(sex, nfilho, sal);
    
    
    //saidas
    printf("\nA média de salários é: R$%0.2f\n", medi);
    printf("\nA Menor idade é: %d anos\n", menidade);
    printf("\nA Maior idade é: %d anos\n", maidade);
    printf("\nA quantia de mulheres com 3 filhos que recebem até R$500.00 é: %d\n", mulheres);
    
    
    //fim programa
    
   
    return 0;
}


//media salarios
float media (vetofloat sal) {
    //variaveis
    float mediasal;
    int i;
    
    
    //definidos
    mediasal = 0;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        mediasal += sal.veto[i];
    }
    
    mediasal = mediasal / tam;
    
    
    return mediasal;
    
    //fim sub
    
}


//menor idade
int menorida (vetoint idade) {
    //variaveis
    int i, menor;
    
    
    //definidos
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            menor = idade.veto[i];
        }
        
        else if (menor > idade.veto[i]) {
            menor = idade.veto[i];
        }
    }
    
    
    return menor;
    
    //fim sub
    
}


//maior idade
int maiorida (vetoint idade) {
    //variaveis
    int i, maior;
    
    
    //definidos
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        if (i == 0) {
            maior = idade.veto[i];
        }
        
        else if (maior < idade.veto[i]) {
            maior = idade.veto[i];
        }
    }
    
    
    return maior;
    
    //fim sub
    
}


//mulheres com 3 filhos e salario ate R$500
int femin (vetochar sex, vetoint nfilho, vetofloat sal) {
    //variaveis
    int i, qntmul;
    
    
    //definidos
    qntmul = 0;
    
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        if (sex.veto[i] == 'F' || sex.veto[i] == 'f') {
            if (nfilho.veto[i] == 3) {
                if (sal.veto[i] <= 500) {
                    qntmul++;
                }
            }
        }
    }
    
    
    return qntmul;
    
    //fim sub
    
}