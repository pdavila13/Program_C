/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 17 de diciembre de 2014, 11:55
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
 * Escriviu un programa que llegeixi una llista de nombres reals, els emmagatzemi en un vector i
 * calculi i imprimeixi la suma, el valor màxim, el valor mínim i el valor mitjà de tots ells. La
 * grandària de la llista es coneixerà abans, i en cap cas excedirà de 100.
 * 
 * Es tracta de modificar el programa de l'exercici 7 de manera que mostre un menú en les següents opcions:

    1. Introduix la dimensió del vector.
    2. Ompli el vector.
    3. Mostra suma, mitja, màxim i mínim.
    4. Surt del programa.
  
 * Per fer el menú és OBLIGATORI usar una instrucció switch. Heu de controlar 
 * que se seguisque un ordre lògic, per exemple, no podrem omplir el vector si 
 * encara no hem fixat la seua dimensió, no podem calcular res si encara no hem 
 * omplit el vector en valors, ... Mostreu missatges d'advertiment quan passen 
 * coses d'este tipo.
 */

int main(int argc, char** argv) {
    
    int i, num, op, xivato;
    int suma=0, max, min;
    int vector[DIM];
    
    do{
        printf("\n");
        printf("########################################\n");
        printf("# 1. Introdueix la dimensió del vector #\n");
        printf("# 2. Ompli el vector                   #\n");
        printf("# 3. Mostra suma, mitja, màxim i mínim #\n");
        printf("# 4. Surt del programa                 #\n");
        printf("########################################\n");
        printf("\n");

        printf("Tria una opció: ");
        scanf("%d", &op);
        
        printf("\n");
        
        switch (op){
            
            case 1: //Demanen la dimensió del vector                    
                do{
                    printf("De quina dimensió vols que sigui el vector (1-100)? ");
                    scanf("%d", &num);                  
                } while(num<1 || num>DIM);
                
                break;
            case 2: //llegint numeros per omplir el vector
                
                printf("Introduix numeros: ");
                scanf("%d", &vector[0]);
                
                suma = max = min = vector[0];
                
                for(i=1;i<num;i++){
                    printf("Introduix numeros: ");
                    scanf("%d", &vector[i]);
                    
                    suma = suma + vector[i];
                    
                    if(vector[i] > max) {
                        max = vector[i]; 
                    }

                    if(vector[i] < min) {
                        min = vector[i];
                    }  
                }
                
                printf("\n");
                
                break;
                
            case 3: //Mostrem els resultats
                               
                printf("\nSuma: %d", suma);
                printf("\nMàxim: %d", max);
                printf("\nMínim: %d", min);
                printf("\nMitjana: %0.1f", (float)suma/num);
                
                printf("\n");
                
                break;
            case 4: //sortint del programam
                
                printf("\nS'ha acabat el programa");
                break;
                
            default:
                printf("\nOpció incorrecta: %d", op);  
        }
    }while(op!=4);  

    return (EXIT_SUCCESS);
}

