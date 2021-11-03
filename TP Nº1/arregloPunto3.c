#include <stdio.h>
#include <stdlib.h>
#include "arregloPunto3.h"
#include <conio.h>
#include <strings.h>

int retornaDecimal (int arreglo [], int validos)
{
    int decimal=0;
    for (int i=0;i<validos;i++)
        {
            decimal*=10;
            decimal=(decimal+arreglo[i]);
        }
        return decimal;
}
