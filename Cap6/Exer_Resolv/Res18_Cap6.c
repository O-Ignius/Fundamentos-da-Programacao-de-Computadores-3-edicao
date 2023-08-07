#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
#define num 6
#define tam 20
    
    //variaveis
    int i, jogadas[tam], freq[num] = {0 , 0 , 0 , 0 , 0 , 0};

    
    //definidos
    
    
    //setar seed aleatoria
    srand(time(NULL));
    
    //inicio programa
    //adereçar valores aleatorios
    for (i = 0; i < tam; i++) {
        jogadas[i] = rand() % 6 + 1;
    }
    
    //frequencia
    for (i = 0; i < tam; i++) {
        if (jogadas[i] == 1) {
            freq[0]++;
        }
        
        else if (jogadas[i] == 2) {
            freq[1]++;
        }
        
        else if (jogadas[i] == 3) {
            freq[2]++;
        }
        
        else if (jogadas[i] == 4) {
            freq[3]++;
        }
        
        else if (jogadas[i] == 5) {
            freq[4]++;
        }
        
        else if (jogadas[i] == 6) {
            freq[5]++;
        }
    }
    
    //saida
    for (i = 0; i < num; i++) {
        printf("O número %d foi sorteado um total de %d vezes \n", i + 1, freq[i]);
    }
    //fim programa
    


    return 0;
}