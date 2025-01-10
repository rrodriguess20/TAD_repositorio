    #include "TAD_Circulo.h"

    #include <stdlib.h>
    #include <math.h>

    #define PI 3.14159
    
    CCirculo circulo_cria (float x, float y, float r){

        CCirculo c = (CCirculo)malloc(sizeof(Circulo));

        c->p = ponto_cria(x, y);
        c->r = r;

        return c;
        
    }

    void circulo_libera(CCirculo c){

        ponto_libera(c->p);
        free(c);
    }

    float circulo_area(CCirculo c){

        float area = pow(c->r, 2)*PI;

        return area;
    }

    int circulo_interior(CCirculo c, PPonto p){

        float d = ponto_distancia(c->p, p);

        return (d<c->r); //ainda não estou entendendo como essa parte do código funciona
    }