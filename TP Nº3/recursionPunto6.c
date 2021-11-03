#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "recursionPunto6.h"

/**6. Sumar en forma recursiva los elementos de un arreglo de enteros y retornar el total de la suma.
*/

int sumaRecursiva(int arreglo[], int v){
    int rta=0;

    if (v!=0){
      printf("\n El valor de validos en ida es %d y dentro de validos es %d",v, arreglo[v-1]);

     rta=arreglo[v-1]+sumaRecursiva(arreglo,v-1);
      printf("\n El valor de validos en vuelta es %d y dentro de validos es %d ",v, arreglo[v-1]);
    }

return rta;

}
