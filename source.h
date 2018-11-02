#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct arvb{
    int nchaves, filhos;
    int *chaves;
    struct arvb **filho;
}TARVB;

typedef struct filme{
    char titulo[81];
    char genero[31];
    char diretor[51];
    int ano;
    int duracao;
}Filme;

TARVB *init(void);

Filme *setFilme(void);

void imprime(Filme *f);

