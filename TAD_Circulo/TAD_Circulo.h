#ifndef TAD_CIRCULO_H
    #define TAD_CIRCULO_H
    #include "../TAD_Ponto/TAD_Ponto.h"

    struct circulo{

        PPonto p;
        float r;
    };

    typedef struct circulo Circulo;
    typedef struct circulo * CCirculo;

    CCirculo circulo_cria (float x, float y, float r);
    void circulo_libera(CCirculo c);
    float circulo_area(CCirculo c);
    int circulo_interior(CCirculo c, PPonto p);

#endif