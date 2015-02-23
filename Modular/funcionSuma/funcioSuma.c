/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 13 de febrero de 2015, 12:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int suma(int x, int y);
void suma2(int a, int b, int *c);
int sumaReturn(int a, int b);

int main(int argc, char** argv) {
    
    /*
    //Execució per la primera funció suma
    int a, b;
    
    printf("Introdueix el primer valor: ");
    scanf("%d", &a);
    printf("Introdueix el segon valor: ");
    scanf("%d", &b);
    
    printf("\n%d", suma(a,b));
    */
    
    //Execució per la segona funcion suma2
    int a=4, b=2, c;
    
    //c = sumaReturn(a,b);            //execució de funció que retorna algo
    suma2(a,b,&c);                  // execució de funció que no retorna res
    printf("\na=%d  b=%d  c=%d\n\n", a,b,c);
    
    return (EXIT_SUCCESS);
}

int suma(int x, int y){
    
    //int suma = a + b;
    //return suma; 
    return x + y;
}

//Segona funcio amb tres paramatres enters que no retorna res
void suma2(int a, int b, int *c){
    a = a/2;
    b = b -1;
    *c = a + b;
}

//Tercara funció amb dos parametres que retorna algo
int sumaReturn(int a, int b){
    a = a/2;
    b = b -1;
    return a + b;
}