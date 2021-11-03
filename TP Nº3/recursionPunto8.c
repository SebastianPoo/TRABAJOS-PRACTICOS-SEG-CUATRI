#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>





/**8. Buscar el menor elemento de un archivo de números enteros de forma recursiva. (desde el mismo archivo)
*/


 ///PERSISTIR UN ARREGLO EN ARCHIVO///

void persistirArreglo(char archivo[], int arreglo[],int validos){
    FILE* pArch = fopen(archivo,"ab");
    if (pArch){
        for (int i = 0 ; i < validos ; i++){
            fwrite(&arreglo[i],sizeof(int),1,pArch);
        }
        fclose(pArch);
    }
}

///DESPERSISTENCIA///
void despersistencia(char archivo[], int arreglo[], int* validos){

    FILE* pArch = fopen(archivo,"rb");
    int aux;

    if (pArch){
        while (fread(&aux,sizeof(int),1,pArch) > 0){
                arreglo[*validos] = aux;
                (*validos)++;
           }

        fclose(pArch);
    }
}


/// MUESTRA ARREGLO DE ENTEROS///
void muestraArregloDeEnteros (int arreglo[], int v){
    for(int i = 0; i<v; i++){
        printf("\n[%d]",arreglo[i]);
    }
}

///MUESTRA ARCHIVO///
void muestraArchivoEnteros(char archivo[]){
    int a=NULL;

    FILE *pArchi = fopen(archivo, "rb");

    if(pArchi != NULL){
        while (fread(&a, sizeof(int),1,pArchi)> 0){
          printf("[%d]",a);
        }
        fclose(pArchi);
    }else{
        printf("\n ERROR DE APERTURA DE ARCHIVO");
    }

}

int cuentaRegistros(char archivo[], int tamanio){
    int cant = 0;
    FILE *pArch = fopen(archivo, "rb");

    if(pArch){
        fseek(pArch, 0, SEEK_END);
        cant = ftell(pArch)/tamanio; /// tamanio es sizeof(stArticulo)

        fclose(pArch);
    }
    return cant;
}


int buscaMenorDeArchivo (char archivo[]){
    int a=0;
    int menor=0;

    FILE *pArchi = fopen(archivo, "rb");

    if(pArchi != NULL){
            if (fread(&a,sizeof(int),1,pArchi)){
                menor=a;
            }
        while (fread(&a, sizeof(int),1,pArchi)> 0){
                if (a<menor){
                        menor=a;}



        }
        fclose(pArchi);
    }else{
        printf("\n ERROR DE APERTURA DE ARCHIVO");
    }
 return menor;
}


int buscaMenorDeArchivoRecursivo (char archivo[], int menor){
    int a=0;

    FILE *pArchi = fopen(archivo, "rb");

    if(pArchi != NULL){
            if (fread(&a,sizeof(int),1,pArchi)){
                menor= buscaMenorDeArchivoRecursivo(archivo,a);
                }
        }
        fclose(pArchi);
    }else{
        printf("\n ERROR DE APERTURA DE ARCHIVO");
    }
 return menor;
}
