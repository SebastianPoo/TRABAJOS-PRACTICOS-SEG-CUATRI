#ifndef LISTAS-SIMPLES_H_INCLUDED
#define LISTAS-SIMPLES_H_INCLUDED
#include "persona.h"

typedef struct nodoLista{
    stPersona dato;
    struct _nodo *siguiente;
}nodoLista;

nodoLista* inicLista();
nodoLista* crearNodoLista(stPersona dato);
nodoLista* agregarAlPrincipio(nodoLista* lista, nodoLista* nuevo);
void muestraLista(nodoLista* lista);
void muestraNodo(nodoLista* nodo);
nodoLista* crearListaAlea (nodoLista* lista, int cantidad);
nodoLista* insertaOrdenadoMenorMayor(nodoLista* lista, nodoLista* nuevo);
nodoLista* agregarPorApellido (char archivo[], nodoLista* lista);
nodoLista* buscaUltimo(nodoLista* lista);
nodoLista* agregarAlFinal(nodoLista* lista, nodoLista* nuevo);
nodoLista* borraNodo (nodoLista* lista, int *mayor);
nodoLista* borraNodoRecu( nodoLista* lista, int *numId);


#endif // LISTAS-SIMPLES_H_INCLUDED
