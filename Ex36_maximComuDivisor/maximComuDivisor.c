/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 2 de diciembre de 2014, 20:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Un altre algorisme d'Euclides per trobar el mcd és el següent: donats els 
 * enters a i b (a>b), es divideix a per b, obtenint el quocient q1 i el residu 
 * r1. Si r1!=0, es divideix b per r1, obtenint el quocient q2 i el residu r2. 
 * Si r2!=0, es divideix r1 per r2, per obtenir q3 i r3, i així successivament. 
 * Es continua el procés fins que s'obtingui un residu 0. El residu anterior és
 * aleshores el mcd dels nombres a i b. Escriviu un programa que calculi el mcd 
 * de dos nombres.
 */

int main(int argc, char** argv) {
    
    int a, b;
    int resto;
    
    printf("Numero 1: ");
    scanf("%d", &a);
    
    printf("Numero 2: ");
    scanf("%d", &b);
    
    do {
        resto = a % b;
        
        if(resto != 0){
            a = b;
            b = resto;
        } else
            printf("M.C.D: %d", b);
    } while(resto != 0);

    return (EXIT_SUCCESS);
}

/* 
 * File:   exercici36.c
 * Author: profe
 *
 * Created on 30 de noviembre de 2014, 18:59
 * 
 * Definició: El màxim comú divisor (mcd) de dos o més nombres enters és, a excepció del signe, 
 * el major divisor possible de tots ells.
 */


/*int main(int argc, char** argv) {
    
    //Variables per guardar els números dels quals obtindrem l'mcd
    int a, b, aux, residu, acop, bcop;
    
    //Demanem a l'usuari la introducció dels números, els quals han de ser diferents
    do{
        printf("Introdueix 2 números enters diferents:\n");
        scanf("%d %d", &a, &b);
    }while(a==b);
    
    printf("\nEl màxim comú divisor d'%d i %d és ", a, b);
    
    //Si a o b són negatius els passem a positiu
    if(a<0) a=a*-1;
    if(b<0) b=b*-1;
   
    //Forcem a que sempre a>b intercanviant els seus valors en cas contrari
    if(a<b){
        aux=a;
        a=b;
        b=aux;
    }
    
    //Copiem els valors d'a i b per poder fer la solució 2
    acop=a;
    bcop=b;
    
    //Solució 1
    //Si b no val 0 fem el que diu l'algorisme d'Euclides, sinó el resultat és el valor no 0 
    //(com a>b i a>=0 i b>=0, segur que a no val 0, per tant tenim prou en mirar que b no ho sigue)
    if(b!=0){                
       //Algorisme d'Euclides
       //Obtenim el primer residu de la divisió
        residu=a%b;
        //Si el primer residu fos 0 la solució seria b
        aux=b;
        //Mentre no done 0 anem dividint el divisor pel residu
        while(residu!=0){
            //Guardem el residu anterior diferent de 0 i candidat a solució
            aux=residu;
            //Fem la nova divisió
            a=b;
            b=residu;
            residu=a%b;
        }
    }
    //En cas de que algun valgue 0 la seua suma serà el resultat
    else aux=a+b;
    
    //El resultat el tindrem sempre en aux
    printf("\n\tSolució 1: %d", aux);

    //Solució 2
    //Restaurem els valors inicials d'a i b per poder fer la solució 2
    a=acop;
    b=bcop;
    
    while(b!=0){
        residu=a%b;
        a=b;
        b=residu;
    }
    
    //El resultat el tindrem sempre en a
    printf("\n\tSolució 2: %d\n\n", a);

    return (EXIT_SUCCESS);
}*/
