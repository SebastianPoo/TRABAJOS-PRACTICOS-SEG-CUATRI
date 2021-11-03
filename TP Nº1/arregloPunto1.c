#include <stdio.h>
#include <stdlib.h>
#include "arreglosPunto1.h"
#include <conio.h>


int inicArreglo(int arreglo[],int validos, int dim){
    int i;

        for(i=validos;i<dim;i++){
            arreglo[i]=-1;
        }
        return i;
}

void muestraArrglo (int arreglo[],int validos){

    for (int i=0;i<validos;i++){
            printf("[%d]",arreglo[i]);
    }
}

int cargaArreglo(int arreglo [],int validos, int dim){
    int opcion=0;

    while (opcion!=27 && validos<dim){
        printf("\nIngrese un valor:\n");
        scanf("%d",&arreglo[validos]);
        validos++;
        printf("\nEsc para salir\n\t");
        opcion=getch();
    }
    return validos;
}

int sumaArreglo(int arreglo [], int validos){
        int suma=0;
      for(int i=0;i<validos;i++){
        suma+=arreglo[i];
      }
      return suma;
}

int cuentaElementos(int arreglo[], int validos){
        ///printf("%d", validos);
        int cont=validos;
//        for (int i=1;i<validos;i++){
//            cont=i;
//        }
        return cont;
}

float promedioArre( int arreglo[], int validos){
    float prome=0;
    int total=cuentaElementos(arreglo,validos);
    int suma=sumaArreglo(arreglo,validos);

    return prome=(float)suma/total;

}
