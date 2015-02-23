/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 17 de diciembre de 2014, 9:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    
    int mes;
    int diesMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    do {
        printf("Introdueix un numero de mes: ");
        scanf("%d", &mes);
    } while(mes<1 && mes>12);
    
    printf("El mes %d té %d dies", mes, diesMes[mes-1]);
    
    return (EXIT_SUCCESS);
}

