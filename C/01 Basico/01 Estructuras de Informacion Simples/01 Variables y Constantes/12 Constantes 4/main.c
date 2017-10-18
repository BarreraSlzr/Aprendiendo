#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416
#define NOMBRE "LUIS ALBERTO"
#define KILOBYTE 1024

int main()
{
    const int MAX=100;
    int kilo=KILOBYTE;
    printf("MAX=%d\n",MAX);
    //MAX=99; //esto no es permitido y no compila
    printf("PI=%f\n",PI);
    printf(NOMBRE);
    printf("\n");
    printf("Un kilobyte equivale a %d bytes\n",kilo);
    return 0;
}
