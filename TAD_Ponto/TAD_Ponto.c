    #include "TAD_Ponto.h"

    #include <stdlib.h>
    #include <math.h>

    PPonto ponto_cria(float x, float y){

        PPonto ponto = (PPonto)malloc(sizeof(Ponto));

        ponto ->x = x;
        ponto ->y = y;

        return ponto;
    }

    void ponto_libera(PPonto p){

        free(p);
    }

    void ponto_acessa(PPonto p, float* x, float* y){

        *x = p->x;
        *y = p->y;
    }

    void ponto_atribui(PPonto p, float x, float y){

        p->x = x;
        p->y = y;
    }

    float ponto_distancia(PPonto p1, PPonto p2){

        float dx = p2->x - p1->x;
        float dy = p2->y - p1->y;

        return sqrtf(dx*dx + dy*dy);
    }