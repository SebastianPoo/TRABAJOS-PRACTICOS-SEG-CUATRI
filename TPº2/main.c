#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

#define DIM 30

int cantGenero (stPersona arreglo[],int validos, int genero);
char* cargaArregloGenero(stPersona arreglo [],int totalValidos, int cant, int *validos, int genero);

int main()
{
    stPersona arregloP[DIM];
    stPersona *arregloG=NULL;
    int vArregloG =0;
    int vArregloP=DIM;
    int generoCant;
    int gen;

    for(int i =0; i<DIM; i++)
    {
        arregloP[i]=cargaUnaPersona();
    }

    for(int i=0; i<vArregloP; i++)
    {
        muestraUnaPersona(arregloP[i]);
    }

    printf("\nIngrese un genro a buscar (0(cero) para Femenino - 1 para Masculino :");
    scanf("\t%d",&gen);
    generoCant=cantGenero(arregloP,vArregloP,gen);
    printf("\nLa cantidad de personas %s es %d",(gen==0)?"Femenino":"Masculino",generoCant );


    arregloG=cargaArregloGenero(arregloP,vArregloP,generoCant,&vArregloG,gen);
    printf("\n Arreglo de personas %s",(gen==0)?"Femenino":"Masculino");
    for(int i=0; i<vArregloG; i++)
    {
        muestraUnaPersona(arregloG[i]);
    }

}

int cantGenero (stPersona arreglo[],int validos, int genero)///EN ESTE CASO EL GENERO ES UN ESNTERO. PARA EL PRINT SE USA EL OPERADOR TERNARIO///
{
    int cant=0;
    int i=0;
    while (i<validos)
    {

        if(arreglo[i].genero==genero) /// SI ES 0 "Femenino"- 1 ES  "Masculino"///
        {
            cant++;
        }
        i++;
    }
    return cant;
}

//char * agregaEnString(char** a, char* b){
//    if((*a)){ /// if((*a)!=NULL)
//        (a)=(char)realloc((a), sizeof(char)(strlen(b)+strlen(*a)+1));
//        strcat((*a), b);
//    }else{
//        (a)=(char)malloc(sizeof(char)*(strlen(b)+1));
//        strcpy((*a),b);
//    }
//    return (*a);
//}

//char* cargaArreglo(char archivo[], int *v){
//    int cantReg = cuentaRegistros(archivo, sizeof(stDomicilio));
//    stDomicilio* d = (stDomicilio*)malloc(sizeof(stDomicilio)*cantReg);
//    FILE* archi = fopen(archivo, "rb");
//    if(archi){
//        fread(d, sizeof(stDomicilio), cantReg, archi);
//    }
//    (*v)=cantReg;
//    return d;
//}

char* cargaArregloGenero(stPersona arreglo [],int totalValidos, int cant, int *validos, int genero)
{
    stPersona* d = (stPersona*)malloc(sizeof(stPersona)*cant);
    int i=0;
    printf("\nLa cantidad ingresada es %d", genero);
    while (i<totalValidos)
    {
        if(arreglo[i].genero==genero) /// SI ES 0 "Femenino"- 1 ES  "Masculino"///
        {
            d[*validos]=arreglo[i];
            (*validos)++;
        }
        i++;
    }
    return d;
}
