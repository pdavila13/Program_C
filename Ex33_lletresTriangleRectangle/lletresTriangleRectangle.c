/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Dissenyeu un programa que produeixi la següent sortida:
 *      ZYXWVTSRQPONMLKJIHGFEDCBA
 *      YXWVTSRQPONMLKJIHGFEDCBA
 *      XWVTSRQPONMLKJIHGFEDCBA
 *      WVTSRQPONMLKJIHGFEDCBA
 *      VTSRQPONMLKJIHGFEDCBA
 *      ...
 *      CBA
 *      BA
 *      A
 */

int main(int argc, char** argv) {
    
    char i, j;
    
    //A=65 ... Z=90
    for(i=90;i>=65;i--){
        for(j=90;j>=65;j--){
            if(i>=j)
                printf("%c", j);
        }
        printf("\n");
    }
    
/* Exemple fet a classe
 
    char i, j;
    
    for(i='Z';i>='A';i--){
        for(j=i;j>='A';j--){
            printf("%c", j);
        }
        printf("\n");
    }
    printf("\n");
*/    
    
/*
    char i,j;
    
    i='Z';
    while(i>='A'){
        j=i;
        while(j>='A'){
            printf("%c", j);
            j--;
        }
        printf("\n");
        i--;
    }
    printf("\n");
*/
    
    return (EXIT_SUCCESS);
}


/* 
 * File:   execici33.c
 * Author: profe
 *
 * Created on 21 de noviembre de 2014, 13:46
 */

/*int main(int argc, char** argv) {
    
    char inicial, lletra;
    
    for(inicial='Z';inicial>='A';inicial--){
        for(lletra=inicial;lletra>='A';lletra--)
            printf("%c", lletra);
        printf("\n");   
    }
    printf("\n");   

    inicial='Z';
    while(inicial>='A'){
        lletra=inicial;
        while(lletra>='A'){
            printf("%c", lletra);
            lletra--;
        }
        printf("\n"); 
        inicial--;
    }
    printf("\n");   

    return (EXIT_SUCCESS);
}*/
