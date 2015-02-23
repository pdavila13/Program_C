/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2015, 23:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

/*
 * Fes un programa en C que llisquigue un text, acabat en punt, i compte el número 
 * de paraules que conté.
 */

int main(int argc, char** argv) {
    
    //declaro variables a utilizar
    char cadena[LONG];
    int i=0,car;
    int blanco=1,cont=0;
    
    //pido al usuario que introduzca un texto
    printf("Introduce un texto acabado en PUNTO: \n\n");
    
    //parar el programa cuando se introduzca un punto
    while (i<LONG-1 && (car=mygetchar()) != '.') {
              
        //controlo el numero de espacios en blanco introducidos
        if(blanco){
            //si la cadena no es un espacio las cuento y incremento
            if(car != ' ') {
                cont++;
                blanco=0;
            }
        } else {
            //si la cadena es un espacio ni un salto de linea
            if (car == ' ' || car == '\n') {
                blanco=1;
            }
        }
        
        //cadena vale car y incremento
        cadena[i]=car;
        i++;
    }
    
    //reinicio la cadena
    cadena[i]=0;
    
    printf("\n\nTexto introducido: \n\n%s \n", cadena);
    printf("\nNº palabras: %d", cont);
    
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

