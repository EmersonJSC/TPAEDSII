#ifndef FUNC_H
#define FUNC_H

#define TAM 509 //Numero primo mais proxino do dobro da quantidade de palavra;

 typedef struct
   {
      char palavra;
   }Palavra;


void iniciartTable(Palavra t[]);
int funcaoConverter(char palavra[]);
int funcaoHash(int chave);
void inserirDataFile(Palavra table[]);
int busca(int t[], int chave);
int imprimir(int t[]);

#endif