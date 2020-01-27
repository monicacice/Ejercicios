#include "stdio.h"
#define MAYORIA_EDAD 18
#define EDAD_JUBILACION 67
int main(int argc, char const *argv[])
{
    int edad = 0; //Declaración e inicialización
    //int edad; //Declaración
    //edad = 0 //Inicialización
    printf("Introduce tu edad");
    scanf("%d", &edad);
    if (edad >= MAYORIA_EDAD)
    {
        if (edad >= EDAD_JUBILACION)
        {
            printf("Enahorabuena, estas felizmente jubilado");
        }
        else
        {
            printf("Eres mayor de edad pero aun no te puedes jubilar");
        }
    }
    else
    {
        printf("Eres menor de edad, (te queda TELA)");
    }

    /* code */
    return 0;
}