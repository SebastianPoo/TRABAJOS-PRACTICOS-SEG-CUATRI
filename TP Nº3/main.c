#include <stdio.h>
#include <stdlib.h>

/***
*/



    int main(int argc, char *argv[])
{

    int selected;
    int menor;
    int numeros[8]={66,55,14,33,22,44,55,66};
    int vNum=7;
    int suma;
    int siCapi=-1;
    int meno;
    int menoR;

            printf("\n===7. Buscar el menor elemento de un arreglo en forma recursiva.==== \n");
            for (int i=0;i<8;i++)
            {
                printf("-%d",numeros[i]);
            }

            menor=buscaMenor (numeros, vNum);
            printf("\n menor elemento:%d", menor);
            printf("\n\t");
            system("pause");

            printf("\n===6. Sumar en forma recursiva los elementos de un arreglo de enteros y retornar el total de la suma.==== \n");
            suma=sumaRecursiva(numeros,vNum);
            printf("\nLa suma de los elemntos es %d", suma);
            printf("\n\t");
            system("pause");


            printf("\n=== 5. Determinar en forma recursiva si un arreglo es capicúa.==== \n");
            siCapi=capicua(numeros,vNum);
            if(siCapi!=-1){
                printf("\nEs capicua %d", siCapi);
            }else{
                printf("\nNo es capicua %d", siCapi);
            }
            printf("\n\t");
            system("pause");

            printf("\n=== 8. Buscar el menor elemento de un archivo de números enteros de forma recursiva.==== \n");
            printf("(desde el mismo archivo)\n");

            ///persistirArreglo("numArchivo", numeros,vNum);
            muestraArchivoEnteros("numArchivo");
            meno = buscaMenorDeArchivo("numArchivo");
            menoR=buscaMenorDeArchivoRecursivo("numArchivo", menoR)
           printf("\n El dato menor del archivo es %d", meno);



}


