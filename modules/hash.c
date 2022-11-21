#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"


   

// define 0 como vazio, e coloca todas as posiçoes vazias.
void iniciartTable(Palavra t[]){
    int i;
    for(int i; i< TAM; i++){
        t[i].palavra = 0;
    }
}

// Cria o hash atravez da palavra;
int funcaoConverter(char palavra[]){
    unsigned int hash = 0;
    int tamChar = strlen(palavra);

    for(int i=0; i<tamChar; i++){
        hash += palavra[i] * (i+1);
    }
    return hash % TAM;
}


int funcaoHash(int chave){
    return chave % TAM;
}

void inserirDataFile(Palavra table[]){
    char entradaPalavra[20] = "susurro"; //inserir aqui pra pegar a palavra do arquivo
    int id = funcaoConverter(entradaPalavra);
    while(table[id].palavra){
        id = funcaoHash(id+1);
    }
    table[id].palavra = *entradaPalavra;
}

