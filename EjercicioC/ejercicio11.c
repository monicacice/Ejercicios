#include "stdio.h"
#define NUM_ELEMENTOS 5
int main(int argc, char const *argv[])
{
    int numero [NUM_ELEMENTOS];
    int total=0; //Declaracion de variable
    for (int i=0; i <NUM_ELEMENTOS; i++){
        printf("Introduce el numero de la posicion %d", i );
        scanf("%d", &numero[i]);
    }
    
    for (int i=0; i <NUM_ELEMENTOS; i++){
        total = total +numero[i];
    }
        printf("Total:%d", total);
    return 0;
}
