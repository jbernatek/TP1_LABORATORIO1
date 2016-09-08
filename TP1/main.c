#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float cargaoperando();
int menu (float x, float y, int flag1, int flag2);
int validarOpcion();

int main()
{
    float operando1;
    float operando2;
    int flag1=0;
    int flag2=0;
    int opcion;
    float respuesta;

do
    {
        switch(menu(operando1, operando2, flag1, flag2))
        {
            case 1:
                system ("cls");
                operando1 = cargaoperando();
                flag1=1;
                break;
            case 2:
                system ("cls");
                operando2 = cargaoperando();
                flag2=1;
                break;
            case 3://suma
                if(flag1==1 && flag2==1)
                {
                respuesta = suma(operando1, operando2);
                printf("\n\nLa suma de %.2f + %.2f = %.2f\n",operando1, operando2, respuesta);
                system("pause");
                }
                else
                {
                printf("\nPara realizar la operacion primero tiene que cargar ambos operandos.\n");
                system("pause");
                }
                break;
            case 4://resta
                if(flag1==1 && flag2==1)
                {
                respuesta=resta(operando1, operando2);
                printf("\n\nLa resta de %.2f - %.2f = %.2f\n",operando1, operando2, respuesta);
                system("pause");
                }
                else
                {
                printf("\nPara realizar la operacion primero tiene que cargar ambos operandos.\n");
                system("pause");
                }
                break;
            case 5://division
                if(flag1==1 && flag2==1)
                {
                respuesta=division(operando1, operando2);
                printf("\n\nLa division de %.2f / %.2f = %.2f\n",operando1, operando2, respuesta);
                system("pause");
                }
                else
                {
                printf("\nPara realizar la operacion primero tiene que cargar ambos operandos.\n");
                system("pause");
                }
                break;
            case 6://multiplicacion
                if(flag1==1 && flag2==1)
                {
                 respuesta=multiplicacion(operando1, operando2);
                printf("\n\nLa multiplicacion de %.2f * %.2f = %.2f\n",operando1, operando2, respuesta);
                system("pause");
                }
                else
                {
                printf("\nPara realizar la operacion primero tiene que cargar ambos operandos.\n");
                system("pause");
                }
                break;
            case 7://factorial
                if(flag1==1)
                {
                respuesta=factorial(operando1);
                printf("\n\nEl factorial de %.2f = %.2f\n",operando1,respuesta);
                system("pause");
                }
                else
                {
                printf("\nPara realizar la operacion primero tiene que cargar el Operando 1.\n");
                system("pause");
                }
                break;
            case 8://todas
                if(flag1==1 && flag2==1)
                {
                todo(operando1, operando2);
                system("pause");
                }
                else
                {
                printf("\nPara realizar la operacion primero tiene que cargar ambos operandos.\n");
                system("pause");
                }
                break;
            case 9://salir
                opcion=9;
                break;

        }

}
while (opcion!=9);
    return 0;

}



/**
 * \brief Solicita el operando al usuario y devuelve el numero ingresado
 * \param msj muestra el mensaje "Ingrese Operando"
 * \return Retorna el número ingresado por el usuario
 *
 */
float cargaoperando()
{
    float num;
    printf("Ingrese Operando: ");
    scanf("%f",&num);
    return num;
}

/** \brief Funcion Menu muestra el menu de opciones y devuelve la opcion elegida por el usuario
 *
 * \param float a indica el operando1
 * \param float b indica el operando2
 * \param int flag1 es la bandera del primer operando cargado
 * \param int flag2 es la bandera del segundo operando cargado
 * \return Retorna la opcion elegida por el usuario.
 *
 */
int menu(float a,float b, int flag1, int flag2)
{
   int opcion;

        system("cls");
        printf("Menu de Opciones\n\n");
        if(flag1==0)
        {
            printf("1- Ingresar 1er operando (A= x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A= %.2f)\n", a);
        }
        if(flag2==0)
        {
            printf("1- Ingresar 2do operando (B= y)\n");
        }
        else
        {
            printf("1- Ingresar 2do operando (B= %.2f)\n", b);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        opcion= validarOpcion ("\n\nIngrese opcion: ");

        return opcion;
}

/**
 * \brief Solicita un número al usuario verificando que sea entre 1 y 9
 * \param msj muestra el mensaje que dice "Ingrese Opcion"
 * \return Retorna la opcion elegida por el usuario
 *
 */
int validarOpcion()
{
    int opcion;
    printf("Ingrese Opcion: .");
    scanf("%d",&opcion);
    if(opcion <1 || opcion >9)
    {
        printf("\nError, Ingrese una Opcion entre 1 y 9.");
        opcion=validarOpcion();
    }
    else
    {
     return opcion;
    }
}
