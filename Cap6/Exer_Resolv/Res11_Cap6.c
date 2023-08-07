#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
    
#define val 2
#define tam 12
    
    // variaveis
    int i, j, temp[tam], maior[val], menor[val];
    
    
    //inicio programa
    for (i = 0; i < tam; i++) {
        printf("\nDigite a temperatura média do mes %d\n", i+1);
        scanf("%d%*c", &temp[i]);
    }
    
    for (i = 0; i < tam; i++) {
        //armazenar maior valor temperatura
        if (i == 0) {
            maior[0] = i;
            maior[1] = temp[i];
            menor[0] = i;
            menor[1] = temp[i];
        }
        
        else if (temp[i] > maior[1]) {
            maior[0] = i;
            maior[1] = temp[i];
        }
        
        if (temp[i] < menor[1]) {
            menor[0] = i;
            menor[1] = temp[i];
        }
    }
    
    // saida maior
    if (maior[0] == 0) {
        printf("\nA maior temperatura foi em Janeiro, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 1) {
        printf("\nA maior temperatura foi em Fevereiro, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 2) {
        printf("\nA maior temperatura foi em Março, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 3) {
        printf("\nA maior temperatura foi em Abril, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 4) {
        printf("\nA maior temperatura foi em Maio, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 5) {
        printf("\nA maior temperatura foi em Junho, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 6) {
        printf("\nA maior temperatura foi em Julho, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 7) {
        printf("\nA maior temperatura foi em Agosto, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 8) {
        printf("\nA maior temperatura foi em Setembro, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 9) {
        printf("\nA maior temperatura foi em Outubro, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 10) {
        printf("\nA maior temperatura foi em Novembro, com %d°C", maior[1]);
    }
    
    else if (maior[0] == 11) {
        printf("\nA maior temperatura foi em Dezembro, com %d°C", maior[1]);
    }
    
    //saida menor
    if (menor[0] == 0) {
        printf("\nA menor temperatura foi em Janeiro, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 1) {
        printf("\nA menor temperatura foi em Fevereiro, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 2) {
        printf("\nA menor temperatura foi em Março, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 3) {
        printf("\nA menor temperatura foi em Abril, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 4) {
        printf("\nA menor temperatura foi em Maio, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 5) {
        printf("\nA menor temperatura foi em Junho, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 6) {
        printf("\nA menor temperatura foi em Julho, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 7) {
        printf("\nA menor temperatura foi em Agosto, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 8) {
        printf("\nA menor temperatura foi em Setembro, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 9) {
        printf("\nA menor temperatura foi em Outubro, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 10) {
        printf("\nA menor temperatura foi em Novembro, com %d°C", menor[1]);
    }
    
    else if (menor[0] == 11) {
        printf("\nA menor temperatura foi em Dezembro, com %d°C", menor[1]);
    }
    
    //fim programa
    
    
    return 0;
}