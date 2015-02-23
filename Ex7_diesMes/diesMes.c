/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu un programa que demani el número d'un mes (1 a 12) i visualitzi el 
 * nombre de dies del mes (sense considerar si és bixest).
 */

int main(int argc, char** argv) {
    
    int _numMes;
    
    printf("Introdueix el numero del mes que vols comprovar els dies: ");
    scanf("%d", &_numMes);
    
    while (_numMes<1 || _numMes>12) {
        printf("Mes incorrecte. Introdueix un nº correcte de mes (1-12)");
        scanf("%d", &_numMes);

    }
    
    switch(_numMes){
            case 4:
            case 6:
            case 9:
            case 11: 
                printf("El mes %d té 30 dies\n", _numMes);
                break;
        case 2:
            printf("\nEl mes %d té 29 dies\n", _numMes);
            break;
        default:
            printf("\nEl més %d té 31 dies\n", _numMes);
    }
    
/*
    if (_numMes >= 1 && _numMes<= 12) {
        
        switch(_numMes){
            case 4:
            case 6:
            case 9:
            case 11: 
                printf("El mes %d té 30 dies\n", _numMes);
                break;
        case 2:
            printf("\nEl mes %d té 29 dies\n", _numMes);
            break;
        default:
            printf("\nEl més %d té 31 dies\n", _numMes);
        }

    } else
        printf("Ha de ser un numero entre 1-12.\n");
*/

    return (EXIT_SUCCESS);
}

