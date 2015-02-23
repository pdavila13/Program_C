/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 28 de noviembre de 2014, 12:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Calculeu tots els nombres de tres xifres de forma que la suma dels cubs de 
 * les xifres sigui igual al valor del nombre.
 * 
 *                  abc = a*a*a + b*b*b + c*c*c
        1. Bucle que tracte del nº 100 – 999
        2. Dins del bucle
            2.1 Obtenir les 3 xifres del numero
            2.2 Fer l'operació i comprovar si es compleix la condició 
                2.2.1 Si es compeix mostren el numero
                2.2.2 Si no, no mostren res
 */

int main(int argc, char** argv) {
    
    int i=100, un, dos, tres;
    
    for(;i<=999;i++){
        un=i;
        tres=un%10;
        un=un/10;
        dos=un%10;
        un=un/10;
        
        if(i==un*un*un+dos*dos*dos+tres*tres*tres) 
            printf("\n%d", i);            
    }
    printf("\n");
    
/*
    int num=100, guarda_valor, xifra1, xifra2, xifra3;
    
    for(;num<=999;num++) {
        guarda_valor = num;
        xifra3 = num % 10;
        guarda_valor = num / 10;
        xifra2 = guarda_valor % 10;
        xifra1 = xifra1 / 10;
        
        if(num == xifra1*xifra1*xifra1+xifra2*xifra2*xifra2+xifra3*xifra3*xifra3)
            printf("%d", num);
    }
*/

    return (EXIT_SUCCESS);
}

