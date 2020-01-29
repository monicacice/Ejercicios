#include "stdio.h"
#define NUM_FILAS 3
#define NUM_COLUMNAS 5
int main(int argc, char const *argv[])
{
    //3 categorias (alimentacion,moda,juguetes)
    //5 dias (lunes-viernes) el = 10 es una asignacion, le dices que ese sitio va a tener el valor 10
    //Se empieza a contar desde el 0!!
    int ventas [3][5];
    //Pongo a 0 todas las celdas
    for(int fila=0; fila<NUM_FILAS; fila++){
        for(int col=0; col<NUM_COLUMNAS; col++){
            ventas[fila][col]=0;
        }
    }
    //Inicializo algunas celdas
    ventas[0][0]=10;
    ventas[1][2]=15;
    ventas[2][3]=8;
    ventas[2][0]=31;
    //Mostrar toda la matriz
    for(int fila=0; fila<NUM_FILAS; fila++){ 
        for(int col=0; col<NUM_COLUMNAS; col++){
            printf("%d ", ventas[fila][col]);
        }
        printf("\n");
    }    
    //Mostrar la suma de la tercera fila (fila2)
        int total =0;
        for(int i=0;i<NUM_COLUMNAS; i++){
            total = total + ventas[2][i];
        }
        printf("Total total:%d\n", total);
        
        
        
        return 0;
}
