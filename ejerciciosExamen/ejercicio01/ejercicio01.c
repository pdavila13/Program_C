/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2015, 22:21
 */

#include <stdio.h>
#include <stdlib.h>

#define DIM 50
/*
 * Escriu un algorisme en pseudocodi que primer pregunte a l'usuari quants números enters vol
 * introduïr (ha de forçar a que sigue un valor major que 0) i a continuació llisquigue els números i
 * escrigue quin ha sigut el valor més gran i quin el més menut dels llegits. 
 * 
 * Nota: tingues en compte que, a priori, no sabem quin pot ser el número més gran 
 * ni el més menut que mos poden introduïr.
 */

int main(int argc, char** argv) {
    
    //declaracion de variables a utilizar
    int i, num, max, min;
    int vector[DIM];
    
    //obligo al usuario que introduzca un numero positivo
    do {
        printf("Quantos numero quieres introducir? ");
        scanf("%d", &num);
    } while(num<1 || num>DIM);
    
    //pedir al usuario que introduzca numeros
    printf("\nIntroduce los %d numeros enteros: ", num);
    scanf("%d", &vector[0]);
    
    //copio valor a variables
    max = min = vector[0];
    
    //recorro el vector y guardo numeros
    for(i=1;i<num;i++){
        printf("\nIntroduce numeros: ");
        scanf("%d", &vector[i]);
        
        //guardo el numero mayor y menor
        if(vector[i] > max) max = vector[i];
        if(vector[i] < min) min = vector[i];
    }
    
    //muestro resultados
    printf("\nMáximo: %d", max);
    printf("\nMínimo: %d", min);

    return (EXIT_SUCCESS);
}

