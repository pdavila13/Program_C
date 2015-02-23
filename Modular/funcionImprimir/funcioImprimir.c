/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 13 de febrero de 2015, 12:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void imprimir(int valor);

int main(int argc, char** argv) {
    
    int i=25;
    
    imprimir(i);
    return (EXIT_SUCCESS);
}

void imprimir(int valor){
    
    int i=0;
    
    printf("%d", i);
    printf("%d", valor);
}

