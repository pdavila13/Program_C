/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 18 de febrero de 2015, 10:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * El següent programa calcula la potència n-èssima xn d'un nombre enter x.
    
    #include <stdio.h>
    void main (void){
        int n, i;
        double x, potencia;
        printf ("\nIntrodueix la base i l'exponent: ");
        scanf ("%lf %d", &x, &n);
        potencia = 1;
        for (i=0; i<n; i++)
        potencia = potencia * x;
        printf ("\nLa potencia és %lf", potencia);
    }
 
 * Modifiqueu-lo de creant una funció potencia() que rebi els valors de x i n com paràmetres
 * d'entrada i torni el resultat com sortida.
 * 
 */

double potencia(int x, int n);

int main(int argc, char** argv) {
    
    double base;
    int exp;
    
    printf ("Introdueix la base: ");
    scanf ("%lf", &base);
    //scanf ("%d", &base);
    printf ("Introdueix l'exponent: ");
    scanf ("%d", &exp);
    
    printf ("\nLa potencia és %lf\n\n", potencia(base,exp));
    //printf ("\nLa potencia és %d\n\n", potencia(base,exp));

    return (EXIT_SUCCESS);
}

double potencia(int x, int n){
    
    int i;
    double potencia;
    
    potencia = 1;
    
    for (i=0;i<n;i++)
        potencia = potencia * x;
    
    return potencia;
    
}

