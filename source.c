#include "source.h"

TARVB *init(void){
    return NULL;
}

Filme *setFilme(void){
    Filme *f = (Filme*) malloc(sizeof(Filme));
    f->ano = f->duracao = 0;
    char ano[5];
    char duracao[4];
    scanf(" %[^/]/ %[^/]/ %[^/]/ %[^/]/ %[^\n]", f->titulo, ano, f->diretor, f->genero, duracao);
    sscanf(ano, "%d", &f->ano);
    sscanf(duracao, "%d", &f->duracao);
    return f;
}

void imprime(Filme *f){
    printf("titulo: %s, ano: %d, diretor: %s, genero: %s, duracao: %d", f->titulo, f->ano, f->diretor, f->genero, f->duracao);
}