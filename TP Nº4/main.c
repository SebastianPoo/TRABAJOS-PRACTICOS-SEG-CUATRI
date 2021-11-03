#include <stdio.h>
#include <stdlib.h>





int main(int argc, char *argv[])
{

    int selected;

    do
    {
        selected = menu();
        switch(selected)
        {
        case 1:


            printf("\n--");
            system("pause");
            break;
        case 2:
            funcion_x();
            break;
        case 3:
            funcion_x();
            break;
        case 4:
            funcion_x();
            break;
        case 5:
            funcion_x();
            break;
        case 6:
            funcion_x();
            break;
        case 7:
            funcion_x();
            break;
        case 8:
            funcion_x();
            break;
        case 9:
            funcion_x();
            break;
        case 10:
            funcion_x();
            break;
        case 0:
            printf("\n\nPROGRAMA TERMINADO\n");

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
    printf("\nLABORATORIO 2");
    printf("\n----------");
    printf("\nMENU TRABAJO PRACTICO NUMERO 4");
    printf("\nLISTAS SIMPLEMENTE ENLAZADAS");
    printf("\n-----------");
    printf("\n1-PUNTO 1-ARREGLO DINAMICO");
    printf("\n2-");
    printf("\n3-)");
    printf("\n4-");
    printf("\n5-");
    printf("\n6-)");
    printf("\n7-);
    printf("\n8-Suma y retorna primeros 2 elementos de una pila,sin alterar su contenido");
    printf("\n9-Calcula promedio de una pila (usa funcion de suma, division y cuenta)");
    printf("\n10-Recibe pila con numeros de un digito y los transforma en un numero decimal");
    printf("\n0-PARA SALIR");
    printf("\n\nELIJA OPCION: ");
    scanf("%d",&input);
    return input;
}
funcion_x()
{
    system("cls");
    system("color 1E");
    printf("\n\nOPCION SIN FUNCION, ELIJA OTRA\n");
    system("PAUSE");
}
