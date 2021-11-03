#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

#include "articulo.h"


typedef struct _nodo{
    stArticulo dato;
    struct _nodo *siguiente;
}nodo;

nodo* inicLista();
void muestraUnNodo(nodo* nodo);
nodo* crearNodo(stArticulo dato);
nodo* agregarAlPrincipio(nodo* lista, nodo* nuevoNodo);
void mostrarLista(nodo* lista);
nodo* agregarAlFinal(nodo* lista, nodo* nuevo);

#endif // LISTAS_H_INCLUDED
