/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Realitzeu un programa que mostri els següents dibuixos per a un nombre de 
 * línies variable (a l'exemple, nombre de línies 10).
 */

int main(int argc, char** argv) {
    
    int i;
    int nlinies, cont, copia_nlinies;
    
    do{
        printf("Introdueix un número de línies major que 0:\n");
        scanf("%d", &nlinies);
    }while(nlinies<=0);
    printf("\n"); 
    
    // Primer triangle
    for(i=1;i<=nlinies;i++){
        for(cont=1;cont<=i;cont++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
   
    copia_nlinies=nlinies;
    
    // Segon triangle
    for(i=1;nlinies>0;nlinies--){
        for(cont=1;cont<=nlinies;cont++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    nlinies=copia_nlinies;
    
    // Tercer triangle
    for(i=1;nlinies>0;i++){
        for (cont=1;cont<=nlinies;cont++)
            printf(" ");
        for (cont=1;cont<=i;cont++)
            printf("*");
        nlinies--;
        printf("\n");
    }
    printf("\n");
   
    nlinies=copia_nlinies;
    
    // Quart triangle
    for(i=1;nlinies>0;i++){
        for (cont=1;cont<=i;cont++)
            printf(" ");
        for (cont=1;cont<=nlinies;cont++)
            printf("*");
        nlinies--;
        printf("\n");
    }
    printf("\n");

    return (EXIT_SUCCESS);
}

/*
// Primer triangle
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            if(j>i) {
                //printf(" ");
            } else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // Segon triangle
    for(i=1;i<=10;i++){
        for(j=i;j<=10;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

*/

/*
   // Tercer triangle
    for (i=1;i<=nlinies;i++){
        for (cont=i;cont<=nlinies;cont++)
            printf(" ");
        for (cont=1;cont<=i;cont++)
            printf("*");
        printf("\n");
    }
    printf("\n");
*/

/*
    for (i=1;i<=nlinies;i++){
        for (cont=1;cont<=i;cont++){
            printf(" ");}
        for (cont=i;cont<=nlinies;cont++){
            printf("*");}
        printf("\n");
    }
*/

/* 
 * File:   main.c
 * Author: profe
 *
 * Created on 26 de noviembre de 2014, 9:34
 */

/*int main(int argc, char** argv) {
    
    int nlinies, copia_nlinies, cont, i;
    
    do{
        printf("Introdueix un número de línies major que 0:\n");
        scanf("%d", &nlinies);
    }while(nlinies<=0);
    printf("\n");    
 
    i=1;
    while(i<=nlinies){
        cont=1;
        while(cont<=i){
            printf("*");
            cont++;
        }
        printf("\n");    
        i++;
    }
    printf("\n");    
    printf("\n");    

    copia_nlinies=nlinies;
    while(nlinies>0){
        cont=1;
        while(cont<=nlinies){
            printf("*");
            cont++;
        }
        printf("\n");    
        nlinies--;
    }
    printf("\n");    
    printf("\n");    

    nlinies=copia_nlinies;
    i=1;
    while(nlinies>0){
        cont=1;
        while(cont<nlinies){
            printf(" ");
            cont++;
        }
        cont=1;
        while(cont<=i){
            printf("*");
            cont++;
        }
        printf("\n");    
        nlinies--;
        i++;
    }
    
    
    

    return (EXIT_SUCCESS);
}*/