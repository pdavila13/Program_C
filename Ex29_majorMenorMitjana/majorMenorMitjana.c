/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 25 de noviembre de 2014, 20:07
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 5

/*
 * Escriviu un programa que calculi i visualitzi el més gran, el més petit i la 
 * mitjana de N nombres enters. El valor de N se sol·licitarà al principi del 
 * programa i els nombres seran introduïts per l'usuari. Els nombres poden ser 
 * tant positius com negatius.
 */

int main(int argc, char** argv) {
    
    int i, num[DIM];
    int major, menor, suma;
    float mitjana;
    
    suma = 0;
    
    printf("Introdueix numeros: \n");
    
    for(i=0;i<DIM;i++){
        scanf("%d", &num[i]);
        suma = suma + num[i];
        
        if(num[i]>major){
            major = num[i];
            //printf("\nNº major: %d", major);
        }

        if(num[i]<menor){
            menor = num[i];
            //printf("\nNº menor: %d", menor);
        }  
    }
    
    mitjana = suma/i;
    
    printf("\nSuma: %d", suma);
    printf("\nMitjana: %2f", mitjana);
    printf("\nNº major: %d", major);
    printf("\nNº menor: %d", menor);
    
/*
    int i, n, num, suma=0; // i = comptador
    float mitjana;
    
    printf("Introdueix un nombre: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        printf("Numero %d: ", i);
        scanf("%d", &num);
        suma = suma + num;
    }
    
    mitjana = suma / n;
    
    printf("La mitjana dels %d numeros es: %3f", n, mitjana);
*/
    
    printf("\n\n");

    return (EXIT_SUCCESS);
}

/*
 SOLUCIÓ 1: tractem de forma especial el primer valor però dins del bucle for

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //Declaració de variables
    int i, quantitat, max, suma, min, num;

    //Demanem la quantitat de números a introduir forçant a que sigue un valor major que 0 usant un do...while
    do{
        printf("Quants números vols introduïr?\n");
        scanf("%d",&quantitat);
    }while(quantitat<1);

    //Inicialitzem a 0 la variable que usarem per sumar els valors i que al final mos servirà per calcular la mitjana
    suma=0;

    //Comença el bucle for que s'executarà n vegades
    for (i=1;i<=quantitat;i++)
    {
        //Demanem un nou valor
        printf("Escriu un número:\n");
        scanf("%d",&num);

        //Tractem el primer valor apart posant la condició i==1. En este cas el maxim i el minim seran este primer valor.
        if (i==1)
        {
            max=num;
            min=num;
        }
        else {  //Si no és el primer valor el comparem amb el maxim i minim per si l'actual ha de passar a ser algun d'ells
            if (num<min)
               min=num;
            if (num>max)
               max=num;
        }
        //Sumem el valor actual a la variable on guardem la suma de tots els valors introduïts
        suma=suma+num;
    }

    //Mostrem els resultats
    printf("El Màxim és %d\n",max);
    printf("El Mínim és %d\n",min);
    printf("La mitjana és %.2f\n",suma*1.0/quantitat);    //També podríem posar: printf("La mitjana és %.2f\n",(float)suma/quantitat);

    return (EXIT_SUCCESS);
}

SOLUCIÓ 2: tractem de forma especial el primer valor però abans del bucle for que s'executarà una vegada menys

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //Declaració de variables
    int i, quantitat, max, suma, min, num;

    //Demanem la quantitat de números a introduir forçant a que sigue un valor major que 0 usant un do...while
    do {
        printf("Quants números vols introduïr?\n");
        scanf("%d",&quantitat);
    }while(quantitat<1);

    //Demanem el primer valor. En este cas el maxim i el minim i la suma seran este primer valor.
    printf("Escriu un primer número:\n");
    scanf("%d",&num); 
    max=min=suma=num;

    //Comença el bucle for que s'executarà quantitat-1 vegades
    for (i=1;i<quantitat;i++)
    {
        //Demanem un nou valor
        printf("Escriu un número:\n");
        scanf("%d",&num);

        //Comparem l'actual valor amb el maxim i minim per si ha de passar a ser algun d'ells
        if (num<min)
           min=num;
        if (num>max)
            max=num;
           
        //Sumem el valor actual a la variable on guardem la suma de tots els valors introduïts
        suma=suma+num;
    }

    //Mostrem els resultats
    printf("El Màxim és %d\n",max);
    printf("El Mínim és %d\n",min);
    printf("La mitjana és %.2f\n",suma*1.0/quantitat);     // o (float)suma/quantitat

    return (EXIT_SUCCESS);
}
 
 */

