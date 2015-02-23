/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 2 de diciembre de 2014, 20:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Per trobar el màxim comú divisor (mcd) de dos nombres s'utilitza l'algorisme 
 * d'Euclides. Donats dos enters a i b, es mira quin és major. Si el major és a, 
 * se substitueix aquest per a-b; si el major és b, se substitueix aquest per 
 * b-a, i així successivament fins que a=b. Aleshores, a és el mcd. Escriviu un 
 * programa que calculi el mcd de dos nombres.
 */

int main(int argc, char** argv) {
    
    int a, b;
    
    printf("Numero 1: ");
    scanf("%d", &a);
    
    printf("Numero 2: ");
    scanf("%d", &b);
    
    while(a != b){
        if(a > b){
            a = a - b;
        } else
            b = b - a;
    }
    
    printf("M.C.D: %d", a);

    return (EXIT_SUCCESS);
}


/* 
 * File:   exercici35.c
 * Author: profe
 *
 * Created on 30 de noviembre de 2014, 18:59
 * 
 * Definició: El màxim comú divisor (mcd) de dos o més nombres enters és, a excepció del signe, 
 * el major divisor possible de tots ells.
 */

/*int main(int argc, char** argv) {
    
    //Variables per guardar els números dels quals obtindrem l'mcd
    int a, b;
    
    //Demanem a l'usuari la introducció dels números, els quals no poden ser ambdós igual a 0
    do{
        printf("Introdueix 2 números enters (algun diferent de 0):\n");
        scanf("%d %d", &a, &b);
    }while(a==0 && b==0);
    
    printf("\nEl màxim comú divisor d'%d i %d és ", a, b);
    
    //Si a o b són negatius els passem a positiu
    if(a<0) a=a*-1;
    if(b<0) b=b*-1;

    //Si cap dels 2 val 0 fem el que diu l'algorisme d'Euclides, sinó el resultat és el valor no 0
    if(a!=0 && b!=0){

        //Algorisme d'Euclides
        while(a!=b)
            if(a>=b) a=a-b;
            else b=b-a;            
    }
    //En cas de que algun valgue 0 la seua suma serà el resultat
    else a=a+b;
    
    //El resultat el tindrem sempre en a
    printf("%d\n", a);

    return (EXIT_SUCCESS);
}*/
