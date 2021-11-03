#include <stdio.h>
#include <stdlib.h>

#include "listas.h"
#include "articulo.h"



nodo* inicLista()
{
    return NULL;
}

void muestraUnNodo(nodo* nodo)
{
    muestraUnArticulo(nodo->dato);
}

nodo* crearNodo(stArticulo dato)
{
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

nodo* agregarAlPrincipio(nodo* lista, nodo* nuevoNodo)
{
    nuevoNodo->siguiente = lista;
    return nuevoNodo;
}

void mostrarLista(nodo* lista)
{
    nodo* seg = lista;
    while(seg!=NULL)
    {
        muestraUnArticulo(seg->dato);
        seg = seg->siguiente;
    }
}


nodo* agregarAlFinal(nodo* lista, nodo* nuevo)
{
    if(lista == NULL)
    {
        lista = nuevo;
    }
    else
    {
        nodo* ultimo = buscaUltimo(lista);
        ultimo->siguiente = nuevo;
    }

    return lista;
}
