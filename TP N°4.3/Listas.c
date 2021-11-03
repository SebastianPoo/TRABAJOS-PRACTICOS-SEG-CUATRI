#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"



nodoLista* inicLista()
{
    return NULL;
}

nodoLista* crearNodoLista( stPersona dato)
{
    nodoLista* nuevo = (nodoLista*)malloc(sizeof(nodoLista));
    nuevo->dato = dato;
    nuevo->seg = NULL;
    return nuevo;
}

nodoLista* agregarAlPrincipio(nodoLista* lista, nodoLista* nuevo)
{
    nuevo->seg = lista;
    return nuevo;
}

void muestraLista(nodoLista* lista)
{
    nodoLista* aux = lista;
    if (aux)
    {
        while(aux)
        {
            muestraNodo(aux);
            aux = aux->seg;
        }
    }
    else
    {
        printf("\n No hay lista creada");
    }
}

void muestraNodo(nodoLista* nodo)
{
    muestraUnaPersona(nodo->dato);

}


nodoLista* crearListaAlea (nodoLista* lista, int cantidad)
{
    if (cantidad>0)
    {
        lista=crearListaAlea(insertaOrdenadoMenorMayor(lista,crearNodoLista(cargaUnaPersona())),cantidad-1);
    }


    return lista;

}

nodoLista* insertaOrdenadoMenorMayor (nodoLista* lista, nodoLista* nuevo)
{
    if (lista==NULL){
        lista=nuevo;
    }else{
        if(strcmp(lista->dato.dni,nuevo->dato.dni)>0){
            nuevo->seg=lista;
            lista=nuevo;
        }else{
            lista->seg=insertaOrdenadoMenorMayor(lista->seg,nuevo);
        }
    }
    return lista;
}


