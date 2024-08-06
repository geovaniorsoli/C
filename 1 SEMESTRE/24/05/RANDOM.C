#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random()
{
    return rand() % 7;
}

void array(int arr[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        arr[i] = random();
    }
}
void printArray(int arr[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    srand(time(0));

    int tam = 10;
    int arrRandom[tam];

    array(arrRandom, tam);

    printf("array de numeros: ");
    printArray(arrRandom, tam);

    return 0;
}
