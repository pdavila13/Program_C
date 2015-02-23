/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 8 de enero de 2015, 21:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    
    char nomCartes[40][30] = { "As d'oros", "Dos d'oros", "Tres d'oros", "Quatre d'oros", "Cinc d'oros", 
                               "Sis d'oros", "Set d'oros", "Sota d'oros", "Cavall d'oros", "Rei d'oros",
                               "As de copes", "Dos de copes", "Tres de copes", "Quatre de copes", "Cinc de copes", 
                               "Sis de copes", "Set de copes", "Sota de copes", "Cavall de copes", "Rei de copes",
                               "As d'espases", "Dos d'espases", "Tres d'espases", "Quatre d'espases", "Cinc d'espases", 
                               "Sis d'espases", "Set d'espases", "Sota d'espases", "Cavall d'espases", "Rei d'espases",
                               "As de bastos", "Dos de bastos", "Tres de bastos", "Quatre de bastos", "Cinc de bastos", 
                               "Sis de bastos", "Set de bastos", "Sota de bastos", "Cavall de bastos", "Rei de bastos",
    };
    
    int valor, saldoInicial;
    int op, ope;
    
    do {
        printf("++++++++ BLACK JACK ++++++++");
        printf("\n");
        printf("Introduix el saldo inicial: ");
        scanf("%d", &saldoInicial);
        printf("...i el valor de les apostes: ");
        scanf("%d", &valor);
        
        // MENU PRINCIPAL
        
        printf("\n");
        printf("##############################################\n");
        printf("#               MENÚ PRINCIPAL               #\n");
        printf("# 1. Fer jugada.                             #\n");
        printf("# 2. Mostrar saldo del jugador i la banca.   #\n");
        printf("# 3. Sortir del programa                     #\n");
        printf("##############################################\n");
        printf("\n");

        printf("Tria una opció: ");
        scanf("%d", &op);
        
        printf("\n");
        
        int baraja[40];
        int i, j, aux;
        
        switch (op){
            case 1: 
                srandom(time(0));
                
                // assignació de cada carta
                for (i = 0; i < 40; i++)
                    baraja[i] = i;
                
                
                // barajar les cartes
                for (i = 0; i < 40; i++){
                  //nomCartes[random()%40];
                   j = rand() % 40;

                   aux = baraja[i];
                   baraja[i] = baraja[j];
                   baraja[j] = aux;
                } 

                
                printf("\nCarta repartida: %s", nomCartes[random()%40]);
                printf("\nPuntuació: %d", i);
                
                do {
                    // SUBMENÚ JUGADA
        
                    printf("\n");
                    printf("##############################################\n");
                    printf("#               SUBMENÚ JUGADA               #\n");
                    printf("# 1. Demanar carta.                          #\n");
                    printf("# 2. Plantar-se.                             #\n");
                    printf("##############################################\n");
                    printf("\n");

                    printf("Tria una opció: ");
                    scanf("%d", &ope);

                    printf("\n");
                    
                    switch(ope) {
                        case 1:
                            printf("");
                            break;
                            
                        case 2:
                            printf("\nJUGADA DE LA BANCA");
                            printf("\nCartes repartides: ");
                            printf("\nPuntuació: punts");
                            
                            if (nomCartes[i] == 21){
                                printf("\nEnhorabona, has guanyat %d euros!!");
                            } else
                                printf("\nGuanya la banca %d euros!!");
                                
                                    
                            printf("\nSaldo jugador: %d", saldoInicial-valor);
                            printf("\nSaldo banca: ");
                            break;
                            
                        default:
                            printf("\nOpció incorrecta: %d", ope);        
                    }
                } while(ope!=2);
                break;
                
            case 2:
                printf("SALDO");
                printf("\nSaldo jugador: ");
                printf("\nSaldo banca: ");
                break;
                
            case 3:
                printf("\nAdéu!!");
                break;
                
            default:
                printf("\nOpció incorrecta: %d", op); 
        }       
    } while(op!=3);
    
    //for(i=0;i<40;i++)
        //printf("\nHa sortit el/la %s", nomCartes[random()%40]);

    return (EXIT_SUCCESS);
}

