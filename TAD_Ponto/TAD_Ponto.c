#ifndef __TAD_PONTO_C__
#define __TAD_PONTO_C__
#include <stdlib.h>

PPonto ponto_cria(float x, float y){

    PPonto ponto = (PPonto)malloc(sizeof(Ponto));

    ponto ->x = x;
    ponto ->y = y;

    return ponto;
}

#endif