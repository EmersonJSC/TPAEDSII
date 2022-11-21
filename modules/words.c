#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "words.h"

char* readInput(){

    FILE *input;
    input = fopen("../data/input.txt", "r");
    char c, letra = '\n';
    int vezes = 0;

    while(fread (&c, sizeof(char), 1, input)) {
        if(c == letra) {
            vezes++;
        }
    } 
    printf("\nLinhas: %i\n",vezes + 1);
    fclose(input);

    return 0;

}
