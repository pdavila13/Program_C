/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2015, 23:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 50

int mygetchar(void);

/*
 * Escriu un programa en C per reconèixer palíndroms. Un palíndrom és una frase 
 * que es llegeix igual de dreta a esquerra que d'esquerra a dreta, sense tenir 
 * en compte els espais.
 * 
 * Nota: no cal tampoc que considereu els accents o dièresis, ni els signes de 
 * puntuació, ni es poden mesclar majúscules en minúscules.
 */

int main(int argc, char** argv) {
    
    char cadena[LONG];
    int i=0, j, car, possible = 1;

    printf("\nIntroduce un texto acabado en PUNTO: \n");
    while (i<LONG-1 && (car = mygetchar()) != '.') {
        if ((car>='a' && car<='z') || (car>='A' && car<='Z'))
            cadena[i++] = car;
    }
    
    cadena[i] = 0;

    //opció 1. Un sol índex j
    /*for (j = 0; possible && j <= i - 1 - j; j++)
        possible = (cadena[j] == cadena[i - 1 - j]);*/

    //opció 2. En 2 índexos i i j
    j = 0;
    i = i - 1;
    possible = 1;
    while (possible && j <= i) {
        possible = (cadena[j] == cadena[i]);
        j++;
        i--;
    }

    if (possible) printf("\n\nÉs palíndrom!!");
    else printf("\n\nNo és palíndrom!!");

    printf("\n\n");

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
