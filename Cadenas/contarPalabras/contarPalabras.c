/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 3 de febrero de 2015, 20:05
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

/*
 * Feu un programa que compti el numero de paraules que apareix dins d'un text.
 * No considereu accents ni els caràcters 'ç' i 'ñ'.
 */

int main(int argc, char** argv) {
    
    char cadena[LONG];
    int i=0,car;
    int blanc=1,cont=0;
    
    printf("Introdueix el text acabat en PUNT: \n\n");
    
    while (i<LONG-1 && (car=mygetchar()) != '.') {
              
        //controla el numero de paraules introduides
        if(blanc){
            if(car != ' ') {
                cont++;
                blanc=0;
            }
        } else {
            if (car == ' ' || car == '\n') {
                blanc=1;
            }
        }
        
        cadena[i]=car;
        i++;
    }
    
    cadena[i]=0;
    
    printf("\n\nText introduït: \n\n%s \n", cadena);
    printf("\nNº paraules: %d", cont);
    
    printf("\n");

    return (EXIT_SUCCESS);
}

int mygetchar(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    
    printf("%c",ch);
    
    return ch;
}
