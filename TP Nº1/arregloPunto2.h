#ifndef ARREGLOPUNTO2_H_INCLUDED
#define ARREGLOPUNTO2_H_INCLUDED

/** a. Hacer una funci�n para la carga del arreglo.
    b. Hacer una funci�n para invertir el arreglo.
    c. Hacer una funci�n para mostrar el contenido del arreglo.
*/

void muestraArrgloChar (char arreglo[][15], int validos);
char cargaArregloChar(char arreglo [][20],int validos, int dim);
int intToChar ( int arreglo[], char arregloChar[][15], int validos);
void invierteArreglo (char arreglo[][20], int validos);
#endif // ARREGLOPUNTO2_H_INCLUDED
