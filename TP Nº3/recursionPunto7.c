#include <stdio.h>
#include <stdlib.h>
#include "recursionPunto7.h"
#include <conio.h>
#include <strings.h>



///EJERCICIO 7
///Buscar el menor elemento de un arreglo en forma recursiva.
///arr[]={9,2,8,0,6,5}////
int buscaMenor (int a[], int v) {
    int menor= NULL;
    if(v != 0) {
            printf("\nValidos vale %d", v);
        menor=buscaMenor(a, v-1);
        if(menor != NULL) {
            if(menor > a[v-1]){
                printf("\n inicio %d es menor y %d es validos menos 1 y validos es %d", menor, a[v-1],a[v]);
                printf("\n%d", v);
                menor = a[v-1];
                printf("\n final %d es menmor y %d es validos menos 1", menor, a[v-1]);
                printf("\n%d", menor);
            }
        } else {
            menor = a[v-1];
        }
    }
    return menor;
}


int buscaMenor2 (int a[], int v)
{
    int menor= a[v-1];
    while(v>0)
        {
        if(menor>a[v-1])
            {
                printf("{%d}",menor);
                menor = a[v-1];
            }
            else
            {
                menor = buscaMenor2(a,v-1);
            }
            v--;
            printf("--%d--", v);
        }
    return menor;
}
