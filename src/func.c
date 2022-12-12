#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "func.h"

// GERAL FUNCTIONS

// pega a quantidade da primeira linha e converte em numero me dando a quantidade de palavras vão estar no hash
int pegar_tamanho_pesquisa (){
    FILE *pesquisa_txt;
    char linha[100];

    pesquisa_txt = fopen("../data/pesquisa.txt", "r");  
     //tratamento de erro
    if(pesquisa_txt == NULL)
        printf("Problema ao Abrir arquivo");

    fgets(linha, 100, pesquisa_txt);
    // *O programa assume que a primeira linha ira ter um numero terminando por EOF, o vetor 0 e o numero, e o 1 e o EOF, por isso pegar o vetor 0
    if(linha){
            int final = atoi(linha);
            return final;
    }else{
        printf("O arquivo parece estar vazio, verifique e tente novamente.");
    }

}

// Muda a string pra minusculo via ponteiro.
void converter_minusculo(char *palavra){

    int i = 0;
    while (palavra[i] != '\0')
    {
        palavra[i] = tolower(palavra[i]);
        i++;
    }
}

void ler_inserir_pesquisa(Palavra *table, int tam){
    FILE *pesquisa_txt;
    char linha[100];

    pesquisa_txt = fopen("../data/pesquisa.txt", "r"); 
    if(pesquisa_txt == NULL)
        printf("Problema ao Abrir arquivo");
    
    int i=0;
    while (!feof(pesquisa_txt))
    {   
        fgets(linha, 100, pesquisa_txt);
        if(linha){
            converter_minusculo(linha);
            if(i >= 1){
                char *lim = strtok(linha, "\n\t ");
                inserir_hashTable(table, linha, tam);
            }
            i++;
        }
    }
    
}

void ler_buscar_input(Palavra *t, int tam){
    FILE *input_txt;
    char *lim, linha[100];
    int linhas=1;
    
    input_txt = fopen("../data/input.txt", "r");  
    //tratamento de erro
    if(input_txt == NULL)
    printf("Problema ao Abrir arquivo");

    while(!feof(input_txt)){
        if(fgets(linha, 100, input_txt)){
            lim = strtok(linha, "!,.- ");
            while(lim){
                converter_minusculo(lim);
                busca_hashTable(t, lim, tam, linhas);
                
                lim = strtok(NULL, "!,. ");
            }
            linhas++;
        }
    }
   
}

// HASH TABLE FUNCTIONS
void iniciar_hashTable(Palavra *t, int tam){
    for(int i=0; i< tam; i++){
        strcpy(t[i].palavra, "");
        t[i].rep = 0;
        strcpy(t[i].linha, "");
    }
}

int Converter_string_for_hash(char palavra[], int tam){
    unsigned int hash = 0;
    int tamChar = strlen(palavra);
    for(int i=0; i<tamChar; i++){
        hash += palavra[i] * (i+1);
    }
    return hash % tam;
}


int funcao_Hash(int chave, int tam){
    return chave % tam;
}

void inserir_hashTable(Palavra *p, char* str, int tam){
    int id = Converter_string_for_hash(str, tam);

    while(strlen(p[id].palavra) > 0){
        id = funcao_Hash(id+1, tam);
    }
    strcpy(p[id].palavra, str);
}

int busca_hashTable(Palavra *p, char* chave, int tam, int linhas){
    int id = Converter_string_for_hash(chave, tam);
    int i = 0;
    char new[10];
    // Pesquisa no HashTable.
    while (i < tam)
    {
        if(strcmp(p[id].palavra, chave) == 0){
            // printf("%i \n ", p[id].rep);
            p[id].rep++;
            snprintf(new, 40, "%s %d", p[id].linha, linhas);
            if(new == p[id].linha){

            }
            strcpy(p[id].linha, new);

            return 1;
        }else{
            id = funcao_Hash(id+1, tam);
            i++;
        }
    }
    return 0;
}
void imprimir_hashTable(Palavra *p, int tam){
    // printf("palavra: %s", p[4].palavra);

    for(int i =0; i < tam; i++){
        // printf("%d:", i);
        if(strlen(p[i].palavra) > 0){
            printf("%i %s %s\n", p[i].rep ,p[i].palavra, p[i].linha);
        }
    }
}