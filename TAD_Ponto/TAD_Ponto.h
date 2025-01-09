struct ponto{

    float x;
    float y;
};

typedef struct ponto Ponto;
typedef struct ponto * PPonto;

PPonto ponto_cria(float x, float y);
void ponto_libera(PPonto p);

#include "TAD_Ponto.c"