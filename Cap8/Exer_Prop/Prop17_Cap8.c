#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//indicar subrotinas
int mdc (int n1, int n2);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
    
   
    //variaveis
    int maxdiv, n1, n2;
    
    
    //inicio programa
    printf("\nDigite o 1° número: \n");
    scanf("%d%*c", &n1);
    printf("\nDigite o 2° número: \n");
    scanf("%d%*c", &n2);
    
    //chamar subrotinas
    maxdiv = mdc(n1, n2);
    
    
    //saidas
    
    printf("\n\nO máximo divisor comum de %d e %d é: %d\n", n1, n2, maxdiv);
    
    
    
    //fim programa
    
   
    return 0;
}


//media salarios
int mdc (int n1, int n2) {
    //variaveis
    int i, div, men;
    
    
    //definidos
    i = 1;
    
    
    //inicio sub
    //coletar menor numero
    if (n1 > n2) {
        men = n2;
    }
    
    else {
        men = n1;
    }
    
    
    
    do {
        if ((n1 % i == 0) && (n2 % i == 0)) {
            div = i;
        }
        
        i++;
    }
    while (i <= men);
    
    
    return div;
    
    //fim sub
    
}