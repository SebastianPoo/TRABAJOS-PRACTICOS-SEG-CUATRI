#ifndef ARREGLOSPUNTO1_H_INCLUDED
#define ARREGLOSPUNTO1_H_INCLUDED
/** a. Hacer una funci�n que inicialice las celdas del arreglo en �1.
    b. Hacer una funci�n que permita al usuario ingresar los valores. No se conoce la cantidad de antemano.
    c. Hacer una funci�n que sume el contenido del arreglo y lo retorne.
    d. Hacer una funci�n que cuente la cantidad de valores ingresados.
    e. Hacer una funci�n que reciba como par�metro el arreglo ya cargado, calcule y retorne el valor promedio
    usando las funciones anteriores (c y d).
*/

int inicArreglo(int arreglo[],int validos, int dim);
void muestraArrglo (int arreglo[],int validos);
int cargaArreglo(int arreglo [],int validos, int dim);
int sumaArreglo(int arreglo [], int validos);
int cuentaElementos(int arreglo[], int validos);
float promedioArre( int arreglo[], int validos);

#endif // ARREGLOSPUNTO1_H_INCLUDED
