#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int invertir(int);
int main()
{
    char alumno[4] = {'S', 'O','D','O'}; //EJERCICIO 1
    for(int i = 0; i<4;i++)
    {
        printf("%c", alumno[i]);
    }
    printf("\n");
//------------------------------------------------------------> EJERCICIO 2
    float promedio[14] = {1.52,2,3.1,2.41,6.23,8.28,7,1,1.23,15,12.11,13.12,15.2,14.2};
    printf("%.2f", promedio[13]);
    printf("\n");

//------------------------------------------------------------>
    //el ejercicio 3 esta bien : A es 0(o tambien false) y B es 1(o tambien true), el IF pregunta si alguna de las dos variables es true, y como B es true, entra al IF

//------------------------------------------------------------>EJERCICIO 4
    printf("%d", invertir(55));
    printf("\n");
//------------------------------------------------------------>EJERCICIO 5
//                  -----> EL Break lo que hace es finalizar de manera forzosa un bucle.
//                  -----> el Continue lo que hace es forzar la ejecución de la siguiente iteracion del bucle

//------------------------------------------------------------>EJERCICIO 6

    char nombres[5][20] ={"","","","","VACIO"};
    char nombre[20];
    do{

    printf("Ingrese un nombre: ");
    gets(nombre);
    }
    while(!(strlen(nombre)<20));

        strcpy(nombres[5], nombre);

    printf("\nNombre: %s", nombres[5]);

//------------------------------------------------------------> EJERCICIO 7
//
//------------------------A---->VERDADERO
//------------------------B----> FALSO
//------------------------C----> VERDADERO
//------------------------D----> no se que es cadena validada
//------------------------E----> Verdadero

//-------------------USO DE GETS.
 /*   char cadena[50];
    printf("Ingresa una cadena con espacios:");
    gets(cadena);
    printf("\nLa cadena: %s", cadena);
*/

//------------------------------------------------------------> EJERCICIO 8

    char nombres[15][20] ={"Anabel","Alexandro","Julian","Vanina","Pepe","Tito","Martin","Zulema","Camila","Romina","Julio","Carlos","Mariano","Rodrigo","Alejo"};
    char aux[20];
    for(int i = 0; i < 15; i++)
    {
        for(int j=0; j<15; j++)
        {
            if(strcmp(nombres[j],nombres[j+1])>0)
            {
                strcpy(aux, nombres[j]);
                strcpy(nombres[j], nombres[j+1]);
                strcpy(nombres[j+1], aux);
            }
        }
    }
    for(int j=0; j<15; j++)
    {
        printf("%s\n", nombres[j]);
    }


//------------------------------------------------------------> EJERCICIO 9 ----- INCOMPLETISIMO

    int enteros[20] = {10,4,23,1,5,11,21,44,32,31,15,17,19,24,16,92,23,11,19,29};
    int aux;
    for(int i = 0; i < 20; i++)
    {
        for(int j=0; j<20; j++)
        {
            if(enteros[j]<enteros[j+1])
            {

            }
        }
    }
    for(int j=0; j<15; j++)
    {
        printf("%s\n", nombres[j]);
    }
//------------------------------------------------------------> EJERCICIO 10
//PASAJE POR VALOR: Se envia como parametro una variable de la cual, si en algun momento se modifica, ésto no cambia su estado original.
//PASAJE POR REFERENCIA: Se envia un parametro, en caso que se modifique dentro de la funcion, la variable es modificada tambien en su estado original.


    return 0;
}

int invertir(int numero) //EJERCICIO 4, SE PUEDE HACER DE OTRA MANERA PERO YO LO HAGO ASI
{
    return numero - numero*2;
}
