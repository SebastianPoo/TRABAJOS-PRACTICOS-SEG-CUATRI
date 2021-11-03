#include <stdio.h>
#include <stdlib.h>
#include "arregloPunto2.h"
#include <conio.h>
#include <strings.h>


char cargaArregloChar(char arreglo [][20],int validos, int dim){
    int opcion=0;
    int i=validos;
    while (i<dim &&opcion!=27){
        printf("\nIngrese una palabra:\n");
        scanf("%s",arreglo[i]);
        i++;
        printf("\nEsc para salir\n\t");
        opcion=getch();

    }
    return i;
}

void muestraArrgloChar (char arreglo[][15], int validos){

    for (int i=0;i<validos;i++){
            printf("[%s]",arreglo[i]);
    }
}

int intToChar ( int arreglo[], char arregloChar[][15], int validos){
        int I=0;
        for (int i =0; i<validos;i++){

            itoa(arreglo[i],arregloChar[I],10);
            I++;
        }
    return I;
}

void invierteArreglo (char arreglo[][20], int validos){
    int i=validos-1;
    while (i>=0){
        printf("[%c]",arreglo[i-1]);
        i--;
    }
}
