/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu un programa que mostri totes les lletes minúscules de l'abecedari.
 */

int main(int argc, char** argv) {
    
    char lletra=97;
    
    do {
        printf("%c ", lletra);
        lletra++;
    } while(lletra<=122);
    printf("\n");
    
/*
    char lletra=97;
    5555555555555
    while(lletra<=122){
        printf("%c ", lletra);
        lletra++;
    }
    printf("\n");
*/
    
/*
    char lletra;
    
    for(lletra=97;lletra<=122;lletra++){
        printf("%c ", lletra);
    }
    printf("\n");
*/
    
    // NORMAL
    
/*
    char car = 'a';
    
    while(car<='z'){
        printf("%c ", car);
        car++;
    }
    
    char car = 'a';
    
    do{
        printf("%c ", car);
        car++;
    } while(car<='z');
    
    char car;
    
    for(car='a';car<='z';car++)
        printf("%c", car);
*/

    return (EXIT_SUCCESS);
}


/*
Algorisme LletresMinuscules
	car:caracter
inici
	car <- 'a'
	mentre car <= 'z' fer
		escriure car
		car <- car +1
	fimentre
fi 
*/

/*
int main(int argc, char** argv) {
    
    //Declaració de variables
    char c;
    
    //Exemple de while
    //Inicialitzem la variable en la primera lletra que volem mostrar, l'a 
    c='a';
    printf("\nExemple de sentència while:\n");
    printf("Les lletres minúscules de l'abecedari són:\n");
    //A cada iteració mostrem la lletra i passem a la següent. Acabem quan passem de la z
    while(c<='z'){
        printf("%2c", c);
        c=c+1;
    }

    //Exemple de do...while
    //Inicialitzem la variable en la primera lletra que volem mostrar, l'a 
    c='a';
    printf("\n\nExemple de sentència do...while:\n");
    printf("Les lletres minúscules de l'abecedari són:\n");
    //A cada iteració mostrem la lletra i passem a la següent. Acabem quan passem de la z
    do{
        printf("%2c", c);
        c=c+1;
    }while(c<='z');

    //Exemple de for
    printf("\n\nExemple de sentència for:\n");
    printf("Les lletres minúscules de l'abecedari són:\n");
    //A cada iteració mostrem la lletra i passem a la següent. Acabem quan passem de la z
    for(c='a';c<='z';c=c+1)
        printf("%2c", c);
        

    return (EXIT_SUCCESS);
}
 */