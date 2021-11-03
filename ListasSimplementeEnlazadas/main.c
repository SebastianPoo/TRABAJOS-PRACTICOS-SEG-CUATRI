#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LISTAS-SIMPLES.h"
#include "pila_lista.h"
#define AR_PERSONAS "veintePersonas"
#define AR_PERSONAS01 "veintePersonas01"

int buscaPersona (nodoLista* lista, char nombre[]);
nodoLista* invertirElementos (nodoLista* lista);
nodoLista* pila2ListaEdadPar (Pila *pila,nodoLista* lista);


int main()
{
    nodoLista* lista1=inicLista();
    nodoLista* lista2=inicLista();
    nodoLista* lista3=inicLista();
    nodoLista* lista4=inicLista();
    Pila pPersonas;
    inicpila(&pPersonas);
    char nombre[30];
    int edadMayor;
    srand(time(NULL));

    ///cargaArchivoPersonas(AR_PERSONAS,20);
    ///cargaArchivoPersonas("veintePersonas01",20);
    lista1= agregarPorApellido (AR_PERSONAS, lista1);
    lista2= agregarPorApellido (AR_PERSONAS01, lista2);

    printf("\nLista 01");

    muestraLista(lista1);
    printf("\nLista 02");
    muestraLista(lista2);

    /**============================================================================================================**/
    /**============================================================================================================**/
    printf("\n\t\t======TP 4.1 LISTAS SIMPLES=======\n\n");
    /**============================================================================================================**/
    /**============================================================================================================**/
    printf("\nPUNTO 2)a)---Hacer una función que retorne un 1 (uno) o 0 (cero) si existe un determinado elemento en una lista dada. ");
    do
    {
        printf("\n Ingrese un nombre a buscar\n");
        fflush(stdin);
        gets(&nombre);
        if(lista1 && buscaPersona(lista1, nombre))
        {
            printf("\n La persona %s buscada se encuentra", nombre);
        }
        else
        {
            printf("\n No existe el nombre %s, intente con otra persona ",nombre);
        }
    }
    while(!buscaPersona(lista1,nombre));
    printf("\n=====================");
    system("pause");
    /**============================================================================================================**/
    /**============================================================================================================**/
    printf("\n PUNTO 3----Hacer una función que intercale en orden los elementos de dos listas ordenadas generando una nueva lista.");


    /**============================================================================================================**/
    /**============================================================================================================**/
    printf("\n PUNTO 4----Funciones de listas simple inplementando pilas.");
    printf("\n Apilar dato");
    for(int i=0; i<15; i++)
    {
        apilar(&pPersonas,cargaUnaPersona());
    }
    mostrarPilaLista(&pPersonas);
//        printf("\nmuestra tope");
//        muestraNodo(topeLista(lista3));

    /** printf("\nmuestra lista sin tope");
     lista3=desapilarLista(lista3);             ///REVISAR NO FUNCION ADESAPILAR///
     muestraLista(lista3);
     **/

    printf("\n=====================");
    system("pause");
    /**============================================================================================================**/
    /**============================================================================================================**/
    printf("\n PUNTO 5----Hacer una función que intercale en orden los elementos de dos listas ordenadas generando una nueva lista.");
    ///   lista1=invertirElementos(lista1);
///      muestraLista(lista1);
    printf("\n=====================");
    system("pause");

    /**============================================================================================================**/
    /**============================================================================================================**/
    printf("\n PUNTO -6---TDA PILA CON 15 PERSONAS");
    printf("\n PUNTO -6_A_---PILA A LISTA SEGUN EDAD PAR");

    lista4 = pila2ListaEdadPar(&pPersonas,lista4);
    muestraLista(lista4);
    printf("\n PUNTO -6_B_---BORRAR DE LA LISTA LOS MAYORES DE UNA EDAD INGRESADAPOR PARAMETRO");
    printf("\nIngrese la edad mayo deseada\t\t");
    scanf("%d", &edadMayor);

    lista4=borraNodoRecu(lista4, edadMayor);
    muestraLista(lista4);
    printf("\n NO BORRA TODOS LOS NODOS CORRESPONDIENTES SOLO LOS DOS PRIMERO, CUANDO ENTRA A LA RECURSIVA NO BORRA MAS");
    printf("\n=====================");
    system("pause");

    /**============================================================================================================**/
    /**============================================================================================================**/


    printf("Hello world!\n");
    return 0;
}

int buscaPersona (nodoLista* lista, char nombre[])
{
    int flag=NULL;
    while (lista && !flag)
    {
        if(strcmp(lista->dato.nombre,nombre)==0)
        {
            flag=1;
        }
        lista=lista->siguiente;
    }
    return flag;
}

nodoLista* invertirElementos (nodoLista* lista)
{
    nodoLista* listaInvertida=buscaUltimo(lista);
    while (lista)
    {
        listaInvertida=agregarAlFinal(listaInvertida,lista);
        lista=lista->siguiente;

    }
    return listaInvertida;
}


/**nodoLista* pila2Lista (Pila *pila, nodoLista* lista)  ////VER PORQUE NO FUNCIONA LA FUNCION ESPAR////
{
    int i=0;
    while(i<pila->v)
    {
        printf("\n Entro al for y el DNI es %s Y %d", pila->dato[i].dni,esPar(pila->dato[i].dni));
        if(esPar(pila->dato[i].dni))
        {
            printf("\n el dni es par");
            lista=agregarAlFinal(lista,crearNodoLista(pila->dato[i]));
        }
        i++;
    }
    return lista;
}
**/

nodoLista* pila2ListaEdadPar(Pila *pila, nodoLista* lista)
{
    int i=0;
    while(i<pila->v)
    {
        if((pila->dato[i].edad%2)==0)
        {
            lista=agregarAlFinal(lista,crearNodoLista(pila->dato[i]));
        }
        i++;
    }
    return lista;
}


