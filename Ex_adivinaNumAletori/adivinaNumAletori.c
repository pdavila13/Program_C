/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de diciembre de 2014, 21:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

/*
 * Se tracta de fer un programa que calcule un número del 0 al 9 aleatòriament. 
 * A continuació l'usuari ha d'adivinar-lo i hem d'anar comptant els intens que 
 * fa. Quan l'encerte el felicitem (o no) i li diem el número d'intents que ha fet.
    
   Per exemple:
  
    Adivina el número secret (entre 0 i 9)!!

    Introduix un número:
    4
    Has fallat. Torna-ho a provar.
    Introduix un número:
    1
    Has fallat. Torna-ho a provar.
    Introduix un número:
    0
    Has fallat. Torna-ho a provar.
    Introduix un número:
    2

    Enhorabona. T'ha costat 4 intents!!
 */

int main(int argc, char** argv) {
    
    int num, num_aletori, cont;
    int major, menor;
    
    srandom(time(0));
    
    num_aletori = random()%9; //Asigna i genera num aletori de 0 - 9
    
    //printf("%d\n", random()%1000);
    
    num = 0;
    cont = 0;
    
    while(num_aletori != num){
        
        printf("Introdueix un numero: ");
        scanf("%d", &num);
        
        if(num>num_aletori){
            major = num;
        } else
            menor = num;
        cont = cont + 1;
        
        printf("Has fallat. Torna-ho a provar.");
        printf("\n");
    }
    printf("\nEnhorabona. T'ha costat %d intents.", cont);
    
/*
    int num_secret, intents=0, num_usu=-1;
    
    srandom(time(0));
    
    num_secret=random()%10;

    printf("\nAdivina el número secret (entre 0 i 9)!!\n\n");
    
    do{
        if(num_usu==-1) printf("Introduix un número:\n");
        else printf("Has fallat. Torna-ho a provar.\nIntroduix un número:\n");
        scanf("%d", &num_usu);
        intents++;
    }while(num_secret!=num_usu);
    
    if(intents<5) printf("\nEnhorabona.");
    else printf("\nPots millorar.");
    
    printf(" T'ha costat %d intents!!\n", intents);

*/

    return (EXIT_SUCCESS);
}