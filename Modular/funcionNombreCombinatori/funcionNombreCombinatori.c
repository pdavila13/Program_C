/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 18 de febrero de 2015, 9:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Utilitzant la funció creada en l'apartat anterior, escriviu una funció que calculi el nombre
 * combinatori donat por la fórmula següent:
 * 
 *                              (n m) = (n!/m!(n-m)!)
 * 
 * on ha de complir-se que n > m. El prototip de la funció serà:
 * int nombre_combinatori (int n, int m);
 * 
 */

int factorial(int n);
int nombreCombinatori(int n, int m);

int main(int argc, char** argv) {
    
    int n, m;
    int result;
    int res;            //variable extra del professor
    
    printf("Introdueix el primero numero: ");
    scanf("%d", &n);
    printf("\nIntrodueix el segon numero numero: ");
    scanf("%d", &m);
    
    result = nombreCombinatori(n,m);
    
    // Fet pel professor
    if((res=nombreCombinatori(int n, int m))!=-1)
        printf("\nNumero combinatori = %d\n\n", result);
    else
        printf("Error: El primer nombre ha de ser major que la segona.");
    
    /*
    //Exemple fet per mi
    result = nombreCombinatori(n,m);
    printf("\nNumero combinatori = %d\n\n", result);
     */

    return (EXIT_SUCCESS);
}

//funcion que calcular el nombre combinatorio de un numero
int nombreCombinatori(int n, int m){
    
    // Fet pel professor
    if(n>m && n>0 && m>0)
        return (int) factorial(n) / (factorial(m) * factorial(n-m));
    return -1
   
    //return factorial(n) / (factorial(m) * factorial(n-m));                        //Execució meva
}

//funcion que calcula la factorial de un numero
int factorial(int n){
    
    int i;
    long factorial;
    
    factorial = 1;
    
    for (i=1; i<=n; i++)
        factorial = factorial * i;
    
    return factorial;
    
}