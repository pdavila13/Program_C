/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 21 de enero de 2015, 10:57
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 45

int mygetchar(void);

/*
 * Aquest programa conta el numero d'una lletra especifica. 
 */

int main(int argc, char** argv) {
    
    //declarar una cadena o caracter
    //char cadena[LONG]="Hola, mi primera cadena";
    char cadena[LONG];//={24,25,56,'a',',',' ','s'};
    int i=0, car;
    
    printf("Introdueix el nom de l'usuari\n");
    
    //llegint dos caracters separats per espais o el que sigui.
    while(i<LONG-1 && (car=mygetchar())!='\n'){
        cadena[i]=car;
        i++;
    }
    cadena[i]=0;
    
    //llegir una cadena, important les cadenes no porten & com els enters.
    //scanf("%s", cadena);
    
    printf("El nom de l'usuari introduix es %s\n", cadena);

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

