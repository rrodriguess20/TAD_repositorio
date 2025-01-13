#include "TAD_Matriz.h"

    #include <stdlib.h>

    MMatriz cria_matriz(int linhas, int colunas){

        MMatriz m = (MMatriz)malloc(sizeof(MatrizDinamica));

        m->l = linhas;
        m->c = colunas;

        m->matriz = (float**)malloc(linhas*sizeof(float*));

            for(int i = 0; i<linhas; i++){

                m->matriz[i] = (float*)malloc(colunas*sizeof(float));
            }

        return m;
    }