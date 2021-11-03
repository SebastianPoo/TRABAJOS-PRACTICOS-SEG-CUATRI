#include <stdio.h>
#include <stdlib.h>
#include "arregloPunto5.h"
#include "arregloPunto4.h"
#include <conio.h>
#include <strings.h>

void cargaMatriz (int fil, int col, int m [fil][col])
{

    for (int i = 0; i < fil ; i++){
        for (int j = 0; j< col; j++){
                m[i][j] = 20 + rand()% (38+1-20);
        }
    }
}

void muestraMatriz (int fil, int col, int m[fil][col])
{
        for (int i = 0; i<fil; i++){
            for (int j = 0; j < col; j++){
                printf("%d-", m[i][j]);
            }
            printf("\n");
        }
}

int buscaMayorMatrizFila (int fil,int col, int m[fil][col])
{
    int pos=-1;
    int mayor=0;
        for (int i = 0; i<col; i++)
            {
                if(mayor<m[fil][i])
                {
                    mayor=m[fil][i];
                    pos=i+1;
                }
            }
            return pos;
}

void matrizAarregloPuntero (int fil, int col, int m[fil][col], int arreglo[],int *validos)
{
    for (int i=0;i<fil;i++)
    {
        arreglo[*validos]=buscaMayorMatrizFila(i,col,m);
        (*validos)++;
    }
}
