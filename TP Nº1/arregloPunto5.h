#ifndef ARREGLOPUNTO5_H_INCLUDED
#define ARREGLOPUNTO5_H_INCLUDED

/**5. Sea una matriz de números enteros, de dimensiones: 12 filas y 31 columnas. Contienen las precipitaciones correspondientes a un año entero. Las filas corresponden a los meses y las columnas a los días. Se pide:
a. Hacer una función para cargar la matriz de forma automática.
b. Hacer una función que retorne el día de máxima precipitación para un mes determinado.
c. Hacer una función que cargue en un arreglo de 12 posiciones el resultado de aplicar la fn anterior a cada
mes de año.
d. Hacer la función main con el menú correspondiente. **/

void cargaMatriz (int fil, int col, int m [fil][col]);
void muestraMatriz (int fil, int col, int m[fil][col]);
int buscaMayorMatrizFila (int fil,int col, int m[fil][col]);
void matrizAarregloPuntero (int fil, int col, int m[fil][col], int arreglo[],int *validos);


#endif // ARREGLOPUNTO5_H_INCLUDED
