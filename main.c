#include <stdio.h>
#include "TAD_Ponto/TAD_Ponto.h"

int main(){

    PPonto a = ponto_cria(0, 0);
    printf("(%.2f, %.2f)\n", a->x, a->y);

    free(a);

    return 0;
}