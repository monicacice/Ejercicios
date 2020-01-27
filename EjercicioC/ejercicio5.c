#include "stdio.h"
/*
1. Dolor de cabeza - Nada
2.Dolor de fiebre + Fiebre -> Gripe
3.Dolor de cabeza + Fiebre + Vienes de China -> Coronavirus
4. Dolor de garganta + tos -> Resfriado común
*/
int main(int argc, char const *argv[])
{
    int dolorDeCabeza, fiebre, origenChina;
    printf("Te duele la cabeza? [0-si, 1-no]");
    scanf("%id", &dolorDeCabeza);
    if (dolorDeCabeza == 0)
    {
        printf("Tomate un paracetamol anda");
    }
    else
    {
        printf("Que haces aquí");
    }
    printf("Tienes fiebre? [0-si, 1-no]");
    scanf("%id", &fiebre);
    if (fiebre == 0)
    {
        printf("Hazte una bola en la cama y toma ibuprofeno");
    }
    else
    {
        printf("De nuevo, que haces aqui");
    }
    printf("Vienes de china? [0-si, 1-no]");
    scanf("%id", &origenChina);

    if (origenChina == 0)
    {
        printf("Bienvenido! Esto es Spain");
    }
    else
    {
        printf("Holi camarada");
    }
    return 0;
}
