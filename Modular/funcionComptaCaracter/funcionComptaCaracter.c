/* 
 * File:   main.c
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 18 de febrero de 2015, 12:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 45 

/*
 * Funció que porta els següents paràmetres: 
 *  - 1 cadena de caracters
 *  - 1 caracter
 * Retornarà el numero de vegades que apareix el caràcter dins la cadena distingint
 * majuscules de minuscules.
 */

int comptaCaracter(char cadena[], char caracter);

int main(int argc, char** argv) {
    
    char cadena[LONG], lletra;
    int i=0, car;
    
    printf("Introdueix un text acabat en SALT DE LINIA: \n");
    
    while(i<LONG-1 && (car=mygetchar())!='\n'){
        cadena[i]=car;
        i++;
    }
    cadena[i]=0;
    
    printf("\n¿Quina lletra vols comptar?: ");
    scanf("%c", &lletra);
    
    printf("\nLa lletra %c apareix %d vegades.\n\n", lletra, comptaCaracter(cadena, lletra));
    
    return (EXIT_SUCCESS);
}

//funcio que compta un caracter concret dins d'un text
int comptaCaracter(char cadena[], char caracter){
    int i, cont=0;
        
    for(i=0;cadena[i]!=0;i++){
        if(cadena[i] == caracter) 
            cont++;
    //Amb aquesta linia no caldria ficar el if
    //cont = cont + (cadena[i]==c);
    //cont += (cadena[i]==c)
    }
     
    return cont;  
}

int comptaNumero(int vector[100], int numero){
    int i, cont=0;
        
    for(i=0;i<100;i++){
        if(vector[i] == numero) 
            cont++;
    }
     
    return cont;
}

/*
int introText(char cadena[LONG], int car){

}
*/

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

/*
int main(){
    char cadena[256];
    char letra;
    int i;
    
    printf("Introduce una cadena:\t");
    gets(cadena);
    int tamano=strlen(cadena);
    
    for( i=0; i<tamano; i++)
        cadena[i]=tolower(cadena[i]);
 
    printf("¿Que letra quiere contar?");
    scanf("%c", &letra);
    
    int count=0, j;
    
    for(j=0; j<tamano; j++)
        if(cadena[j] == letra) count++;
    
    printf("La letra aparece %d veces", count);
    
    return 0;
}
*/