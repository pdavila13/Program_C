/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 18 de febrero de 2015, 9:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * El següent programa calcula el factorial d'un nombre:
 
    #include <stdio.h>
    void main (){
        int n, i;
        long factorial;
        printf ("\nIntrodueix un nombre enter positiu: ");
        scanf ("%d", &n);
        factorial = 1;
        for (i=1; i<=n; i++)
        factorial = factorial * i;
        printf ("\nEl factorial de %d és: %ld", n, factorial);
    }
    
    Modifiqueu-lo transformant-lo en una funció factorial() que rebi el nombre com paràmetre
    d'entrada i torni el resultat com sortida. Utilitzeu el codi que es proporciona a continuació.
    
    #include <stdio.h>
    void main (){
        int n;
        printf ("\nIntrodueix un nombre enter positiu: ");
        scanf ("%d", &n);
        printf ("\nEl factorial de %d és: %ld", n, factorial(n));
    }
 */

int factorial(int n);

int main(int argc, char** argv) {
    
    int n;
    printf ("\nIntrodueix un nombre enter positiu: ");
    scanf ("%d", &n);
    printf ("\nEl factorial de %d és: %ld\n\n", n, factorial(n));

    return (EXIT_SUCCESS);
}

int factorial(int n){
    
    int i;
    long factorial;
    
    factorial = 1;
    
    for (i=1; i<=n; i++)
        factorial = factorial * i;
    
    return factorial;
    
}

