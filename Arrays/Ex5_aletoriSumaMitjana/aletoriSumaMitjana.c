/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 12 de diciembre de 2014, 11:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define DIM 15

/*
 * Feu un programa que:
 * a) Creï un vector de 15 elements de tipus enter i el carregui amb valors aleatoris 
 * (funció random()).
 * 
 * b) Calculi la suma i la mitjana dels N primers elements del vector. El valor 
 * de N es demanarà a l'usuari i no podrà ser major de 15.
 * 
 * c) Mostri els resultats obtinguts, així com el contingut del vector.
 */

int main(int argc, char** argv) {
    
    int i, vector[DIM];
    int num, suma;
    
    srandom(time(0));       // inicialitzem els num aletoris
    
    printf("***** SUMA i MITJANA *****\n");
    
    // omplir el vector
    for(i=0;i<DIM;i++){
        
        vector[i] = random()%9;         //omplir vector de 0-9
        printf("%d ", vector[i]);       //imprimeixo vector amb num aletoris   
    }
    
    // demanar num a l'usuari ha de ser menor que 15
    do{
        printf("Introdueix un numero: ");   //demanar numero a l'usuari
        scanf("%d", &num);                  //llegeixo el numero
    } while(num<1 || num>DIM);              //ha de ser major que 0 i menor que 15
    
    // sumen els N primers numero del vector
    if(num!=0){
        suma = 0;
        for(i=0;i<num;i++){
            suma = suma + vector[i];
        }
    } else
        // si no compleix la condició
        printf("\nS'ha acabat!!");   
    
    // mostren els resultats
    printf("\nSuma: %d", suma);
    printf("\nMitjana: %0.2f", (float)suma/num);
    
    return (EXIT_SUCCESS);
}

