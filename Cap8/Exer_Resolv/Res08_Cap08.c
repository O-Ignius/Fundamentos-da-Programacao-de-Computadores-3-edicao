//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//
#define tam 2
//

typedef struct {
    int vet[tam];
}veto;

//subrotina calculo média
int duracao (veto hora, veto min) {
    //variaveis
    int i, dura[tam];
    veto hr, mi;
   
   
    //definidos
    hr = hora;
    mi = min;
   
   
    //duração
   
    if (hr.vet[1] > hr.vet[0]) {
        for (i = 0; i < tam; i++) {
            if (hr.vet[i] > 12) {
                hr.vet[i] = hr.vet[i] - 12;
                dura[i] = (hr.vet[i] * 60) + mi.vet[i]; 
            }
            
            else {
                dura[i] = (hr.vet[i] * 60) + mi.vet[i];
            }
        }
    }
   
    else {
        for (i = 0; i < tam; i++) {
            if (hr.vet[i] > 12) {
                hr.vet[i] = 24 - hr.vet[i];
                dura[i] = (hr.vet[i] * 60) + mi.vet[i]; 
            }
            
            else {
                dura[i] = (hr.vet[i] * 60) + mi.vet[i];
            }
        }
    }
   
   
   
   
    if (hr.vet[1] > hr.vet[0]) {
        return (dura[1] - dura[0]);
    }
   
    else {
        return (dura[0] + dura[1]);
    }
}




//principal
int main () {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
    //variaveis
    int i, duração;
    veto hora, min;
   
   
    //definidos

   
    //inicio programa
    //coletar notas
    for (i = 0; i < tam; i++) {
        printf("\nDigite a hora em que o jogo iniciou e a hora que ele acabou: \n");
        scanf("%d%*c", &hora.vet[i]);
    }
   
    for (i = 0; i < tam; i++) {
        printf("\nDigite os minutos em que o jogo iniciou e os minutos que ele acabou: \n");
        scanf("%d%*c", &min.vet[i]);
    }
   
    //chamar rotina
    duração = duracao(hora, min);
   
    printf("\n A duração da partida em minutos foi de: %d minutos \n", duração);
   
    //fim programa
   
   
    return 0;
}