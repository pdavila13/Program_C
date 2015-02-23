/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 10 de diciembre de 2014, 9:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <math.h>

/*
 * Es tracta d'implementar un MasterMind numèric.
 * 
 * Inicialment el programa calcularà un número de 3 dígits major o igual que 100 
 * i l'usuari haurà d'encertar-lo en successives jugades.
 * 
 * Per cada jugada se li diu quants dígits té ben posicionats o mal posicionats. 
 * Acabarà quan tingue 3 dígits ben posicionats.
 */

/*
n_secret -> b1 b2 b3
n_usuari -> n1 n2 n3

n_posicio=0;

while (n_posicio<3){
    demanar numero
    n_posicio = (b1==n1)+(b2==n2) + (b3==n3); 
}
*/

int main(int argc, char** argv) {
    
    int num_sec, num_user, num_pos, num_cor; // variables
    int num1, num2, num3;   //variables per descomposar num usuari
    int dig1, dig2, dig3;   //variables per descomposar num secret
    int i; //conta els intents del jugador
    
    srandom(time(0));   //inialitzem el random
    
    num_pos = 0;
    
    while (num_pos<3) {
    
        do{
            printf("Introduix un número: ");
            scanf("%d", &num_user);
        } while (num_user>100 && num_user<999);
    
    
        num_sec=random()%999;   //generem el numero aletori
    
        //descomposició del numero introduït per l'usuari
        num3 = num_user%10;
        num2 = num_user/10%10;
        num1 = num_user/100;

        num_pos = (num1==dig1)+(num2==dig2)+(num3==dig3);
        num_cor = (num1!=dig1)*(num2!=dig2)*((num1==dig2)+(num2==dig1))+
                  (num1!=dig1)*(num3!=dig3)*((num1==dig3)+(num3==dig1))+
                  (num3!=dig3)*(num2!=dig2)*((num3==dig2)+(num2==dig3));

        i++;
        
        printf("\nPosició incorrecta: %d", num_pos);
        printf("\nPosició correcta: %d", num_cor);
    
    }
    
    printf("\nT'ha costat %d intents", i);
            

    return (EXIT_SUCCESS);
}

