#ifndef FUNC_H
#define FUNC_H

typedef struct
   {
      char palavra[20];
      int rep;
      int ultimalinha;
      char linha[100];

   } Palavra;
   
// GERAL FUNCTIONS

int pegar_tamanho_pesquisa ();
void converter_minusculo(char *palavra);
void ler_inserir_pesquisa(Palavra *table, int tam);
void ler_buscar_input();

// HASH TABLE FUNCTION
void inserir_hashTable(Palavra p[], char* str, int tam);
void atualizar_hashTable(Palavra p[], char* str, int tam);
void iniciar_hashTable(Palavra t[], int tam);
void imprimir_hashTable(Palavra *t, int tam);
int Converter_string_for_hash(char palavra[], int tam);
int funcao_Hash(int chave, int tam);
int busca_hashTable(Palavra *p, char* chave, int tam, int linhas);


#endif 