/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2015, 23:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

/*
 * Fes un programa en C que llisquigue un text, acabat en punt, i una paraula, i 
 * digue si la paraula està o no inclosa en el text.
 */

int main(int argc, char** argv) {
    
    //declaro variables a utilizar
    char cadena[LONG], paraula[LONG];
    int i=0, j, car, xivato=0, longParaula;
   
    printf("Introduzca un texto acabado en PUNTO: \n\n");
    
    while(!xivato && i<LONG-1 && (car=mygetchar())!='.') {
        cadena[i]=car;
        
        if(cadena[i] == ' ' || cadena[i] == '\n') {
            xivato=1;
            
            for(j=longParaula-1;xivato && j>=0;j--) 
                xivato = xivato && cadena[j-longParaula+i] == paraula[j]; 
            xivato = xivato && (j-longParaula+i<0 ||(cadena[j-longParaula+i] == ' ' || cadena[j-longParaula+i] == '\n'));
        }
        
        i++;
    }
    
    printf("\nIntroduzca la palabra a buscar: ");
    while(i<LONG-1 && (car = mygetchar()) != '\n' && car != ' ') {
        paraula[i] = car;
        i++;
    }
    paraula[i]=0;
    
    //M'anoto la longitud de la paraula a buscar
    longParaula=i;
    
    //Si no he trobat la paraula miro si el text acaba en "paraula."
    if(!xivato){
        xivato=1;
        
        for(j=longParaula-1;xivato && j>=0;j--) 
            xivato = xivato && cadena[j-longParaula+i] == paraula[j]; 
            xivato = xivato && (j-longParaula+i<0 ||(cadena[j-longParaula+i] == ' ' || cadena[j-longParaula+i] == '\n'));
    }
    
    cadena[i]=0;
    
    if(xivato) printf("\n\nS");
    else printf("\n\nNo s");

    printf("'ha trobat la paraula dins del text!!\n\n", paraula, cadena);

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

