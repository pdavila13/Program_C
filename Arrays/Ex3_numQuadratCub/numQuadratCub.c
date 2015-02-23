/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 11 de diciembre de 2014, 21:06
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

/*
 * Feu un programa que:
 * a) Creï un vector de 10 elements de tipus enter i el carregui amb les dades que entri l'usuari.
 * b) Mostri en pantalla cada element del vector junt amb el seu quadrat i el seu cub.

 */

int main(int argc, char** argv) {
    
    int i, vector[DIM];
    int quadrat, cub;
    
    for(i=0;i<DIM;i++){
        printf("Introdueix un numero enter: ");
        scanf("%d", &vector[i]); 
        
        quadrat = vector[i] * vector[i];
        cub = vector[i] * vector[i] * vector[i];
        
        printf("\nNumero: %d  Quadrat: %d  Cub: %d\n\n",vector[i], quadrat, cub);
    }
    
    return (EXIT_SUCCESS);
}

