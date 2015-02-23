/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 3 de diciembre de 2014, 10:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu un programa que mostri tots els nombres perfectes fins a un nombre 
 * donat llegit del teclat.
 * 
 * Un nombre perfecte és un enter positiu, que és igual a la suma de tots els 
 * enters positius (exclòs ell mateix) que són divisors del nombre. El primer 
 * nombre perfecte és 6, ja que els divisors de 6 són 1, 2, 3 i 1 + 2 + 3 = 6.
 * 
   1. Demanar un numero enter >= 6
   2. Mostrar els seus divisors (Executant-lo a ell mateix)
   3. Sumar els divisors trobats i guardar la suma a una variable 
   4. Dir si el num es perfecte o no
 */

int main(int argc, char** argv) {
    
   //Variables per guardar els números dels quals obtindrem l'mcd
    int limit, num, suma, divisor;
    
    //Demanem a l'usuari la introducció dels números, els quals han de ser diferents
    do{
        printf("Introdueix un número enter major que 5:\n");
        scanf("%d", &limit);
    }while(limit<6);
    
    printf("Els números perfectes entre 1 i %d són:\n", limit);


    num=6;
    while(num<=limit){
        suma=0;
        divisor=1;
        while(divisor<num){
            if(num%divisor==0) suma=suma+divisor;
            divisor++;
        }
        if(num==suma) printf("%d\n", num);
        num++;
    }
        
    
    
/*
    num=0;
    
    do {
        printf("Introdueix un numero: ");
        scanf("%d", &num);
    } while (num<6);
    
    suma = 0;
    
    for(divisor=1;divisor<num;divisor++){
        if(num%divisor == 0)
            suma = suma + divisor;   
            printf("%d ", divisor);          
    }
    
    if(suma == num){
        printf("\nEl numero %d és perfecte.", num);
    } else
        printf("\nEl numero %d no és perfecte", num);
*/

    return (EXIT_SUCCESS);
}

/* 
 * File:   exercici43.c
 * Author: profe
 *
 * Created on 30 de noviembre de 2014, 18:59
 * 
 * Definició: El màxim comú divisor (mcd) de dos o més nombres enters és, a excepció del signe, 
 * el major divisor possible de tots ells.
 */

/*int main(int argc, char** argv) {
    
    //Variables per guardar els números dels quals obtindrem l'mcd
    int limit, num, suma, divisor;
    
    //Demanem a l'usuari la introducció dels números, els quals han de ser diferents
    do{
        printf("Introdueix un número enter major que 5:\n");
        scanf("%d", &limit);
    }while(limit<6);
    
    printf("Els números perfectes entre 1 i %d són:\n", limit);


    num=6;
    while(num<=limit){
        suma=0;
        divisor=1;
        while(divisor<num){
            if(num%divisor==0) suma=suma+divisor;
            divisor++;
        }
        if(num==suma) printf("%d\n", num);
        num++;
    }
    return (EXIT_SUCCESS);
}*/

