/* 
 * File:   main.c
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 18 de febrero de 2015, 10:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu una funció que rebi com a paràmetre d'entrada un nombre enter i torni com a resultat
 * el nombre de xifres del nombre. Per a això, considereu que, donat un nombre qualsevol, com
 * per exemple el 173, es té que 173/10=17 (totes les xifres excepte l'última). Hi haurà que repetir
 * aquest procés fins que el nombre resultant de la divisió tingui una sola xifra.
 */
int numXifres(int n);

int main(int argc, char** argv) {
    
    int num;
    
    printf("Introdueix un numero enter: ");
    scanf("%d", &num);
    
    printf("\nNumero de xifres: %d\n\n", numXifres(num));

    return (EXIT_SUCCESS);
}

//Funcio que retorna el numero de xifres de un numero introduït per teclat.
int numXifres(int n){
    int i;          // comptador
    
    //El comptador "i" sera el que porte la suma de les divisions realitzades
    for(i=1;n/10!=0;i++)
        n = n/10;   //divisio
    
    return i;
    
    //Exemple fet a classe i corregit pel professor
    /*
    if(n==0) 
        return 1;
    if(n<0) 
        n = n * -1;
    
    for(i=0;n>0;i++)
        n = n / 10;
    return i;
    */
}

