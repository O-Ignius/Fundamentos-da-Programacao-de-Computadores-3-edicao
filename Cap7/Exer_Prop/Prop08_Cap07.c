#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "Portuguese");
   
#define lin 3
#define col 3
   
    //variaveis
    int i, j, mat1[lin] [col], mat2[lin] [col], mat3[lin] [col], mat4[lin * 2] [col * 2], rep, auxlin, auxcol, auxlin2, auxcol2;
   
    //setar
    auxlin = 0;
    auxcol = 0;
    auxlin2 = 0;
    auxcol2 = 0;
   
    
    //zerar matriz 4
    for (i = 0; i < lin * 2; i++) {
        for (j = 0; j < col * 2; j++) {
            mat4[i] [j] = 0;
        }
    }
    
    
    //coletar valores matriz 1
    printf("\n\tDigite os valores da 1° matriz \n");
    for (i = 0; i < lin; i++) {
        printf("\n%d° linha \n", i + 1);
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor inteiro a ser armazenado na %d° coluna \n", j + 1);
            scanf("%d%*c", &mat1[i] [j]);
        }
    }
    
    //coletar valores matriz 2
    printf("\n\tDigite os valores da 2° matriz \n");
    for (i = 0; i < lin; i++) {
        printf("\n%d° linha \n", i + 1);
        for (j = 0; j < col; j++) {
            printf("\nDigite o valor inteiro a ser armazenado na %d° coluna \n", j + 1);
            scanf("%d%*c", &mat2[i] [j]);
        }
    }
    
    //printar matriz 1
    printf("\n1° matriz: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat1[i] [j]);
        }
        printf("\n");
    }
    
    //printar segunda matriz
    printf("\n2° matriz: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat2[i] [j]);
        }
        printf("\n");
    }
    
    //soma matrizes
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat3[i] [j] = mat1[i] [j] + mat2[i] [j];
        }
    }
    
    //printar soma
    printf("\nSoma das matrizes: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat3[i] [j]);
        }
        printf("\n");
    }
    
    //diferença matrizes:
    do {
        rep = 0;
        
        // auxiliar valor linha pra 1° matriz
        if (auxcol == col) {
            auxlin++;
            auxcol = 0;
        }
        
        //pegar valores diferentes da 1° matriz
        for (i = 0; i < lin; i++) {
            for (j = 0; j < col; j++) {
                if (mat1[auxlin] [auxcol] == mat2[i] [j]) {
                    rep++;
                }
            }
        }
        
        //se nao tiver nada repetido
        if (rep == 0) {
            mat4[auxlin2] [auxcol2] = mat1[auxlin] [auxcol];
            auxcol2++;
                        
            if (auxcol2 == col) {
                auxlin2++;
                auxcol2 = 0;
            }
        }
        
        //aumentar auxiliar valor coluna 1° matriz
        auxcol++;
        
    }
    while((auxlin != lin - 1) || (auxcol != col - 1));
    
    //printar diferença
    printf("\nDiferença da matriz 1 para a 2: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("|  %d  ", mat4[i] [j]);
        }
        printf("\n");
    }
    
    
    return 0;
}