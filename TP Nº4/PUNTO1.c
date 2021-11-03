#include <stdio.h>
#include <stdlib.h>

#include "PUNTO1.h"


int *articulosToArreglo(char archivo[]){
    stArticulo a;
    stArticulo *arreglo = (stArticulo*)malloc(sizeof(stArticulo)*10);
    FILE *pArchi = fopen(archivo, "rb");

    if(pArchi){
        while(fread(&a, sizeof(stArticulo), 1, pArchi)>0){

            getRubro(a.rubro, rubro);
            sprintf(toString[i],"Id: %4d, Codigo: %5d, Rubro: %d - %-15s, Marca: %-15s, Modelo: %-10s, Precio: %6.2f",a.id, a.codigo, a.rubro, rubro, a.marca, a.modelo, a.precio);
            i++;
        }

        fclose(pArchi);
    }
    return i;
}
