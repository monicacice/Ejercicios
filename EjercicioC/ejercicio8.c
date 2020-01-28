#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define MAX 10
#define NUMERO_INTENTOS 5
int getRandom();
int main(int argc, char const *argv[])
{   
    //Obtener el numero aleatorio

    int numeroAleatorio = getRandom();
    int numeroAdivino;
    for (int i=0; i <NUMERO_INTENTOS; i++)
    {   printf("Introduce tu numero");
        scanf("%d", &numeroAdivino);      
    }
    if (NUMERO_INTENTOS > 5)
    printf("Se te han acabado tus intentos");
    break;
    
   

    


    
}


int getRandom() {
    int aleatorio;
    srand (time(NULL));
    aleatorio = rand() % MAX;
    return 5;
}