/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 6 de febrero de 2015, 16:01
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

/*
 * Programas que se introduce un texto acabado en doble salto de linia 
 */

int main(int argc, char** argv) {

    int i=0, car;
    int contCaracters[126-32+1]={0};
    char cadena[LONG];
   
    printf("Introduix el text acabat en PUNT: \n\n");
    while (i < LONG - 1 && (car = mygetchar()) != '.') {
        if ((car>='a' && car<='z') || (car>='A' && car<='Z')){
            if(contCaracters[car-32]==0){
                cadena[i++] = car;
                contCaracters[car-32]=1;
            }
        } else 
            cadena[i++] = car;
        
    }
    cadena[i++] = '.';
    cadena[i]=0;
    
    printf("\n\nEl text és: \n\n%s\n", cadena);

    return (EXIT_SUCCESS);

}

int mygetchar(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    printf("%c", ch);
    return ch;
}