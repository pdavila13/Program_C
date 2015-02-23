/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de febrero de 2015, 10:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

/*
 * Numero eletorios
 */
int main(int argc, char** argv) {
    
    //exemple de numero aletori
    
    srandom(time(0));
    printf("%d\n", random()%1000);
    
    //adivinar un digit aletori
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

    return (EXIT_SUCCESS);
}

/*############################################################################*/

/*
 * Cadenes: Compta caracters dins d'un text acabat en PUNT
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

int main(int argc, char** argv) {
    
    //char cadena[LONG]="Hola";
    char cadena[LONG];//={'H','o','l','a',0};
    int i=0, car, cont=0;
    char cbuscat;
    
    printf("\nQuin caracter vols comptar?:\n");
    scanf("%c", &cbuscat);
    __fpurge(stdin);
    
    printf("\nIntroduix el text acabat en punt:\n");
    while(i<LONG-1 && (car=mygetchar())!='.'){
        if(car==cbuscat) cont++;
        cadena[i]=car;
        i++;
    }
    cadena[i]=0;
    printf("\n\nEl caracter %c apareix %d vegades al text %s.\n", cbuscat, cont, cadena);
    
    
/*
    printf("\nIntroduix el nom de l'usuari:\n");
    scanf("%s", cadena);
    printf("\nEl nom de l'usuari introduit és %s\n", cadena);
*/

    return (EXIT_SUCCESS);
    
}

int mygetchar(void)
{
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
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 100

int mygetchar(void);

int main(int argc, char** argv) {
char text[LONG];
int car,i=0;
printf("Introdueix línies de text:\n");
printf("Per a finalitzar introdueix un punt\n\n");
// Llegeix caracters fins apretar el .
while(i<LONG-1 && (car=mygetchar())!='.')
{
//Operacions amb la línia de text llegida
text[i]=car;
i++;
}
text[i]=0;
printf("\nLa cadena és:\n %s\n", text);
printf("La longitud de la cadena és %d\n", i);

return (EXIT_SUCCESS);
}

int mygetchar(void)
{
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
*/

/*############################################################################*/

// com buscar una paraula de qualsevol longitud dins d'un text


#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

int main(int argc, char** argv) {
    
    char cadena[LONG], paraula[LONG];
    int i=0, j, car, trobada=0, longParaula;
   
    printf("\nIntroduix la paraula a buscar:\n");
    while(i<LONG-1 && (car=mygetchar())!='\n' && car!=' '){
        paraula[i]=car;
        i++;
    }
    paraula[i]=0;
    
    //M'anoto la longitud de la paraula a buscar
    longParaula=i;
    
    i=0;
    printf("\nIntroduix el text acabat en .:\n");
    while(!trobada && i<LONG-1 && (car=mygetchar())!='.'){
        cadena[i]=car;
        if(cadena[i]==' ' || cadena[i]=='\n'){
            trobada=1;
            for(j=longParaula-1;trobada && j>=0;j--) 
                trobada=trobada && cadena[j-longParaula+i]==paraula[j]; 
            trobada= trobada && 
                    (j-longParaula+i<0 ||(cadena[j-longParaula+i]==' ' || cadena[j-longParaula+i]=='\n'));
        }
        i++;
    }
    //Si no he trobat la paraula miro si el text acaba en "paraula."
    if(!trobada){
        trobada=1;
        for(j=longParaula-1;trobada && j>=0;j--) trobada=trobada && cadena[j-longParaula+i]==paraula[j]; 
        trobada= trobada && (j-longParaula+i<0 ||(cadena[j-longParaula+i]==' ' || cadena[j-longParaula+i]=='\n'));
    }
    
    cadena[i]=0;
    
    if(trobada) printf("\n\nS");
    else printf("\n\nNo s");

    printf("'ha trobat la paraula \"%s\" dins del text \"%s\"!!\n\n", paraula, cadena);
    
    return (EXIT_SUCCESS);
    
}

int mygetchar(void)
{
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

/*############################################################################*/

//buscar la paraula no
/*
    //Codi que detecta la paraula "no"
    char cadena[LONG];
    int i=0, car, dif='a'-'A', trobada=0;
   
    printf("\nIntroduix el text acabat en .:\n");
    while(!trobada && i<LONG-1 && (car=mygetchar())!='.'){
        cadena[i]=car;
        if(cadena[i]==' ' || cadena[i]=='\n')
            if(cadena[i-1]=='o' && cadena[i-2]=='n' && (i-3<0 ||(cadena[i-3]==' ' || cadena[i-3]=='\n'))) trobada=1;

        i++;
    }
    //Miro si el text acaba en "no."
    if(cadena[i-1]=='o' && cadena[i-2]=='n' && (i-3<0 ||(cadena[i-3]==' ' || cadena[i-3]=='\n'))) trobada=1;
    cadena[i]=0;
    
    if(trobada) printf("\n\nS'ha trobat la paraula!!");
    else printf("\n\nNo s'ha trobat la paraula!!");

    printf("\n\n");
    */