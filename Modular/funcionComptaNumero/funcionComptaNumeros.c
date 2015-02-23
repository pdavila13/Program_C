/* 
 * File:   main.c
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 20 de febrero de 2015, 12:03
 */

#include <stdio.h>
#include <stdlib.h>

#define DIM 100
/*
 * 
 */
int main(int argc, char** argv) {
    
    int num, valor;
    
    printf("Introdueix un text acabat en SALT DE LINIA: \n");
    scanf("%d", valor);
    
    printf("\n¿Quina lletra vols comptar?: ");
    scanf("%c", &num);
    
    printf("\nLa lletra %d apareix %d vegades.\n\n", comptaNum();

    return (EXIT_SUCCESS);
}

int comptaNum(int vector[100], int numero){
    int i, cont=0;
        
    for(i=0;i<100;i++){
        if(vector[i] == numero) 
            cont++;
    }
     
    return cont;
}

int comptaNumero(int vector[DIM], int numero){
    int i, cont=0;
        
    for(i=0;i<DIM;i++){
        if(vector[i] == numero) 
            cont++;
    }
     
    return cont;
}

int comptaNumeros(int vector[], int numero, int dimensio){
    int i, cont=0;
        
    for(i=0;i<dimensio;i++){
        if(vector[i] == numero) 
            cont++;
    }
     
    return cont;
}

