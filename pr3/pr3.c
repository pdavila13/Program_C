/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 6 de febrero de 2015, 13:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
Algorisme ParellImparell
	num: enter
inici
	num ←  1
	mentre num != 0 fer
		escriure “Introdueix numeros enters (per acabar un zero)”
		llegir num

		si num MOD 2 = 0 allavontes
			escriure “El numero introduït no és parell”
		sino
			escriure “El numero introduït és parell”
		fisi
	fimentre	
fi
 */

int main(int argc, char** argv) {
    
    int num;
    
    printf("Introdueix numeros enters (per acabar un zero): ");
    
    do{
       
        scanf("%d", &num);
        
        if(num%2==0)
            printf("\nEl %d és parell\n", num);
        else
            printf("\nEl %d és imparell\n", num);
    } while(num!=0);
    

    return (EXIT_SUCCESS);
}

