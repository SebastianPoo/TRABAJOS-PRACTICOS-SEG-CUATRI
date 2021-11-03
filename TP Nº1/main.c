#include <stdio.h>
#include <stdlib.h>
#include "arreglosPunto1.h"
#include "arregloPunto2.h"
#include "arregloPunto3.h"
#include "arregloPunto4.h"
#include "arregloPunto5.h"
/***1. Se tiene un arreglo de números enteros positivos. Se desea obtener el promedio de sus valores.
    2. Invertir el contenido de un arreglo de caracteres. Para ello se debe modularizar de la siguiente forma:

*/



    int main(int argc, char *argv[])
{
    int selected;
    int arreglo[100];
    int vArreglo=0;
    char arreglo1[20][10];
    int vArreglo1=0;
    int sumaValores=0;
    int decimal;
    int posicion;
    int diaCalido;
    int matriz [12][31];
    int diasCalidosAno[12];
    int vDiasCalidosAno=0;


    int cantEl;
    float promedio;


    do
    {
        selected = menu();
        switch(selected)
        {
        case 1:
            vArreglo=inicArreglo(arreglo,vArreglo,100);
            printf("\nPunto 1-indice a\n");
            muestraArrglo(arreglo,vArreglo);
                        printf("\nPunto 1-indice b\n");
            vArreglo=0;
            vArreglo=cargaArreglo(arreglo,vArreglo,100);
            printf("\nPunto 1-indice c\n");
            sumaValores=sumaArreglo(arreglo,vArreglo);
            printf("\nLa suma de los elementos del arreglo es %d\n",sumaValores);
            printf("\nPunto 1-indice d\n");
            cantEl=cuentaElementos(arreglo,vArreglo);
            printf("\n\tLa cantidad de elementos ingresados es:%d\n",cantEl);
            printf("\nPunto 1-indice e\n");
            promedio=promedioArre(arreglo,vArreglo);
            printf("\n\tPromedio %.2f",promedio);

             printf("\n\t");
            system("pause");

            break;
        case 2:
             printf("\nPunto 2-indice a\n");
             vArreglo1=cargaArregloChar(arreglo1,vArreglo1,20);
             printf("\nPunto 2-indice b\n");
            invierteArreglo(arreglo1,vArreglo1);

            printf("\n\t");
            system("pause");


            break;
        case 3:
            decimal=retornaDecimal(arreglo,vArreglo);
            printf("\nEl valor decimal es %d\n",decimal);
            printf("\nArreglo cargado\n");
            muestraArrglo(arreglo,vArreglo);
            printf("\n\t");
            system("pause");
            break;
        case 4:
            posicion=posicionMayor(arreglo,vArreglo);
            printf("\nLa posicion moyor del arreglo es %d y el valor es %d",posicion,arreglo[posicion]);
            printf("\nArreglo\n");
            muestraArrglo(arreglo,vArreglo);
            printf("\n\t");
            system("pause");
            break;
        case 5:
             cargaMatriz(12,31,matriz);
             muestraMatriz(12,31,matriz);
             diaCalido=buscaMayorMatrizFila(0,31,matriz);
             printf("\nEl dia mas calidos del mes es:%d con %d grados", diaCalido,matriz[0][diaCalido-1]);
             matrizAarregloPuntero(12,31,matriz,diasCalidosAno,&vDiasCalidosAno);
             printf("\nDia mas calido mes a mes del ano \n");
             muestraArrglo(diasCalidosAno,vDiasCalidosAno);
            printf("\n\t");
            system("pause");
            break;
        case 6:

             printf("\n\t");
            system("pause");
            break;
        case 7:
            printf("entero a char en proceso\n\t");
            vArreglo1=intToChar (arreglo,arreglo1,vArreglo);
            printf("Arreglo char creado exitosamente %d\n\t", vArreglo1);
            muestraArrgloChar(arreglo1, vArreglo1);
            printf("\n\t");
            system("pause");
            break;
        case 8:


            printf("\n\t");
            system("pause");
            break;
        case 9:

            system("pause");
            break;
        case 10:
            muestraArrgloChar(arreglo1,vArreglo1);
            printf("\n\t");
            system("pause");
            break;
        case 0:
            printf("\n\nTERMINATE THE PROGRAM\n");

            break;
        }

    }
    while(selected!=0);

    system("PAUSE");
    return 0;
}
int menu()
{
    system("color 1F");
    int input;
    system("cls");
    printf("\nLABORATORIO 1");
    printf("\n----------");
    printf("\nLIST MENU");
    printf("\n-----------");
    printf("\n1-PUNTO 1-ARREGLO ENTEROS");
    printf("\n2-PUNTO 2-ARREGLO DE CARACTERES");
    printf("\n3-PUNTO 3- ARREGLO A DECIMAL");
    printf("\n4-PUNTO 4-POSICION DEL MAYOR");
    printf("\n5-Punto 5 -Matrices-");
    printf("\n6-LIBRE");
    printf("\n7-PUNTO 7-INTERCAMBIO DE VARIABLE- PUNTERO");
    printf("\n8-Carga nombres y lo muestgra");
    printf("\n9-Muestra arreglo invertido");
    printf("\n10-Muestra arreglo char");
    printf("\n0-QUIT");
    printf("\n\nENTER YOUR CHOICE: ");
    scanf("%d",&input);
    return input;
}
funcion_x()
{
    system("cls");
    system("color 1E");
    printf("\n\n aca deberia estar la funcion pedida en cada ejercicio de la practica\n");
    system("PAUSE");
}





