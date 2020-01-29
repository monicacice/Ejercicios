#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define MAX 10
#define NUMERO_INTENTOS 5
#define PARTIDAS 3
int getRandom();
int main(int argc, char const *argv[])
{
    int numeroAleatorio;
    int numero;
    //Obtener el numero aleatorio. DOS == comparas. CON = estás asignando un valor.
    do
    {
        printf("Introduce tu numero: ");
        scanf("%d", &numero);
    } while (numero != numeroAleatorio); //El != significa distinto de//
    
    printf("Eres un adivino");
}


int getRandom()
{
    int aleatorio;
    srand(time(NULL));
    aleatorio = rand() % MAX;
    return aleatorio;
}