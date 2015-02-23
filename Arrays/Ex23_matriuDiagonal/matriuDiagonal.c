/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 9 de enero de 2015, 12:47
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 15
#define COLUMNES 15

/*
   Dissenyeu un programa que
    a) Creï una matriu de 15x15 i nom diagonal.
    b) Carregui la matriu de forma que els components que pertanyen a la diagonal 
       agafin el valor 1 i la resta el valor 0.
    c) Mostri el seu contingut en pantalla.

 */

int main(int argc, char** argv) {
    
    int i,j;
    
    int diagonal[FILES][COLUMNES];
    
    // diagonal normal
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++)
        
        if (i == j)
            printf("%3d", diagonal[i][j] = 1);
        else
            printf("%3d", diagonal[i][j] = 0);
                
        printf("\n");
    }
    
    printf("\n");
    
    // diagonal invertida
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++)
        
        if (i+j == FILES-1)
            printf("%3d", diagonal[i][j] = 1);
        else
            printf("%3d", diagonal[i][j] = 0);
                
        printf("\n");
    }
    
    printf("\n");
    
    // diagonal cruzada
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++)
        
        if (i == j || i+j == FILES-1)
            printf("%3d", diagonal[i][j] = 1);
        else
            printf("%3d", diagonal[i][j] = 0);
                
        printf("\n");
    }
    
    // marc d'una matriu
    printf("\n");
    
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++) {
           if(i==0 || i==FILES-1 || j==0 || j==COLUMNES-1)
               printf("%3d", diagonal[i][j] = 1);
           else
               printf("%3d", diagonal[i][j] = 0);
        }
        printf("\n");
    }

    printf("\n");
    
    // diagonal cruzada i marco
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++) {
           if(i==0 || i==FILES-1 || j==0 || j==COLUMNES-1 || i==j || i+j==FILES-1)
               printf("%3d", diagonal[i][j] = 1);
           else
               printf("%3d", diagonal[i][j] = 0);
        }
        printf("\n");
    }
    
/*
    printf("\n");
    
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++)
            matriu[i][j]=1;                     // omplint la matriu en 1
        printf("\n");
    }
    
*/
    
    return (EXIT_SUCCESS);
}


/* 
 * File:   exemplematrius.c
 * Author: profe
 *
 * Created on 9 de enero de 2015, 11:49
 */

/*
#include <stdio.h>
#include <stdlib.h>

#define FILES 15
#define COLUMNES 15

int main(int argc, char** argv) {
    
    int i, j;
    
    int matriu[FILES][COLUMNES];
    
    
    //printf("\nMétode 2: en 2 variables\n");
    
    for(i=0;i<FILES;i++)
        for(j=0;j<COLUMNES;j++) 
            if(i==j || i+j==FILES-1 || i==0 || i==FILES-1 || j==0 || j==COLUMNES-1) matriu[i][j]=1;
            else  matriu[i][j]=0;
        
    for(i=0;i<FILES;i++){    
        for(j=0;j<COLUMNES;j++) printf("%2d", matriu[i][j]);
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}
*/