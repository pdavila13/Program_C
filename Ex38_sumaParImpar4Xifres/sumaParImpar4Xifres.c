/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 28 de noviembre de 2014, 12:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Trobar i mostrar tots els nombres de 4 xifres que compleixen la condició de 
 * què la suma de les xifres d'ordre imparell és igual a la suma de les xifres 
 * d'ordre parell.
 */

int main(int argc, char** argv) {
    
    int num=1000, un, dos, tres, quatre;
    
    for(;num<=9999;num++){
        quatre=num%10;
        un=un/10;
        tres=un%10;
        un=un/10;
        dos=un%10;
        un=un/10;
        if(un+tres == dos+quatre)
            printf("%d ", num);
    }

    return (EXIT_SUCCESS);
}

