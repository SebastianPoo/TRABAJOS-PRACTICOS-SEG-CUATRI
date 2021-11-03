#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED
#include "persona.h"

typedef struct nodoLista{
    stPersona dato;
    struct _nodo *seg;
}nodoLista;

nodoLista* inicLista();
nodoLista* crearNodoLista(stPersona dato);
nodoLista* agregarAlPrincipio(nodoLista* lista, nodoLista* nuevo);
void muestraLista(nodoLista* lista);
void muestraNodo(nodoLista* nodo);
nodoLista* crearListaAlea (nodoLista* lista, int cantidad);
nodoLista* insertaOrdenadoMenorMayor(nodoLista* lista, nodoLista* nuevo);
#endif // LISTAS_H_INCLUDED
