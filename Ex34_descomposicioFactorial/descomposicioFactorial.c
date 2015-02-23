/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu un programa que determini i escrigui la descomposició factorial 
 * d'un nombre positiu.
 */

int main(int argc, char** argv) {
    
    int num, divisor;
    
    num=1;
  
    while(num<2){
        printf("Introdueix un numero enter positiu: ");
        scanf("%d", &num);
    }
    
    divisor=2;
    
    printf("%d = ",num); 
    
    while(num != 1){
        if (num % divisor == 0) {
            printf("%d x ", divisor);
            num = num/divisor;
        } else
            divisor++;
    }
    printf("1\n");
    
    return (EXIT_SUCCESS);
}

/* 
 * File:   main.c
 * Author: profe
 *
 * Created on 4 de diciembre de 2013, 10:51
 */

/*int main(int argc, char** argv) {
 
    //Declaració de variables
    int num, div;    
    
    //Demanem a l'usuari un enter major que 1 i no parem fisn que l'introduix 
    printf("Introduix un enter major que 1:\n");
    scanf("%d", &num);
    while(num<=1){
            printf("Ha de ser major que 1!!\n");
            printf("Introduix un enter major que 1:\n");
            scanf("%d", &num); 
    }
    
    //Comencem a mostrar la descomposició factorial. El primer possible divisor serà el 2
    div=2;
    printf("%d = 1 ", num);
    while(num!=1){
        //Si hem trobat un divisor el mostrem i dividim el número pel divisor
        if(num%div==0) {
            printf("* %d ", div);
            num=num/div;
        }
        //Si no és divisor provem amb el següent enter
        else div++;                    
    }

    return (EXIT_SUCCESS);
}*/


