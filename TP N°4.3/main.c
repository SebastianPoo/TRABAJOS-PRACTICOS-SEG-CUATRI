#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Listas.h"

void muestraListaAlReves (nodoLista* lista);
void muestraPosParLista (nodoLista* lista);
int sumaElementosLista (nodoLista* lista);
nodoLista* borraNodoRecu( nodoLista* lista, int numId);
nodoLista* agregaOrdenado (nodoLista* lista, nodoLista* nuevo);
nodoLista* cambiaVinculosLista (nodoLista* lista);


int main()
{
    nodoLista* PrimerLista=inicLista();
    int cantiPerso=11;
    srand(time(NULL));
    int totalEdad;

    ///for (int i=0;i<cantiPerso;i++){
    ///      PrimerLista=agregarAlPrincipio(PrimerLista,crearNodoLista(cargaUnaPersona()));
    ///}
    PrimerLista=crearListaAlea(PrimerLista,11);
    muestraLista(PrimerLista);

    printf("\n");
    system("pause");
    system("cls");


    printf("\n 1. ////////////Recorrer una lista y mostrarla en forma invertida////////////////\n");

    muestraListaAlReves(PrimerLista);
    printf("\n");
    system("pause");
    system("cls");

    printf("\n 2. //////////// Sumar los elementos de una lista. ////////////////\n");

    totalEdad=sumaElementosLista(PrimerLista);
    printf("\n La suma de todas las edades es %d", totalEdad);
    printf("\n");
    system("pause");
    system("cls");


    printf("\n 3. ////////////Mostrar los elementos de una lista ubicados en una posición par. ////////////////\n");

    muestraPosParLista(PrimerLista);
    printf("\n");
    system("pause");
    system("cls");

    printf("\n 4. /////////// Borrar un nodo de una lista (buscado por un dato específico). /////////////\n");
    int bNodo=0;
    printf("\n Nodo a borrar\n"),
           scanf("%d",&bNodo);

    PrimerLista=borraNodoRecu (PrimerLista,bNodo);
    printf("\n Nodo borrado: %d", bNodo);
    muestraListaAlReves(PrimerLista);
    printf("\n");
    system("pause");
    system("cls");

    printf("\n 5.//////// Insertar un nodo o dato en una lista simplemente enlazada en forma recursiva (manteniendo el orden de forma creciente ");

    PrimerLista=agregaOrdenado(PrimerLista,crearNodoLista(cargaUnaPersona()));
    muestraLista(PrimerLista);
    printf("\n");
    system("pause");
    system("cls");

    printf("\n 6.///////// Invertir una lista cambiando los vínculos.///////////");


        muestraLista(PrimerLista);
        PrimerLista=cambiaVinculosLista(PrimerLista);
        printf("\nVinculo cambiando");
        muestraLista(PrimerLista);
        printf("\n");
        system("pause");
        system("cls");


}
void muestraListaAlReves (nodoLista* lista)
{
    if (lista)
    {
        muestraListaAlReves(lista->seg);
        muestraNodo(lista);
        /// muestraUnaPersona(lista->dato);

    }
}


void muestraPosParLista (nodoLista* lista)
{
    nodoLista* par=lista->seg;
    if (par)
    {
        muestraPosParLista(par->seg);
        muestraNodo(par);
        /// muestraUnaPersona(lista->dato);
    }
}

int sumaElementosLista (nodoLista* lista)
{
    int suma=0;
    int sum=0;
    if(lista)
    {
        sum=lista->dato.edad;
        printf("-%d",sum);
        suma=sum + sumaElementosLista(lista->seg);
    }
    return suma;
}

nodoLista* borraNodoRecu( nodoLista* lista, int numId)
{
    nodoLista* listaAux=lista;
    nodoLista* borrar=NULL;
    if (listaAux)
    {
        if(listaAux->dato.id==numId )
        {
            borrar=listaAux;
            listaAux=listaAux->seg;
            free(borrar);
        }
        else
        {
            listaAux->seg=borraNodoRecu(listaAux->seg, numId);
        }
        lista=listaAux;
    }
    return lista;
}


nodoLista* agregaOrdenado (nodoLista* lista, nodoLista* nuevo)
{
    if (lista==NULL)
    {
        lista=nuevo;
    }
    else
    {

        if (strcmp(lista->dato.dni,nuevo->dato.dni)>0)
        {
            nuevo->seg=lista;
            lista=nuevo;
        }
        else
        {
            lista->seg=agregaOrdenado(lista->seg,nuevo);
        }
    }

    return lista;
}

nodoLista* cambiaVinculosLista (nodoLista* lista) ///NO LO PUDE RESOLVER ///NO LO PUEDO INVERTIR///
{
    nodoLista* anterior=lista;
    if (anterior->seg!=NULL)
    {
        anterior=anterior->seg;
        }
        else
        {
            printf("\n lista 1 es %p", lista);
            anterior->seg=cambiaVinculosLista(anterior->seg);

        }

    return anterior;
}
