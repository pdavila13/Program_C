/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 12 de diciembre de 2014, 12:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

/*
 * Es vol implementar un programa que simuli el llançament d'un dau 100 vegades. 
 * El programa ha de comptar quantes vegades ha sortit cada número del dau. Per 
 * a realitzar la simulació heu de generar una seqüència de números aleatoris 
 * mitjançant la funció random(). A més, al començament del programa s'ha 
 * d'inicialitzar aquesta seqüència cridant a la funció randomize().
 */

int main(int argc, char** argv) {
    
    int i;
    int dau[] = {0,0,0,0,0,0};
    // int cara;
    
    srandom(time(0));       // inicialitzem els num aletoris
    
    //llanço el dau 100 vegades i guardo els valors en dau
    for(i=0;i<100;i++)
        //cara=random()%6;      // Fer una tirada
        //dau[cara] = dau[cara]+1;      //No dau[cara]++
        dau[random()%6]++; 
    
    //mostro els resultats
    for(i=0;i<6;i++)
        printf("Cara %d ha sortit %d vegades\n", i+1, dau[i]);

    return (EXIT_SUCCESS);
}

