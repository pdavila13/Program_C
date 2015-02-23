/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 9 de enero de 2015, 12:36
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 10
#define COLUMNES 10

/*
 * Escriviu un programa que declari una matriu de 10x10 elements de tipus enter 
 * i l'empleni de la següent forma:
        1  2  3   4  5  6  7  8  9 10
        2  4  6   8 10 12 14 16 18 20
        3  6  9  12 15 18 21 24 27 30
        ...
        10 20 30 40 50 60 70 80 90 100
 */
int main(int argc, char** argv) {
    
    int i,j;
    
    int matriu[FILES][COLUMNES];
    
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++)
            printf("%5d", matriu[i][j]=(j+1)*(i+1));
        printf("\n");
    }
    

    return (EXIT_SUCCESS);
}

