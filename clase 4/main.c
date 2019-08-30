#include <stdlib.h>
#include "Aritmeticas.h"


int main()
{

    int numero1 = pedirEntero("ingrese edad ",1,100);
    int legajo = pedirEntero("ingrese legajo ",0,2000);
    int nota = pedirEntero("ingrese nota ",1,10);
    int documento = pedirEntero("ingrese documento ",0,10000);

    printf("%d--%d--%d--%d\n\n", numero1,legajo,nota,documento);


    return 0;
}
