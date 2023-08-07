#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setar idioma
    setlocale(LC_ALL, "portuguese");
   
    //variaveis
    float idade, sal, maior_idad, menor_idad, fem_200, pessoas, sal_tot, men_sal, men_idad;
    char sex, men_sex;
    
    //definidos
    pessoas = 0;
    sal_tot = 0;
    fem_200 = 0;
    menor_idad = 1000000;
    maior_idad = 0;
    
    do {
        printf("Digite a idade da pessoa: \n");
        scanf("%f%*c", &idade);
        
        //finalizar
        if (idade <= 0) {
            continue;
        }
        
        printf("Digite o salário ganho por ela: \n");
        scanf("%f%*c", &sal);
        printf("Digite o sexo dela: F: Feminino     M: Masculino \n");
        scanf("%c%*c", &sex);
        
        //pessoa com menor salário
        if (pessoas == 0) {
            men_sal = sal;
            men_sex = sex;
            men_idad = idade;
        }
        
        else if (men_sal >= sal) {
            men_sal = sal;
            men_sex = sex;
            men_idad = idade;
        }
        
        //quantia de mulheres que ganham ate 200
        if ((sex == 'f' || sex == 'F') && sal <= 200) {
            fem_200++;
        }
        
        //maior e menor idade
        if (maior_idad <= idade) {
            maior_idad = idade;
        }
        
        if (menor_idad >= idade) {
            menor_idad = idade;
        }
        
        // quantia de pessoas
        pessoas++;
        
        //salario total
        sal_tot = sal_tot + sal;
    }
    while (idade > 0);
    
    //saida
    printf("\nA média dos salários é de R$%0.2f", sal_tot / pessoas);
    printf("\nA maior idade do grupo é %0.0f anos \nA menor idade é %0.0f anos", maior_idad, menor_idad);
    printf("\n%0.0f mulheres ganham até R$200.00", fem_200);
    printf("\nA pessoa com menor salário é do sexo %c, tendo %0.0f anos, ganhando R$%0.2f", men_sex, men_idad, men_sal);
    
    
    return 0;
}