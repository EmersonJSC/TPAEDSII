#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <string.h>


int main(void){
    int tam = pegar_tamanho_pesquisa();
    Palavra table[tam];
    char *buscar;

    iniciar_hashTable(table, tam);
    ler_inserir_pesquisa(table, tam);
    printf("\n");
    
}

