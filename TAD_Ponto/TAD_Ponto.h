#ifndef TAD_PONTO_H
    #define TAD_PONTO_H

    struct ponto{

        float x;
        float y;
    };

    typedef struct ponto Ponto;
    typedef Ponto * PPonto;

    PPonto ponto_cria(float x, float y);
    void ponto_libera(PPonto p);
    void ponto_acessa(PPonto p, float* x, float* y);
    void ponto_atribui(PPonto p, float x, float y);
    float ponto_distancia(PPonto p1, PPonto p2);

#endif