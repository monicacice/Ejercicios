#include "stdio.h"
#define DIMENSION 3
#define PRIMER_JUGADOR 1
#define SEGUNDO_JUGADOR 2

void inicializar();
void mostrarTablero();

int tablero[DIMENSION][DIMENSION];

int main(int argc, char const *argv[])
{
    printf("***TRES EN RAYA PA TI***\n");
    inicializar();
    mostrarTablero();
    return 0;
}
void inicializar()
{
    for (int fila = 0; fila < DIMENSION; fila++)
    {
        for (int col = 0; col < DIMENSION; col++)
        {
            tablero[fila][col] = 0;
        }
    }
}
void mostrarTablero()
{
    for (int fila = 0; fila < DIMENSION; fila++)
    {
        printf("\n");
        for (int col = 0; col < DIMENSION; col++)
        {
            printf("%d", tablero[fila][col]);
        }
    }
     int fila;
     int col;
     printf("\n Introduce una fila movimiento jugador 1 ");
     scanf("%d", &fila);
     printf("\n Introduce una columna jugador 1 ");
     scanf("%d", &col);
     tablero [fila][col]= 2;
     
     
    
     printf("\n Introduce una fila movimiento jugador 2 ");
     scanf("%d", &fila);
     printf("\n Introduce una columna jugador 2 ");
     scanf("%d", &col);
     tablero [fila][col]= 2;
     mostrarTablero();

    
     /* tablero [fila][col]= 1;
     mostrarTablero();*/






}

