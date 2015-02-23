/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu un programa que simuli una calculadora simple. Llegeix dos enters i 
 * un caràcter. Si el caràcter és un + , s'imprimeix la suma; si és un - , 
 * s'imprimeix la diferència; si és un * , s'imprimeix el producte; si és un / , 
 * s'imprimeix el quocient; i si és un % s'imprimeix el residu.
 */

int main(int argc, char** argv) {
    
    int a, b, op, resultat;
    
    printf("Menu\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Producte\n");
    printf("4. Quocient\n");
    printf("5. Residu\n");
    printf("Elija una operacion: ");
    scanf("%d",&op); 
    
    switch(op) {
        case 1:
            printf("Introdueix dos numeros per fer la suma: \n");
            scanf("%d %d", &a, &b);
            resultat = a + b;
            printf("Operació: %d + %d = %d", a, b, resultat);      
            break;
        case 2:
            printf("Introdueix dos numeros per fer la resta: \n");
            scanf("%d %d", &a, &b);
            resultat = a - b;
            printf("Operació: %d - %d = %d", a, b, resultat);      
            break;
        case 3:
            printf("Introdueix dos numeros per fer el producte: \n");
            scanf("%d %d", &a, &b);
            resultat = a * b;
            printf("Operació: %d * %d = %d", a, b, resultat);      
            break;
        case 4:
            printf("Introdueix dos numeros per fer el quocient: \n");
            scanf("%d %d", &a, &b);
            resultat = a / b;
            printf("Operació: %d / %d = %d", a, b, resultat);      
            break;
        case 5:
            printf("Introdueix dos numeros per fer el residu: \n");
            scanf("%d %d", &a, &b);
            resultat = a % b;
            printf("Operació: %d % %d = %d", a, b, resultat);      
            break;
        default:
            printf("No ha triat cap opció: %d", op);
    }

    return (EXIT_SUCCESS);
}

