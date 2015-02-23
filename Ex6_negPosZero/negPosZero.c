/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de noviembre de 2014, 9:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu un programa que llegeixi un enter i digui si és negatiu, positiu 
 * o zero.
 */
int main(int argc, char** argv) {
    
    int num;
    
    printf("Introdueix un numero: ");
    scanf("%d", &num);
    
    if (num == 0 ) 
        printf("\nEl numero introduït és cero.\n");
    else if (num > 0)
            printf("\nEl numero introduït és positiu.\n");
        else 
            printf("\nEl numero introduït és negatiu.\n");

    return (EXIT_SUCCESS);
}

