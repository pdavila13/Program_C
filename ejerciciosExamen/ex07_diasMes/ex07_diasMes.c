/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 3 de febrero de 2015, 19:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que pide un numero de mes y visializa el numero de dias del mes
 */

int main(int argc, char** argv) {
    
    int mes;
    
    printf("Introduce el numero del mes (1-12): ");
    scanf("%d", &mes);
    
    while(mes < 1 && mes > 12){
        printf("Mes equivocat, ha de ser un numero (1-12)");
        scanf("%d", &mes);
    }
    
    switch (mes){
            case 4:
            case 6:
            case 9:
            case 11:
                printf("\nEl mes %d tiene 30 dias", mes);
                break;
            case 2:
                printf("\nEl mes %d tiene 28 dias", mes);
                break;
            default:
                printf("\nEl mes %d tiene 31 dias", mes); 
        }
    

    return (EXIT_SUCCESS);
}

