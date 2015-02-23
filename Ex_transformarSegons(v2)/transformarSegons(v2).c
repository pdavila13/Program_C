/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Setmanes, dies, hores, minuts i segons d'un numero de segons demanat a l'usuari:
 * 1min = 60s
 * 1hora = 60min = 3600s
 * 1dia = 24hores = 86400s
 * 1setmana = 7 dies = 604800s
 */

int main(int argc, char** argv) {
    
    int numSegons;
    
    printf("Introdueix un numero per transformar: ");
    scanf("%d", &numSegons);
    
    if (numSegons>=0) {
        printf("\nSon %d minuts i %d segons: ", numSegons/60, numSegons%60);

    } 
    else
        printf("Ha de ser un numero positiu.\n");
    
/*
    int numSegons, setmana, dia, hora,minut;
    
    minut = 60;
    hora = minut * 60;
    dia = hora * 24;
    setmana = dia * 7;
    printf( "Introdueix els segons a calcular: ");
    scanf("%d", &numSegons);
    printf( "\nSón %d setmanes ", numSegons / setmana);
    numSegons = numSegons % setmana;
    printf( "i %d dies ", numSegons / dia);
    numSegons = numSegons % dia;
    printf( "i %d hores ", numSegons / hora);
    numSegons = numSegons % hora;
    printf( "i %d minuts ", numSegons / minut);
    numSegons = numSegons % minut;
    printf( "i %d segons.\n", numSegons);
*/

    return (EXIT_SUCCESS);
}



