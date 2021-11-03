#include <stdio.h>
#include <stdlib.h>

#include "LISTAS-SIMPLES.h"



nodoLista* inicLista()
{
    return NULL;
}

nodoLista* crearNodoLista( stPersona dato)
{
    nodoLista* nuevo = (nodoLista*)malloc(sizeof(nodoLista));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

nodoLista* agregarAlPrincipio(nodoLista* lista, nodoLista* nuevo)
{
    nuevo->siguiente = lista;
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
            aux = aux->siguiente;
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
    if (lista==NULL)
    {
        lista=nuevo;
    }
    else
    {
        if(strcmp(lista->dato.dni,nuevo->dato.dni)>0)
        {
            nuevo->siguiente=lista;
            lista=nuevo;
        }
        else
        {
            lista->siguiente=insertaOrdenadoMenorMayor(lista->siguiente,nuevo);
        }
    }
    return lista;
}


nodoLista* agregarPorApellido (char archivo[], nodoLista* lista)///inicializar lista en el main///
{
    stPersona a;
    FILE* archi=fopen(archivo,"rb");
    if (archi)
    {
        while(fread(&a,sizeof(stPersona),1,archi)>0)
        {
            if (lista==NULL)
            {
                lista=crearNodoLista(a);
            }
            else
            {
                if(strcmp(a.apellido, lista->dato.apellido)>0)
                {
                    lista=agregarAlPrincipio(lista,crearNodoLista(a));
                }
                else
                {
                    nodoLista* ante=lista;
                    nodoLista* aux= lista->siguiente;
                    while (aux && strcmp(a.apellido,aux->dato.apellido)<0)
                    {
                        ante=aux;
                        aux=aux->siguiente;
                    }
                    nodoLista* nuevo=crearNodoLista(a);
                    ante->siguiente=nuevo;
                    nuevo->siguiente=aux;
                }
            }
        }
        fclose(archi);

    }
    return lista;
}

nodoLista* buscaUltimo(nodoLista* lista)
{
    nodoLista* seg = lista;
    while(seg->siguiente!=NULL)
    {
        seg=seg->siguiente;
    }
    return seg;
}

nodoLista* agregarAlFinal(nodoLista* lista, nodoLista* nuevo)
{
    if(lista == NULL)
    {
        lista = nuevo;
    }
    else
    {
        nodoLista* ultimo = buscaUltimo(lista);
        ultimo->siguiente = nuevo;
    }

    return lista;
}

nodoLista* borraNodoRecu( nodoLista* lista, int *numId)
{
    nodoLista* listaAux=lista;
    nodoLista* borrar=NULL;
    do
    {
        if(listaAux->dato.edad > numId )
        {
            borrar=listaAux;
            listaAux=listaAux->siguiente;
            free(borrar);
        }
        else
        {
            listaAux->siguiente=borraNodoRecu(listaAux->siguiente, numId);
        }
        lista=listaAux;
    }while( listaAux->dato.edad > numId);
    return lista;
}

nodoLista* borraNodo (nodoLista* lista, int *mayor)
{
    nodoLista* listaAux=lista;
    nodoLista* borrar=NULL;
    while (listaAux)
    {
        if(listaAux->dato.edad == mayor )
        {
            borrar=listaAux;
            listaAux=listaAux->siguiente;
            free(borrar);
        }
        else
        {
            listaAux=listaAux->siguiente;
        }
    }

    return lista;
}
