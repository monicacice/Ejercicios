#include "stdio.h"

int main(int argc, char const *argv[])
{
    //Forma de ELse/if//
    int idPelicula;
    printf("1. El Irlandes\n");
    printf("2. Origen\n");
    printf("3. El Golpe\n");
    printf("4. Kick Ass\n");
    printf("5. El Padrino\n");
    printf("Introduce el numero de pelicula:");
    scanf("%d", &idPelicula);
    if (idPelicula == 1)
    {
        printf("Es la pelicula favorita de Miguel Angel");
    }
    else if (idPelicula == 2)
    {
        printf("Es la pelicula favorita de Alejandro(Dolumna 0)");
    }
    else if (idPelicula == 3)
    {
        printf("Es la pelicula favorita de Alberto");
    }
    else if (idPelicula == 4)
    {
        printf("Es la pelicula favorita de Puri");
    }
    else if (idPelicula == 5)
    {
        printf("Es la pelicula favorita de Pacual");
    }
    else
    {
        printf("Esa pelicula no existe");
    }

    //Forma Switch//
    switch (idPelicula)
    {
    case 1:
        printf("Es la pelicula favorita de Miguel Angel");
        break;
    case 2:
        printf("Es la pelicula favorita de Alejandro");
        break;
    case 3:
        printf("Es la pelicula favorita de Alberto");
        break;
    case 4:
        printf("Es la pelicula favorita de Puri");
        break;
    case 5:
        printf("Es la pelicula favorita de Pascual");
        break;
    default: //el default es personal
        printf("Esa pelicula no existe");
    }
    
    return 0;
}
