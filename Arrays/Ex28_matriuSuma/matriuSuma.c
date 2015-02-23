/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 14 de enero de 2015, 9:30
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 5
#define COLUMNES 5

/*
 * Implementeu un programa que:
    a) Creï una matriu de 5x5 i nom suma.
    b) Inicialitzi la matriu de forma que cada element contingui la suma del número 
       de la seva fila més el número de la seva columna.
    c) Mostri el contingut de la matriu en pantalla.

 */

int main(int argc, char** argv) {

    int i, j;
    
    int suma[FILES][COLUMNES];
    
    for(i=0;i<FILES;i++) {
        for(j=0;j<COLUMNES;j++)
            //suma[i][j] = i+j;
            printf("%3d", suma[i][j] = i+j);
            //printf("%3d", suma[i][j]);
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

/* 
 * File:   main.c
 * Author: profe
 *
 * Created on 3 de abril de 2013, 8:25
 */

/*
#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main(int argc, char** argv) {
    
    int suma[DIM][DIM];
    int i, j;
    
    //Omplim la matriu en la suma de la fila i la columna
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            suma[i][j]=i+j;
            printf("%4d", suma[i][j]);
        }
        printf("\n");
    }
    

    return (EXIT_SUCCESS);
}
*/