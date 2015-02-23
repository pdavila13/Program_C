/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 14 de enero de 2015, 9:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#define DIM 5

/*
 * JUEGO DE BARCOS
 * 
 *  1) Omplir la matriu en 0
 *  2) Col·locar el barco aletoriament
 *  3) mentre  fer
 *      fem jugada
 *      mostrent resultat
 *     fimentre
 *  4) mostren el nº de disparos fets
 */

int main(int argc, char** argv) {
    
    //Taulell per jugar inicialitzat a 0
    /*
     * Les caselles del taulell podran tindre els següyents valors:
     * 0 : casella en aigua sense ser disparada
     * 1 : casella en barco sense ser disparada
     * 2 : casella en aigua ja disparada
     * 3 : casella en barco disparada
    */
    
    int taulell[DIM][DIM]={0};
    int k, 
            cont,       //comptador usat per diferents propòsits
            fi=0,       //informa si s'ha acabat el joc
            ia, ja,     //índexos per accedir a les caselles de la matriu calculats aleatòriament 
            i, j,       //índexos per recòrrer al matriu
            orientacio, //per orientar el barco: 0 horitzontal cap dreta, 1 vertical cap baix, 2, horitzontal esquerra, 3 vertical dalt
            colocat=0,  //informa de si hem pogut col·locar el barco al taulell
            afonat;     //informa de que el barco s'ha afonat
   
    
    //Vaig a col·locar un barco dins el taulell a una posició aleatòria
    srandom(time(0));
    do{
        ia=random()%DIM;
        ja=random()%DIM;
    
        orientacio=random()%4;
        //printf("\nia=%d ja=%d orientacio=%d\n\n", ia, ja, orientacio);
    
        //Compto els canvis d'orientació per si no es pot col·locar el barco a la casella
        cont=1;
        while(!colocat && cont<=4){
            switch(orientacio){
                case 0:         //Horitzontal cap a la dreta
                    if(ja<2){
                        for(k=0;k<DIM-1;k++) taulell[ia][ja+k]=1;
                        colocat=1;
                    }
                    break;
                case 1:         //Vertical cap a baix
                    if(ia<2){
                        for(k=0;k<DIM-1;k++) taulell[ia+k][ja]=1;
                        colocat=1;
                    }
                    break;
                case 2:         //Horitzontal cap a l'esquerra
                    if(ja>=DIM-2){
                        for(k=0;k<DIM-1;k++) taulell[ia][ja-k]=1;
                        colocat=1;
                    }
                    break;
                case 3:         //Vertical cap a dalt
                    if(ia>=DIM-2){
                        for(k=0;k<DIM-1;k++) taulell[ia-k][ja]=1;
                        colocat=1;
                    } 
            }
            //Si no he pogut col·locar el barco incremento la orientació i el comptador 
            if(!colocat){ 
                orientacio=(++orientacio)%4;
                cont++;
            }
        }
    } while(!colocat);
    
    //dibuixa la matriu amb les posicions del barco
    
    /*
    for(i=0;i<DIM;i++){
            for(j=0;j<DIM;j++){
                printf("%4d", taulell[i][j]);
            }
            printf("\n");
    }
    */
    
    //comencen a jugar
    
    cont=1;
    while(!fi) {
        printf("\n#### Jugada nº %d #### \n", cont);
        
        //demanem la fila a l'usuari
        do{
            printf("\nIntrodueix una fila (1-%d): \n", DIM);
            scanf("%d", &i); 
            
            if(i < 1 || i > DIM)
                printf("\nFila incorrecta. Ha de ser entre (1-%d) \n", DIM);
        } while(i < 1 || i > DIM);
        
        //demanem la columna a l'usuari
        do{
            printf("\nIntrodueix una columna (1-%d): \n", DIM);
            scanf("%d", &j);
            
            if(j < 1 || j > DIM)
                printf("\nColumna incorrecta. Ha de ser entre (1-%d) \n", DIM);
        } while(j < 1 || j > DIM);
        
        //decrementen la fila i la columna per a que siguin valids per al taulell
        i--;
        j--;
        
        //analitzar la tirada 
        switch(taulell[i][j]) {
            //no disparada i en aigua
            case 0: 
                printf("\nAigua!!");
                taulell[i][j]=2;
                break;
                
            //no disparada i en barco
            case 1:
                printf("\nTocat");
                taulell[i][j]=3;
                
                afonat=1;
                
                //mirem si hem afonat el barco
                switch(orientacio){
                    
                    case 0:         //Horitzontal cap a la dreta
                        for(k=0;k<DIM-1 && afonat;k++) 
                            if (taulell[ia][ja+k]==1) 
                                afonat=0;  
                        break;
                    case 1:         //Vertical cap a baix
                        for(k=0;k<DIM-1 && afonat;k++) 
                            if (taulell[ia+k][ja]==1) 
                                afonat=0;
                        break;
                    case 2:         //Horitzontal cap a l'esquerra
                        for(k=0;k<DIM-1 && afonat;k++) 
                            if (taulell[ia][ja-k]==1) 
                                afonat=0;
                        break;
                    case 3:         //Vertical cap a dalt
                        for(k=0;k<DIM-1 && afonat;k++) 
                            if (taulell[ia-k][ja]==1) 
                                afonat=0;
                        break;
                        
                }
                
                //mirem si s'ha afonat el barco si es així s'acaba el joc
                if(afonat) {
                    printf(" i afonat!!\n");
                    printf("T'has costat %d intents", cont);   
                } else
                    printf("!!\n");
                
                fi=afonat;
                break;
                
            //disparada i en aigua
            case 2:
                printf("\nJa has disparat aquí i hi ha aigua");
                cont--;
                break;
                
            //disparada i en barco    
            case 3:
                printf("\nJa has disparat aquí i hi ha un barco");
                cont--;
                break;
        }
        
        printf("\n\n");
        
        //dibuixem el taulell al jugador
        for(i=0;i<DIM;i++){
            for(j=0;j<DIM;j++){
                switch(taulell[i][j]) {
                    //no disparada i en aigua
                    case 0:
                        
                    //no disparada i en barco
                    case 1:
                        printf("? ");
                        break;
                    //disparada i en aigua
                    case 2:
                        printf("~ ");
                        break;
                    //disparada i en barco    
                    case 3:
                        printf("X ");
                        break;
                }
            }
            printf("\n");
        }
        
        //incremento el numero de jugades
        cont++;
        
        //break;                      // surt del while
    }
        
    
    return (EXIT_SUCCESS);
}

