/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 6 de febrero de 2015, 11:44
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define DIM 100

/*
 * Programa que muestra una matriz cuadrada DIM*DIM y que muestra la matriz
 * rellenandola con numeroa aletoris pero sin que se repitan.
 */

int main(int argc, char** argv) {
    
    int i,j,num,candidat;
    int matriu[DIM][DIM];
    int repetits[DIM]={0};    
    
    //obligo demanar un numero positiu entre 1-DIM
    do{
        printf("Introdueix la dimensió de la matriu 1-%d: ", DIM);
        scanf("%d", &num);
    } while(num<1 || num>DIM);
    
    //inicialització de numeros aletoris
    srandom(time(0));
    
    //mostro la matriu amb els numeros aletoris
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            do{
                candidat = random()%(num*num);
                
            }while(repetits[candidat]!=0);
            
            repetits[candidat]++;
            
            //printf("%4d", matriu[i][j]=(random()%(num*num))+1);
            printf("%4d", matriu[i][j]=candidat+1);
        }
        printf("\n");
    }
    printf("\n");
   
    /*
    
    int i,j,k,r,num,numAletori;
    int matriu[DIM][DIM];
    int xivato=1;
     
    //obligo demanar un numero positiu entre 1-DIM
    do{
        printf("Introdueix la dimensió de la matriu 1-%d: ", DIM);
        scanf("%d", &num);
    } while(num<1 || num>DIM);
    
    //inicialització de numeros aletoris
    srandom(time(0));
    
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            numAletori=1+(random()%DIM);
            r=!xivato;
            for(k=0;j>k && r==!xivato;k++)
                if(numAletori==matriu[i][k])
                    r=xivato;
                    if(r==!xivato){
                        matriu[i][j]=numAletori;
                        j++;
                    }
        }
        
        //mostro la matriu amb els numeros aletoris
        for(i=0;i<num;i++){
            for(j=0;j<num;j++)
                printf("%3d", matriu[i][j]);
                    printf("\n");
                }
            printf("\n");
    }
    */
   
    return (EXIT_SUCCESS);
}


    /*
    srand(time(0)); // iniciando la semilla aleatoria

    // Formula a + rand() % (b-a+1)

    // eligiendo 15 numeros aleatorios distintos entre 1 y 50
    for(i=0;i<15;i++)
    {
        // Genera numero aleatorio
        int num = 1 + rand()%50;

       if(i>0)
       {
          // Verifica si no se ha generado antes   
          for(j=0; j < i; j++)     
              if(num==matriu[i][j])
              {
                 num = 1 + rand()%50;
                 j=-1;                         
              }
        }

        //matriu[i][j] = num;
    }
    
     //mostro la matriu amb els numeros aletoris
        for(i=0;i<num;i++){
            for(j=0;j<num;j++)
                printf("%3d", matriu[i][j] = num);
                    printf("\n");
                }
            printf("\n");
     */

