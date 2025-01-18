#ifndef TAD_MATRIZ_H
    #define TAD_MATRIZ_H

    typedef struct matriz{
        
        float **matriz;
        int l;
        int c;
    }Matriz;

    typedef  Matriz * MMatriz;

    MMatriz nova_matriz(int linhas, int colunas);
    void libera_matriz(MMatriz mat);
    float acessa_matriz(MMatriz mat, int i, int j);
    void atribui_matriz(MMatriz mat, int i, int j, int v);
    

#endif