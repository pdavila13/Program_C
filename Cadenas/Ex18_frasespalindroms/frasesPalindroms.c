/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 30 de enero de 2015, 12:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 50

int mygetchar(void);

/*
 * Escriviu un programa per reconèixer palíndroms. Un palíndrom és una frase que es llegeix
 * igual de dreta a esquerra que d'esquerra a dreta. No es té en compte els espais. En aquest
 * exercici no cal tampoc que considereu els accents o dièresis.
 * 
 * Exemples de palíndroms:
 *   • A flacs ell escalfa.
 *   • Un avi salta l'atlas, i va nu.
 * 
 */

int main(int argc, char** argv) {
    
    int i, j, c, car, cont=0, trobada=1;
    
    char cadena[LONG];
    char guardaCadena[cont];
    
    printf("Introdueix un text acabat en SALT DE LINEA\n");
    
    //llegint dos caracters separats per espais o el que sigui.
    while(i<LONG-1 && (car=mygetchar())!='\n'){
        cadena[i]=car;
        i++;
    }
    cadena[i]=0;
    
    // ASII --> Majuscula 65-90 || Minuscula 97-122
    
    for(c=0;c<LONG;c++){
        if (cadena[c]!=0){
            guardaCadena[c]=cadena[c];
            cont++;
        }
    }
    
    for(i=0;i<cont;i++){
        for(j=cont-1;j>=0;j--){
            if(guardaCadena[i]!=guardaCadena[j]){
                printf("\nNo es una palídrom.");
            }    
        }
    }
    
    printf("\nÉs un palíndrom");

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

/*############################################################################*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

int main(int argc, char** argv) {

    char cadena[LONG];
    int i = 0, j, car, possible = 1;

    printf("\nIntroduix el text acabat en .:\n");
    while (i < LONG - 1 && (car = mygetchar()) != '.') {
        if ((car >= 'a' && car <= 'z') || (car >= 'A' && car <= 'Z'))
            cadena[i++] = car;

    }
    cadena[i] = 0;

    //opció 1. Un sol índex j
    for (j = 0; possible && j <= i - 1 - j; j++)
        possible = (cadena[j] == cadena[i - 1 - j]);

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
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    printf("%c", ch);
    return ch;
}*/

/*############################################################################*/

/*
    //Codi que detecta la paraula "no"
    char cadena[LONG];
    int i=0, car, dif='a'-'A', trobada=0;
   
    printf("\nIntroduix el text acabat en .:\n");
    while(!trobada && i<LONG-1 && (car=mygetchar())!='.'){
        cadena[i]=car;
        if(cadena[i]==' ' || cadena[i]=='\n')
            if(cadena[i-1]=='o' && cadena[i-2]=='n' && (i-3<0 ||(cadena[i-3]==' ' || cadena[i-3]=='\n'))) trobada=1;

        i++;
    }
    //Miro si el text acaba en "no."
    if(cadena[i-1]=='o' && cadena[i-2]=='n' && (i-3<0 ||(cadena[i-3]==' ' || cadena[i-3]=='\n'))) trobada=1;
    cadena[i]=0;
    
    if(trobada) printf("\n\nS'ha trobat la paraula!!");
    else printf("\n\nNo s'ha trobat la paraula!!");

    printf("\n\n");
    

 */