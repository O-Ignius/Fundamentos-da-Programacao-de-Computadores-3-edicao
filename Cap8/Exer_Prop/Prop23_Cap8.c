#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int etri;
    int tipotri;
}trian;


//indicar subrotinas
trian triangulo (float n1, float n2, float n3);



int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
   
    //variaveis
    float n1, n2, n3;
    trian resul;
   
   
    //inicio programa
    printf("\nDigite o 1° valor: \n");
    scanf("%f%*c", &n1);
    printf("\nDigite o 2° valor: \n");
    scanf("%f%*c", &n2);
    printf("\nDigite o 3° valor: \n");
    scanf("%f%*c", &n3);
   
    
    //chamar subrotinas
    resul = triangulo(n1, n2, n3);
   
   
    //saidas
    if (resul.etri = 1) {
        printf("\nOs valores formam um triângulo!! \n");
        
        if (resul.tipotri == 1) {
            printf("\nO triângulo é Equilatero! \n");
        }
        
        else if (resul.tipotri == 2) {
            printf("\nO triângulo é Isósceles! \n");
        }
        
        else if (resul.tipotri == 3) {
            printf("\nO triângulo é Escaleno! \n");
        }
    }
    
    else {
        printf("\nOs valores não formam um triângulo! \n");
    }
   
   
   
    //fim programa
   
   
    return 0;
}


//subrotina verifica triangulo
trian triangulo (float n1, float n2, float n3) {
    //variaveis
    int setriang, qualtriang;
    trian reto;
   
   
    //definidos
    setriang = 0;
    qualtriang = 0;
    
   
    //inicio sub
    if ((n1 < (n2 + n3)) || (n2 < (n1 + n3)) || (n3 < (n2 + n1))) {
        setriang = 1;
        
        //qual tipo de triangulo
        //equilatero
        if (n1 == n2 && n2 == n3) {
            qualtriang = 1;
        }
        
        //isosceles
        else if (n1 == n2 || n2 == n3 || n3 == n1) {
            qualtriang = 2;
        }
        
        //escaleno
        else {
            qualtriang = 3;
        }
    }
    
    reto.etri = setriang;
    reto.tipotri = qualtriang;
    
    
   
    return reto;
   
    //fim sub
   
}