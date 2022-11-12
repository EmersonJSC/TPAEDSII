# TPAEDSII
Descrição do problema

Uma empresa de software tem como principal produto uma ferramenta de análise de textos na Web. Para isso, ela precisa de um relatório estatístico sobre os textos de entrada. Para criar esse relatório estatístico, você foi contratado. O relatório deve informar a quantidade de ocorrências das palavras mais frequentes, ordenadas pela frequência em que apareceram, além das linhas em que as palavras aparecem.

O trabalho consiste em fazer um programa que conte quantas vezes a mesma palavra aparece num texto de entrada, determinando assim a sua frequéncia. Uma palavra é definida como uma sequência consecutiva de letras do alfabeto, maiúsculas e/ou minúsculas. As palavras com uma única letra devem ser ignoradas, bem como espaços em brancos, sinais de pontuação caracteres especiais, etc. Você pode assumir que as palavras não terão acentuação. Além disso, o programa deve ser case insensitive. Por exemplo, são consideradas iguais as palavras ”insensitive”, ”InSensitive”ou ”INSENSITIVE”.

Para a estrutura de pesquisa e inserção das palavras deverá ser usada uma hash table. A função hash deve receber a palavra a ser inserida (código ASCII) e calcular o valor de seu hash. A função hash deve ser rápida e gerar o mínimo de colisões possível (crie diversas funções e use a melhor). Idealmente, a ocupação da tabela deve ser uniformemente distribuída. As colisões devem ser tratadas por endereçamento aberto.

Entrada

O programa será testado da seguinte maneira: ./prog input.txt pesquisa.txt - onde input.txt e pesquisa.txt são arquivos que contém o texto de entrada e as palavras a serem pesquisadas depois. O arquivo de entrada contém no máximo 256 palavras diferentes, cada palavra não terá mais de 20 letras, e cada linha está limitada a 80 caracteres. A entrada termina com EOF (end-of-file). O arquivo de pesquisa contém a quantidade de palavras a serem pesquisadas na primeira linha e a lista de palavras a serem pesquisadas, uma por linha.

Anexo á tarefa no Portal Didático, o arquivo argc_e_argv.c traz um exemplo de como rodar o programa passando os parâmetros via linha de comando.

Saída

Para cada entrada seu programa deve produzir um conjunto de linhas na saída. Cada linha deve conter um número indicando a frequência, um espa¸co em branco e a palavra (todas as letras devem ser minúsculas), seguido de outro espaço e das linhas onde a palavra aparece, separadas também por espaço. Seu programa deve imprimir, na saída padrão, as palavras pesquisadas na ordem do arquivo de pesquisa, conforme o exemplo deste PDF.

