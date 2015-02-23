/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 28 de noviembre de 2014, 12:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Realitzeu un programa que sol·liciti a l'usuari un valor no negatiu n i 
 * visualitzi la següent sortida:
            1 2 3 ... n-1 n
            1 2 3 ... n-1
            ...
            1 2 3
            1 2
            1
 */

int main(int argc, char** argv) {
    
    // Programa fet pel professor
    int num=0, i;
    
    do{
        printf("Introdueix un número de línies major que cero:\n");
        scanf("%d", &num);
    }while(num<=0);
    printf("\n");
    
    for(;num>=1;num--){
        for(i=1;i<=num;i++){
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");
    
    
/*
    // Programa fer per mi
    int i;
    int nlinies, cont;
    
    do{
        printf("Introdueix un número de línies major que 0:\n");
        scanf("%d", &nlinies);
    }while(nlinies<=0);
    printf("\n");
    
    for(i=1;nlinies>0;nlinies--){
        for(cont=1;cont<=nlinies;cont++){
            printf("%d", cont);
        }
        printf("\n");
    }
    
    printf("\n");
*/

    return (EXIT_SUCCESS);
}

