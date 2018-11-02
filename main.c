#include "source.h"

//Star Wars Episode IV A New Hope/1977/George Lucas/Sci-Fi/125

int main(void){
    Filme *f;
    char entrada[163];
    //scanf("%s", entrada);
    f = setFilme();
    imprime(f);
    return 0;
}
