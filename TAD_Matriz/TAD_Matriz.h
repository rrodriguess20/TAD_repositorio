#ifndef TAD_MATRIZ_H
    #define TAD_MATRIZ_H

    typedef struct{
        
        float **matriz;
        int l;
        int c;
    }MatrizDinamica;

    typedef  MatrizDinamica * MMatriz;

    MMatriz nova_matriz(int linhas, int colunas);

#endif