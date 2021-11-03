
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "recursionPunto5.h"

int capicua(int arreglo[], int validos){
      int flag=-1;
      if (flag==-1&&validos!=0){
          printf("\n1ºer IF-Validos -7 %d y Validos -1 %d", arreglo[validos-7],arreglo[validos-1]);
            if (arreglo[validos-7]==arreglo[validos-1]){

                    printf("\n2ºdoIF-Validos -1 %d y Validos -7 %d", arreglo[validos-1],arreglo[validos-7]);
                flag =  capicua(arreglo,validos-1);
            }
      }
    return flag;

}




/**5. Determinar en forma recursiva si un arreglo es capicúa. */
