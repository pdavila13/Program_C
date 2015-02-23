/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 13 de febrero de 2015, 11:59
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
 * funcion: demanarValor
 *      4 parametres
 *          - pregunta
 *          - resposta error
 *          - valor inicial
 *          - valor final
 *      Retorna el valor dins l'interval
 */

int demanarValor(char pregunta[], char respostaError[], int valorInicial, int valorFinal);

int main(int argc, char** argv) {
    
    int j;
    
    j = demanarValor("Introdueix un enter positiu: ", "\nT'he dit un enter positiu!!\n\n", 1, 100000000);
    
    printf("\nHas introduït un %d\n\n", j);

    return (EXIT_SUCCESS);
}

int demanarValor(char pregunta[], char respostaError[], int valorInicial, int valorFinal){
    
    int dim, temp;
    
    if(valorInicial>valorFinal){
        temp=valorInicial;
        valorFinal=valorInicial;
    }
    
    //obligo demanar un numero positiu entre 1-DIM
    do{
        printf(pregunta);
        scanf("%d", &dim);
        if(dim < valorInicial || dim > valorFinal)
            printf(respostaError);
    } while(dim < valorInicial || dim > valorFinal);
    
    return dim;
    
}
