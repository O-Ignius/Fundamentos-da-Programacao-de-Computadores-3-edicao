#include <stdio.h>
#include <stdlib.h>

int main() {
#define tam 12

    int i, j, menu1, menu2, num[tam], lugares[tam], consulta, stop;
    char origem[tam], destino[tam], consult;

    for (i = 0; i < tam; i++) {
        //coleta de dados
        printf("Digite a origem do vôo: \n");
        scanf("%c%*c", &origem[i]);
        printf("Digite o destino do vôo: \n");
        scanf("%c%*c", &destino[i]);
        printf("Digite o número do vôo: \n");
        scanf("%d%*c", &num[i]);
        printf("Digite o número de assentos livres: \n");
        scanf("%d%*c", &lugares[i]);
    }


    do {
        printf("\nEscolha uma opção: \n");
        printf("1: Consultar \n2: Efetuar reserva \n3: Sair \n");
        scanf("%d%*c", &menu1);

        //finalizar
        if (menu1 == 3) {
            continue;
        }//consulta
        else if (menu1 == 1) {
            //menu consulta
            do {
                printf("\nComo consultar: \n");
                printf("1: Por número de vôo \n2: Pela origem do vôo \n3: Pelo destino \n4: Finalizar consulta\n");
                scanf("%d%*c", &menu2);

                //finalizar consulta
                if (menu2 == 4) {
                    continue;
                }// por numero de voo
                else if (menu2 == 1) {
                    printf("\nQual o número do vôo? \n");
                    scanf("%d%*c", &consulta);

                    //setar i para 0
                    i = 0;

                    //repetir até achar ou não o vôo
                    do {
                        if (num[i] == consulta) {
                            printf("O vôo #%d origina em %c e encerra em %c", num[i], origem[i], destino[i]);
                            break;
                        } else {
                            i++;
                        }
                    } while (i < tam);

                    if (i >= tam) {
                        printf("\nO vôo é invalido ou não consta na base de dados, verifique o número digitado por favor! \n");
                    }
                }// por origem
                else if (menu2 == 2) {
                    for (i = 0; i < tam; i++) {
                        printf("\nQual a origem do vôo \n");
                        scanf("%c%*c", &consult);
                    }


                    //repetir até achar ou não o vôo
                    do {
                        //definir parada
                        stop = 0;

                        for (i = 0; i < tam; i++) {
                            if (origem[i] == consult) {
                                printf("O vôo #%d origina em %c e encerra em %c", num[i], origem[i], destino[i]);
                                stop++;
                                continue;

                            }
                        }

                        if (i == (tam - 1) && stop == 0) {
                            break;
                        }
                    } while (stop < 1);

                    if (stop == 0) {
                        printf("\nO vôo é invalido ou não consta na base de dados, verifique o número digitado por favor! \n");
                        continue;
                    }
                }//por destino
                else if (menu2 == 3) {
                    for (i = 0; i < tam; i++) {
                        printf("\nQual a origem do vôo \n");
                        scanf("%c%*c", &consult);
                    }


                    //repetir até achar ou não o vôo
                    do {
                        //definir parada
                        stop = 0;

                        for (i = 0; i < tam; i++) {
                            if (destino[i] == consult) {
                                printf("O vôo #%d origina em %c e encerra em %c", num[i], origem[i], destino[i]);
                                stop++;
                                continue;
                            }

                            if (i == (tam - 1) && stop == 0) {
                                break;
                            }
                        }
                    } while (stop < 1);

                    if (stop == 0) {
                        printf("\nO vôo é invalido ou não consta na base de dados, verifique o número digitado por favor! \n");
                        continue;
                    }
                }
            } while (menu2 != 4);
        }//Reserva
        else if (menu1 == 2) {
            printf("\nQual o número do vôo a ser reservado? \n");
            scanf("%d", &consulta);

            //setar variavel i para 0
            i = 0;

            do {
                if (num[i] == consulta) {
                    if (lugares[i] > 0) {
                        printf("\nReserva confimada para o vôo %d", num[i]);
                        break;
                    } else if (lugares[i] == 0) {
                        printf("\nVôo lotado! \n");
                        break;
                    }
                } else {
                    i++;
                }
            } while (i < tam);

            if (i >= tam) {
                printf("\nO vôo é invalido ou não consta na base de dados, verifique o número digitado por favor! \n");
            }
        }
    } while (menu1 != 3);



    return 0;
}