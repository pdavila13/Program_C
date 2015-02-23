/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de febrero de 2015, 11:44
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define FILES 5
#define COLUMNES 5

/*
 * Sumes de veïns. Donada una taula fil x col, com la de la figura adjunta, amb 
 * nombres enters, es tracta de construir una altra taula amb el contingut de 
 * totes les sumes dels seus veïns.
 */

int main(int argc, char** argv) {
    
    int matriu[FILES][COLUMNES];
    int sumaVeins[FILES][COLUMNES];
    
    int i, j, suma;
    
    //inicialitzo numeros aletoris
    srandom(time(0));
    
    printf("\n### Matriu inicial ###\n");
    //genero la matriu i l'ompleixo en numeros aletoris del 0-9
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++){
            //imprimeixo la matriu per comprobar resultat
            printf("%3d", matriu[i][j]=random()%10);
            
            //si no vull vore que aparegui la matriu no la imprimeixo
            //matriu[i][j]=random()%10
        }
        printf("\n");        
    }
    
    printf("\n");
    
    printf("\n### Suma de veïns ###\n");
    
    //genero la segona matriu i l'ompleixo amb la suma dels veïns
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++){
            //sumo les caselles que rodejen a la casella actual, i comprovo que
            //formen part de la matriu
            suma=0;
            if (i-1>=0) {
                suma = suma + matriu[i-1][j];
                if(j-1>=0) suma = suma + matriu[i-1][j-1];
                if(j+1<COLUMNES) suma = suma + matriu[i-1][j+1];
            }
            
            if (i+1 < FILES) {
                suma = suma + matriu[i+1][j];
                if(j-1>=0) suma = suma + matriu[i+1][j-1];
                if(j+1<COLUMNES) suma = suma + matriu[i+1][j+1];                
            }
            
            if(j-1>=0) suma = suma + matriu[i][j-1];
            if(j+1 < COLUMNES) suma = suma + matriu[i][j+1];
            
            //imprimeixo la matriu per comprobar resultat
            printf("%3d", sumaVeins[i][j]=suma);
        }
        printf("\n");        
    }

    return (EXIT_SUCCESS);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NFIL 5
#define NCOL 6

int main(int argc, char** argv) {

    int matriu[NFIL][NCOL], sumaVeins[NFIL][NCOL];
    int i, j, iv, jv, suma;

    srandom(time(0));

    printf("\n\nMatriu inicial\n\n");

    for (i = 0; i < NFIL; i++) {
        for (j = 0; j < NCOL; j++)
            printf("%2d", matriu[i][j] = random() % 10);
        printf("\n");
    }

    printf("\n\nSuma Veïns v1\n\n");
    for (i = 0; i < NFIL; i++) {
        for (j = 0; j < NCOL; j++) {
            //Sumem les caselles que rodejen a la casella actual, comprovant que formen part de la matriu
            suma = 0;
            if (i - 1 >= 0) {
                suma += matriu[i - 1][j]; //suma=suma+matriu[i-1][j];
                if (j - 1 >= 0) suma += matriu[i - 1][j - 1];
                if (j + 1 < NCOL) suma += matriu[i - 1][j + 1];
            }
            if (i + 1 < NFIL) {
                suma += matriu[i + 1][j];
                if (j - 1 >= 0) suma += matriu[i + 1][j - 1];
                if (j + 1 < NCOL) suma += matriu[i + 1][j + 1];
            }
            if (j - 1 >= 0) suma += matriu[i][j - 1];
            if (j + 1 < NCOL) suma += matriu[i][j + 1];
            printf("%3d", sumaVeins[i][j] = suma);
        }
        printf("\n");
    }

    printf("\n\nSuma Veïns v2\n\n");
    for (i = 0; i < NFIL; i++) {
        for (j = 0; j < NCOL; j++) {
            //Sumem les caselles de la submatriu que rodeja a la casella actual, inclosa ella mateixa 
            suma = 0;
            for (iv = i - 1; iv <= i + 1 && iv != NFIL; iv++)
                for (jv = j - 1; jv <= j + 1 && jv != NCOL; jv++)
                    if (iv >= 0 && jv >= 0) suma = suma + matriu[iv][jv];
            //Com que també hem sumat la casella i, j actual la restem de la suma de veïns    
            suma = suma - matriu[i][j];
            printf("%3d", sumaVeins[i][j] = suma);
        }
        printf("\n");
    }

    printf("\n\n");

    return (EXIT_SUCCESS);
}
*/