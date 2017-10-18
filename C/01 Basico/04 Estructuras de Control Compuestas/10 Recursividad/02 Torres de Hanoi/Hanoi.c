#include <stdio.h>
#include <stdlib.h>

#define TORRE_INICIAL 1
#define TORRE_AUXILIAR 2
#define TORRE_FINAL 3

int hanoi(int numDiscos, int torreInicial, int torreAuxiliar, int torreFinal);

int main()
{
    int cantDiscos, movimientos;
	printf("Cantidad de discos a mover: ");
	scanf("%d", &cantDiscos);
	printf("\nLa serie de movimientos a realizar es: \n\n");
	movimientos = hanoi(cantDiscos, TORRE_INICIAL, TORRE_AUXILIAR, TORRE_FINAL);
	printf("\nSe realizaron en total %d movimientos\n", movimientos);
	return 0;
}

int hanoi(int numDiscos, int torreInicial, int torreAuxiliar, int torreFinal)
{
    static int movimientos = 0;
	if(numDiscos == 1) // solo hay un disco
	{
		printf("Mover el disco superior de la torre %d a la torre %d\n", torreInicial, torreFinal);
		movimientos++;
	}
	else // mas de un disco
	{
		hanoi(numDiscos - 1, torreInicial, torreFinal, torreAuxiliar);
		printf("Mover el disco superior de la torre %d a la torre %d\n", torreInicial, torreFinal);
		movimientos++;
		hanoi(numDiscos - 1, torreAuxiliar, torreInicial, torreFinal);
	}
	return movimientos;
}
