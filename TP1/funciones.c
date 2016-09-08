#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


/** \brief Suma toma los valores ingresados en operando1 y operando2 y los suma
 *
 * \param float a Para operando 1
 * \param float b Para operando 2
 * \return Retorna la suma de los 2 operandos
 *
 */
float suma (float a, float b)
{
   return a+b;
}


/** \brief Resta toma los valores ingresados en operando1 y operando2 y los resta
 *
 * \param float a Para operando 1
 * \param float b Para operando 2
 * \return Retorna la resta de los 2 operandos
 *
 */
float resta(float a, float b)
{
    return a-b;
}


/** \brief Multiplicacion toma los valores ingresados en operando1 y operando2 y los multiplica
 *
 * \param float a Para operando 1
 * \param float b Para operando 2
 * \return Retorna el producto de los 2 operandos
 *
 */
float multiplicacion (float a, float b)
{
    return a*b;
}


/** \brief Division toma los valores ingresados en operando1 y operando2 y los divide
 *
 * \param float a Para operando 1
 * \param float b Para operando 2
 * \return Retorna el cociente de los 2 operandos
 *
 */
float division(float a, float b)
{
    while(b==0)
    { /* valida que el numero ingresado sea distinto de 0*/
            printf("Error. No se puede dividir por 0.\nReingrese operandos\n");
            system("pause");
            return  menu();
            //division(a,b);
    }
            return a/b;
}

/** \brief factorial toma el valor del operando1 y realiza el producto de todos los números enteros positivos desde 1 hasta el valor ingresado
 *
 * \param float a para el operando 1
 * \return retorna el factorial del operando 1
 *
 */
float factorial(float a)
{
    float valor=1;
    int indice;
    if(a!=0)
    {
        for(indice = 1; indice <= a; indice++)
        {
            valor*=indice;
        }
    }
    return valor;
}

/** \brief Todo  Realiza la suma, resta, multiplicacion y divicion de los operandos 1 y 2
 *
 * \param float a para operando 1
 * \param float b para operando 2
 * \return Muestra todos los resultados en la misma funcion, no retorna nada
 *
 */
void todo (float a, float b)
{
    float suma;
    float resta;
    float multiplicacion;
    float division;

            suma=a+b;
            printf("La suma de %.2f + %.2f = %.2f\n",a,b,suma);

            resta=a-b;
            printf("La resta de %.2f - %.2f = %.2f\n",a,b,resta);

            multiplicacion=a*b;
            printf("La multiplicacion de %.2f * %.2f = %.2f\n",a,b,multiplicacion);

            division=a/b;
            printf("La division de %.2f / %.2f = %.2f\n",a,b,division);
}
