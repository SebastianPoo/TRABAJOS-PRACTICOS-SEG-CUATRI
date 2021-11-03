#include <stdio.h>
#include <stdlib.h>
#include "arregloPunto4.h"
#include <conio.h>
#include <strings.h>

int posicionMayor (int arreglo[], int validos)
{
    int pos=-1;
    int i=0;
    int mayor=0;
    while (i<validos)
        {
            if(mayor <arreglo[i])
            {
                mayor=arreglo[i];
                pos=i;
            }
             i++;
        }
        return pos;
}
