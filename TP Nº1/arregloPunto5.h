#ifndef ARREGLOPUNTO5_H_INCLUDED
#define ARREGLOPUNTO5_H_INCLUDED

/**5. Sea una matriz de n�meros enteros, de dimensiones: 12 filas y 31 columnas. Contienen las precipitaciones correspondientes a un a�o entero. Las filas corresponden a los meses y las columnas a los d�as. Se pide:
a. Hacer una funci�n para cargar la matriz de forma autom�tica.
b. Hacer una funci�n que retorne el d�a de m�xima precipitaci�n para un mes determinado.
c. Hacer una funci�n que cargue en un arreglo de 12 posiciones el resultado de aplicar la fn anterior a cada
mes de a�o.
d. Hacer la funci�n main con el men� correspondiente. **/

void cargaMatriz (int fil, int col, int m [fil][col]);
void muestraMatriz (int fil, int col, int m[fil][col]);
int buscaMayorMatrizFila (int fil,int col, int m[fil][col]);
void matrizAarregloPuntero (int fil, int col, int m[fil][col], int arreglo[],int *validos);


#endif // ARREGLOPUNTO5_H_INCLUDED
