/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 17 de diciembre de 2014, 10:26
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

/*
 * Afegeix al programa anterior una funció que mostri tots aquells elements majors 
 * que 30 junt amb la posició que ocupen en el vector. Si no hi ha cap ha de mostrar 
 * el següent missatge: "No hi ha nombres majors que 30".
 */

int main(int argc, char** argv) {
    
    int i, vector[DIM];
    int num, suma, xivato;
    
    srandom(time(0));       // inicialitzem els num aletoris
    
    printf("***** SUMA i MITJANA *****\n");
    
    // omplir el vector
    for(i=0;i<DIM;i++){
        
        vector[i] = random()%99;         //omplir vector de 0-99
        printf("%d ", vector[i]);       //imprimeixo vector amb num aletoris   
    }
    
    printf("\n");
    // demanar num a l'usuari ha de ser menor que 15
    do{
        printf("\nIntrodueix un numero: ");   //demanar numero a l'usuari
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
    
    //mostren els elements en valor major que 30 o un missatge de que no hi ha
    //cap numero major que 30
    for(i=0;i<num;i++) {
        if(vector[i]>30){
            xivato = 1; //Si hi ha algun element major que 30 ho marquen posant xivato a 1
            printf("\nL'element %d val %d", i,vector[i]);
        } 
        
        //Si civato val 0 vol dir que no hi cap nombre major que 30
        if(xivato==0)
            printf("\nNo hi ha nombres majors que 30.");
    }
    
    return (EXIT_SUCCESS);
}
