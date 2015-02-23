/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de febrero de 2015, 10:27
 */

#include <stdio.h>
#include <stdlib.h>


//Dimensió del vector
#define DIM 15

int main(int argc, char** argv) {

    //Declaració de variables
    int i;              //Index del vector    
    int vector[DIM];    //Vector on guardarem els valors
    int n;              //Número d'elements del vector en els que treballarem
    int suma=0;           //Per guardar la suma dels n elements del vector
    int xivato=0;       //Ens avisa si hi ha valors majors que 30
    
    srandom(time(0));   //inicialitzem la llavor dels números aleatoris

    printf("\nGeneració aleatòria dels %d valors del vector:\n", DIM);
    for(i=0;i<DIM;i++)
        printf("\nL'element %d val %d.", i, vector[i]=random()%100);

    do{
        printf("\nEn quants valors vols treballar(1-%d)?:\n", DIM);
        scanf("%d", &n);       
    }while(n<1||n>DIM);
    
    for(i=0;i<n;i++)
        suma=suma+vector[i];
    
    printf("\nLa suma val %d i la mitja %.2f.\n", suma, (float)suma/n);
    
    //Mostrem els elements en valor major que 30 o un missatge de que no n'hi ha
    for(i=0;i<n;i++)
        if (vector[i]>30){
            xivato=1;   //Si hi ha algun element major que 30 ho marquem posant xivato a 1
            printf("L'element %d val %d.\n", i, vector[i]);
        }
    //Si xivato val 0 vol dir que no hi ha cap element major que 30
    if(xivato==0) printf("\nNo hi ha nombres majors que 30.\n");
        
    return (EXIT_SUCCESS);
}


