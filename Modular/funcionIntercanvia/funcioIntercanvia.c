/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 13 de febrero de 2015, 13:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

//int intercanvia(int x, int y);            //pas per valor
int intercanvia(int *x, int *y);            //pas per referencia

int main(int argc, char** argv) {
    
    int a,b;
    
    printf("Introdueix el primer valor: ");
    scanf("%d", &a);
    printf("Introdueix el segon valor: ");
    scanf("%d", &b);
    
    //intercanvia(a,b);     //pas per valor
    intercanvia(&a,&b);     //pas per referencia
    
    printf("\n");
    
    printf("%d, %d", a, b);

    return (EXIT_SUCCESS);
}

//NOTA: Els canvis que es fan dins de la funció es perden 
//funcio pasada per valor
/*
int intercanvia(int x, int y){
    int temp;
    
    temp=x;
    x=y;
    y=temp;
    
    printf("%d, %d", x, y);
}
*/

//funciona pasada per referencia
int intercanvia(int *x, int *y){
    int temp;
    
    temp=*x;
    *x=*y;
    *y=temp;
    
    //printf("%d, %d", *x, *y);
}