#include <stdio.h>
#include <math.h>

#include "TAD_Ponto/TAD_Ponto.h"

int main(){

    PPonto a = ponto_cria(2.0, 3.0);
    PPonto b =  ponto_cria(5.0, 7.0);
    printf("(%.2f, %.2f)\n", a->x, a->y);

    ponto_libera(a);

    return 0;
}