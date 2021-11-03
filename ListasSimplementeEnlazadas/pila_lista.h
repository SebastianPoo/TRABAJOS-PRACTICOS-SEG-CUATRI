#ifndef PILA_LISTA_H_INCLUDED
#define PILA_LISTA_H_INCLUDED

#include <stdio.h>
#include <malloc.h>
#include "persona.h"
#include "LISTAS-SIMPLES.h"

typedef struct{
    stPersona *dato;
    int v;
    int dim;
}Pila;

void inicpila(Pila *p);
void apilar(Pila *p, stPersona dato);
stPersona desapilar(Pila *p);
stPersona tope(Pila *p);
int pilavacia(Pila *p);
nodoLista* apilarLista (nodoLista* lista, stPersona dato);
nodoLista* topeLista (nodoLista* Lista);
nodoLista* desapilarLista(nodoLista* Lista);
void mostrarPilaLista(Pila *p);
int esPar (char *dni[]);


#endif // PILA_LISTA_H_INCLUDED
