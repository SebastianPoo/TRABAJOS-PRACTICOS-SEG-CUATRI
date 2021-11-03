#include "pila_lista.h"


void inicpila(Pila *p)
{
    p->dim = 50;
    p->dato = (stPersona *)malloc(p->dim*sizeof(stPersona));
    p->v = 0;
}

void apilar(Pila *p, stPersona dato)
{
    if(p->v == p->dim)
    {
        p->dim+=50;  /// p->dim = p->dim + 50;
        p->dato = (stPersona *)realloc(p->dato, p->dim * sizeof(stPersona));
    }
    p->dato[p->v] = dato;
    p->v++;
}

stPersona desapilar(Pila *p)
{
    stPersona z;
    if(p->v > 0)
    {
        z = p->dato[p->v -1];
        p->v--;
    }
    return z;
}

stPersona tope(Pila *p)
{
    return p->dato[p->v - 1];
}

int pilavacia(Pila *p)
{
    return (p->v <= 0) ? 1 : 0;
}

nodoLista* apilarLista (nodoLista* lista, stPersona dato)
{
    if(!lista)
    {
        lista=crearNodoLista(dato);
    }
    else
    {
        lista=agregarAlFinal(lista,crearNodoLista(dato));
    }
    return lista;
}

nodoLista* topeLista (nodoLista* lista)
{
    return buscaUltimo(lista);
}

nodoLista* desapilarLista(nodoLista* lista)///no funciona--revisar
{
    while (lista)
    {
        muestraNodo(lista);
        nodoLista* ante = lista;
        lista=lista->siguiente;
        if (lista->siguiente==NULL)
        {
            nodoLista* borrar=lista;
            free(borrar);
            ante->siguiente=lista->siguiente;
        }
    }
    return lista;
}

int esPar (char *dni[])
{
    int iDNI =atoi(dni);
    printf("\[%s] y {%d}",dni,iDNI);
    return iDNI%2;
}

void mostrarPilaLista(Pila *p)
{
    int i;
    printf("\n Pila de Personas");
    for( i=0; i < p->v; i++){
        muestraUnaPersona(p->dato[i]);
    }
}
