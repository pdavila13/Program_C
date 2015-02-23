/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 11 de febrero de 2015, 11:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Nosaltres mateixos podem crear les nostres llibreries per utilitzar-ho en altres
 * programes per facilitar el codi.
 */

int mostrarText(char cadena[]);

int main(int argc, char** argv) {
    
    int j;
    
    //j=mostrarText("Hola mon!!");
    
    printf("\nLa longitud de la cadena es %d \n", mostrarText("Hola mon!!"));
    //mostrarText("Hola mon!!\n\n");

    return (EXIT_SUCCESS);
}

/*
 * Una función que pase una cadena de caracteres (parametro) y la muestra
 * por pantalla
 */

int mostrarText(char cadena[]){
    int i;
    
    for(i=0;cadena[i]!=0;i++);
    
    printf("%s", cadena);
    
    return i;
}

/*void mostrarText(char cadena[100]){
    
    printf("%s", cadena);
    
}*/
