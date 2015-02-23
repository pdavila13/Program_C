/* 
 * File:   main.c
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 20 de febrero de 2015, 12:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * El valor de ex es pot aproximar per la suma
 *              1 + (x1/1!) + (x2/2!) + (x3/3!) + ... + (xn/n!)
 * Escriviu un programa que agafi un valor de x com a entrada i visualitzi la suma per cadascun
 * dels valors d'1 a 10. Utilitzeu les funcions factorial() i potencia() realitzades en
 * exercicis anteriors.
 */

double elevar_e(int x);
double potencia(int x, int n);
int factorial(int n);

int main(int argc, char** argv) {
    
    int valor;
    
    printf ("Introdueix el valor: ");
    scanf ("%d", &valor);
    
    printf("\nResultat: %lf\n\n", elevar_e(valor));

    return (EXIT_SUCCESS);
}

double elevar_e(int x){
    
    int i;
    double elevat = 1;
    
    for(i=1;i<=10;i++)
        elevat = elevat + potencia(x,i) / factorial(i);      
    return elevat;
}

double potencia(int x, int n){
    
    int i;
    double potencia = 1;
    
    for (i=0;i<n;i++)
        potencia = potencia * x;
    
    return potencia;
    
}

int factorial(int n){
    
    int i;
    long factorial = 1;
    
    for (i=1; i<=n; i++)
        factorial = factorial * i;
    
    return factorial;
    
}
