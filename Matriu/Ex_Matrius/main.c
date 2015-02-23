/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 9 de enero de 2015, 11:56
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 2
#define COLUMNES 3
#define PROFUNDITAT 2
/*
 * 
 */
int main(int argc, char** argv) {
    
    int i, j, k; //declarem els dos indexos
    

/*
    int matriu[FILES][COLUMNES]; = {
                                        {1,2,3,4},
                                        {5,6,7,8},
                                        {9,10,11,12}
                                  };
*/

    //{1,2,3,4,5,6,7,8,9,10,11,12};
    
    //matriu[1][2] = 34;  //accedeix a la matriu i aplica el valor 
    
    // recorre les files
    
    
/*
    for(i=0;i<FILES;i++) {
        // recorre les columnes
        for(j=0;j<COLUMNES;j++)
            printf("%3d ", matriu[i][j]);
        printf("\n");
    }
    
*/
    //Segon example
    
    printf("Introdueix el contingut del cub: ");
   
    int cub[FILES][COLUMNES][PROFUNDITAT];
    
    // omplir el cub
    for(i=0;i<FILES;i++) {
        // recorre les columnes
        for(j=0;j<COLUMNES;j++)
            for(k=0;k<PROFUNDITAT;k++)
                scanf("%d ", &cub[i][j][k]);
    }
    
    // mostrar
    for(i=0;i<FILES;i++) {
        // recorre les columnes
        for(j=0;j<COLUMNES;j++){
            for(k=0;k<PROFUNDITAT;k++)
                printf("%3d ", cub[i][j][k]);
            printf("\n");
        }      
    }
    
    return (EXIT_SUCCESS);
}

