/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de febrero de 2015, 10:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int dau[] = {0, 0, 0, 0, 0, 0}, //simulem les 6 cares del dau en un vector de 6 elements. Inicialment no ha sortit cap cara, per tant les posem a 0
    i, //índex del vector
    cara; //cara que ha sortit a la jugada
    srandom(time(0)); //inicialitzem la llavor dels números aleatoris


    //Tirem el dau 100 vegades
    for (i = 0; i < 100; i++){
        cara=random() % 6;
        dau[cara]=dau[cara]+1; //cada vegada que tirem el dau incrementem en un la cara que ha sortit
    }
    
    //Mostrem les sis cares del dau
    for (i = 0; i < 6; i++)
        printf("La cara %d ha sortit %d vegades\n", i + 1, dau[i]); //mostrem l'índex més 1 (i+1) per a que mostre de la cara 1 a la 6, enlloc de 0 a 5 (més realiste)

    return (EXIT_SUCCESS);
}

