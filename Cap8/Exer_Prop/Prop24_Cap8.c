#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define tam 12


//indicar subrotinas
void maioremenor (float temp[tam]);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    float temp[tam];
    int i;
   
   
    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite o valor da temperatura do %d° mês do ano: \n", i + 1);
        scanf("%f%*c", &temp[i]);
    }
   
    
    //chamar subrotinas
    maioremenor(temp);
   
   
    //saidas
   
   
   
    //fim programa
   
   
    return 0;
}


//subrotina verifica triangulo
void maioremenor (float temp[tam]) {
    //variaveis
    float maior[2], menor[2];
    int i;
   
   
    //definidos
    
   
    ////////  maior[0] ou menor[0] = temperatura  |  maior[1] ou menor[1] = posição no vetor / mês do ano \\\\\\\\\\\
    
    //inicio sub
    for (i = 0; i < tam; i++) {
        //maior temperatura
        if (i == 0) {
            maior[0] = temp[i];
            maior[1] = i + 1;
        }
        
        else if (maior[0] < temp[i]) {
            maior[0] = temp[i];
            maior[1] = i + 1;
        }
        
        //menor temperatura
        if (i == 0) {
            menor[0] = temp[i];
            menor[1] = i + 1;
        }
        
        else if (menor[0] > temp[i]) {
            menor[0] = temp[i];
            menor[1] = i + 1;
        }
    }
    
    printf("\nA Menor temperatura é %0.2f°C, que ocorreu no mês %0.0f \n", menor[0], menor[1]);
    printf("\nA Maior temperatura é %0.2f°C, que ocorreu no mês %0.0f \n", maior[0], maior[1]);
    
   
    //fim sub
   
}