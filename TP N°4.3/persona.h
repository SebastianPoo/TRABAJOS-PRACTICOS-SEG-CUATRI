#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    int id;
    char nombre[30];
    char apellido[30];
    char dni[10];
    char genero;
    int edad;
    char calle[30];
    char nro[8];
    char localidad[30];
    char cpos[8];
    char provincia[30];
}stPersona;

void muestraUnaPersona(stPersona p);
void cargaArchivoPersonas( char archivo[], int cantidad);
stPersona cargaUnaPersona();
int *getlegajo();
int *getEdad ();
char *getNroDni ();
char *getNombresMascu();
char *getNombreFeme();
char *getApellidos();
char *getCalle();
char *getNro ();

#endif // PERSONA_H_INCLUDED
