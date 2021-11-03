#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

void muestraUnaPersona(stPersona p){
    printf("\n\t\t//  Id de persona...........: %6d      \t  \t//", p.id);
    printf("\n\t\t//  Apellido y Nombre.......: %s,%s       \t//",p.apellido,p.nombre);
    printf("\n\t\t//  DNI.....................: %s             \t//",p.dni);
    printf("\n\t\t//  Edad....................: %d anios             \t//",p.edad);
    printf("\n\t\t//  Genero....................: %s         \t//",(p.genero==0)?"Masculino":"Femenino");///operador ternario
    printf("\n\t\t//  Calle y Numero...........: %s,%s \t\t//", p.calle,p.nro);
    printf("\n\t\t//  Codigo Postal - Localidad: %s,%s\t//", p.cpos,p.localidad);
    printf("\n\t\t//  Provincia................: %s       \t//", p.provincia);
    printf("\n----------------------------------------------------------------------");
}

void cargaArchivoPersonas( char archivo[], int cantidad){
    stPersona e;
    int i=0;
     FILE *archi=fopen(archivo, "wb");
     if (archi){
        while(i<cantidad){
                e=cargaUnaPersona();
                fwrite(&e,sizeof(stPersona),1,archi);
                i++;
        }
        fclose(archi);
     }
}

stPersona cargaUnaPersona()
{
    stPersona e;
    static int id=0;
    id++;
    e.id = id;
    strcpy(e.dni, getNroDni());
    e.edad=getEdad();
    e.genero = rand()%2;
    if (e.genero==0)
    {
        strcpy(e.nombre, getNombresMascu());
    }
    else
    {
        strcpy(e.nombre, getNombreFeme());
    }
    strcpy(e.apellido, getApellidos());
    strcpy(e.calle, getCalle());
    strcpy(e.nro, getNro());
    strcpy(e.cpos, "7600");
    strcpy(e.localidad, "Mar del Plata");
    strcpy(e.provincia, "Buenos Aires");

    return e;

}

int *getlegajo(){
        static int legajo=1000;
        legajo++;
        return legajo;
}

int *getEdad (){
 int edad;
 edad=rand()%15+50;
 return edad;
}

char *getNroDni (){
    char *nro=(char*)malloc(sizeof(char)*9);
    int dniAle=1;

    for (int i=0;i<7;i++)
    {
        if (i<2)
        {
        dniAle=dniAle+(rand()%2);
        dniAle=dniAle*10;
        }
        else
        {
          dniAle=dniAle+(rand()%9);
        dniAle=dniAle*10;
        }

    }
    itoa(dniAle,nro,10);
    return nro;
}

char *getNombresMascu(){
        char *nombre= (char*)malloc(sizeof(char)*30);
        char nombres[][30]={"Jorge","Sebastian","Javier","Leonel","Esteban","Gaspar","Jesus","Ramon","Cristian","Facundo","Omar","Marcelo","Tomas","Matias","Osvaldo","Enrrique","Carlos","Hernan","Miguel","Ruben", "Federico", "Gustavo","Fabian","Ezequiel","Rafael","Pablo"};
        strcpy(nombre, nombres [rand()%(sizeof(nombres)/30)]);
        return nombre;
}
char *getNombreFeme(){
        char *nombre= (char*)malloc(sizeof(char)*30);
        char nombres[][30]={"Cintia","Candela","Sophya","Rocio","Nansi","Florencia","Jorgelina","Ambar","Estela","Marcela","Nelida","Maria", "Vanesa","Soledad", "Paola", "Paula", "Patricia","Noelia","Adriana","Pilar","Romina", "Esmeralda", "Lorena", "Gabriela", "Alejandra"};
        strcpy(nombre, nombres [rand()%(sizeof(nombres)/30)]    );
        return nombre;
}
char *getApellidos(){
        char *apellido= (char*)malloc(sizeof(char)*30);
        char apellidos[][30]={"Palma","Messi","Roqueet","Montero","Fernadez","Piñero","Morales","Socorro","Govea","Morillo","Atencio","Bermudez","Cruz","Rincon","Lisboa","Rivera","Quivera","Avila","Bravo","Ramos","Taborda","lubo","Urdaneta","Landino","Garcia","Andrade","Vargas"};
        strcpy(apellido,apellidos[rand()%(sizeof(apellidos)/30)]);
        return apellido;
}
char *getCalle(){
    char *calle = (char*)malloc(sizeof(char)*30);
    char calles[][30]={"San Lorenzo","Rivadavia","Roca","Don Orione","Av. Constitucion","Av. Jara", "Av. Luro", "Av. Colon", "Alem"};

    strcpy(calle, calles[rand()%(sizeof(calles)/30)]);
    return calle;
}
char *getNro (){
    char *nro=(char*)malloc(sizeof(char)*5);
    itoa(rand()%10000,nro,10);
    return nro;
}
