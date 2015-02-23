/* 
 * File:   main.c
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 18 de febrero de 2015, 12:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Funció que té dos paràmetres d'entrada, enters passats per valor. La funció
 * retornarà 1 si ambos numeros tenen el mateix numero de xifres i 0 si no.
 */
int numXifres(int n);
int igualNumXifres(int n, int m);

int main(int argc, char** argv) {
    
    int a, b;
    
    printf("Introdueix el primer numero enter: ");
    scanf("%d", &a);
    printf("Introdueix el segon numero enter: ");
    scanf("%d", &b);
    
    printf("\n%d\n\n", igualNumXifres(a,b));

    return (EXIT_SUCCESS);
}

//Funcio que retorna el numero de xifres de un numero introduït per teclat.
int numXifres(int n){
    int i;          // comptador
    
    //El comptador "i" sera el que porte la suma de les divisions realitzades
    for(i=1;n/10!=0;i++)
        n = n/10;   //divisio
    
    return i;
}

int igualNumXifres(int n, int m){
    
    if(numXifres(n)==numXifres(m)){
        return 1;
    } else
        return 0;
   
    //return numXifres(n)==numXifres(m);
}