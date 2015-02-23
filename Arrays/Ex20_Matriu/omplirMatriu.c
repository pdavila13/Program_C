/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 9 de enero de 2015, 12:28
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 10
#define COLUMNES 10

/*
 * Escriviu un programa que declari una matriu de 10x10 elements de tipus enter 
 * i l'empleni de la següent forma:
        1 2 3 4 5 6 7 8 9 10
        11 12 13 14 15 16 17 18 19 20
        21 22 23 24 25 26 27 28 29 30
        ...
        91 92 93 94 95 96 97 98 99 100
 */
int main(int argc, char** argv) {
    
    int i,j,cont=1;         //variables
    int matriu[FILES][COLUMNES];
    
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++)
            printf("%5d", matriu[i][j]=cont++);
        printf("\n");
    }
        
    

    return (EXIT_SUCCESS);
}

/* 
 * File:   exemplematrius.c
 * Author: profe
 *
 * Created on 9 de enero de 2015, 11:49
 */

/*#include <stdio.h>
#include <stdlib.h>

#define FILES 10
#define COLUMNES 10

int main(int argc, char** argv) {
    
    int i, j, k;
    
    int matriu[FILES][COLUMNES];
    
    
    //Métode 1: en 3 variables
    printf("\nMétode 1: en 3 variables\n");
    k=1;
    for(i=0;i<FILES;i++)
        for(j=0;j<COLUMNES;j++) matriu[i][j]=k++;
        
    for(i=0;i<FILES;i++){    
        for(j=0;j<COLUMNES;j++) printf("%4d", matriu[i][j]);
        printf("\n");    
    }

    //Métode 2: en 2 variables
    printf("\nMétode 2: en 2 variables\n");
    
    for(i=0;i<FILES;i++)
        for(j=0;j<COLUMNES;j++) matriu[i][j]=(COLUMNES*i)+(j+1);
        
    for(i=0;i<FILES;i++){    
        for(j=0;j<COLUMNES;j++) printf("%4d", matriu[i][j]);
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}*/