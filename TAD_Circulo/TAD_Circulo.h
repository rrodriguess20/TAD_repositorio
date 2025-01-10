#include "TAD_Ponto.h"
struct circulo{

    float x;
    float y;
    float r;
};

typedef struct circulo Circulo;
typedef struct circulo * CCirculo;

CCirculo circulo_cria (float x, float y, float r);
void circulo_libera(CCirculo c);
float circulo_area(CCirculo c);
int circulo_interior(CCirculo c);

#include "TAD_Circulo.c"