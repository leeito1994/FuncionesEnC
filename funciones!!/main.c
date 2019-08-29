#include <stdio.h>
#include <stdlib.h>
void calcular(int numUno, int numDos, int operacion);
int suma(int numUno, int numDos);
int resta(int numUno, int numDos);
int multiplicacion (int numUno, int numDos);
int division (int numUno,int numDos);
void mostrar(float);
int pedirDato(int num1);


int main()
{
    printf("que operacion desea hacer?\n");
    printf(" 1 sumar \n 2 restar \n 3 multiplicar \n 4 dividir\n");
    int operacion = pedirDato();
    printf("ingrese el primer numero \n");
    int numeroUno = pedirDato();
    printf("ingrese el segundo numero\n");
    int numeroDos = pedirDato();
}

void calcular (int numUno, int numDos, int operacion)
{
    float resultado;

    switch(operacion)
    {
    case 1:
        resultado = suma(numUno,numDos);
        printf("el resultado es %f\n", resultado);
        break;

    case 2:

        resultado = resta(numUno,numDos);
        printf("el resultado es %f\n",resultado);
        break;

    case 3:
        resultado = multiplicacion(numUno,numDos);
        printf("el resultado es %f\n",resultado);
        break;

    case 4:
        resultado = division(numUno,numDos);
        printf("el resultado es %f\n",resultado);
        break;
    }
    mostrar(resultado);
}


int suma(int numUno, int numDos)
{

    return numUno + numDos;

}

int resta(int numUno, int numDos)
{

    return numUno - numDos;
}

int multiplicacion (int numUno, int numDos)
{

    return numUno * numDos;
}

int division (int numUno,int numDos)
{

    return numUno / numDos;
}

void mostrar(float resultado)
{
    printf(" el resultado es %f",resultado);
}

int pedirDato(int num1)
{
    scanf("%d", numUno);
    return numUno;
}


