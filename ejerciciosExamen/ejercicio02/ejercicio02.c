/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2015, 22:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define DIM 100

/*
 * Escriu un programa en C que primer demane a l'usuari la introducció de la dimensió (s'ha de forçar a
 * que estigue entre 1 i DIM) per a una matriu quadrada de dimensió màxima DIM (valor constant) i
 * després la òmpligue aleatòriament en lletres minúscules. Nota: recordeu que el codi ASCII de la
 * lletra 'a' és 97 i de la 'z' és 122, i que a l'alfabet que usa l'ordenador només hi ha 25 lletres
 * minúscules.
 */

int main(int argc, char** argv) {
    
    //declaro variables a utilizar
    int i, j, num;
    char matriu[DIM][DIM];
    
    //obligo al usuario que el numero sea entre 1 y 100
    do {
        printf("Introduce la dimensión de la matriz entre (1-%d): ", DIM);
        scanf("%d", &num);
    } while(num<1 || num>DIM);
    
    //inicializo numeros aletorios
    srandom(time(0));
    
    //recorro la matriz y la voy incrementando
    for(i=0;i<num;i++){
        for(j=0;j<num;j++)
            //imprimo resultado junto con la operación a realizar
            printf("%3c", matriu[i][j] = 'a' + rand() % (('z' - 'a') + 1));
        printf("\n");
    }
    printf("\n");
    
    return (EXIT_SUCCESS);
}

