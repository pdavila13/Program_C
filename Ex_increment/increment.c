/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que mostre per pantalla els nº de l'1 al 100
 */

int main(int argc, char** argv) {
    
    int num=1;
    
    while(num<=100){
        printf("%d\n", num);
        num = num + 1; 
    }
    
/*
    for (num = 1; num <=100; num++) {
        printf("%d\n", num);
    }
*/

    
/*
    int num=0;
    
    while(num<100){
        num++;
        printf("%d\n", num);
    }
*/

    return (EXIT_SUCCESS);
}


