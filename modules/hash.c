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

void inserir(Palavra p[]){
    // int id = funcaoConverter(p->palavra);
    printf("%s", p->palavra);
    // while(t[id]){
    //     id = funcaoHash(id+1);
    // }
    // t[id] = palavra;
}

