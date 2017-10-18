#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.141592653589793

int main()
{
    float seno,coseno,tangente;
    float senoParam,cosenoParam,tangenteParam;
    float exponencial,logaritmo,potencia,raizCuadrada;
    float exponencialParam,logaritmoParam;
    float potenciaBase,potenciaExponente,raizParam;
    int absoluto,aleatorio;
    int absolutoParam;
    float radianes=PI/2;//90 grados

    senoParam=cosenoParam=tangenteParam=radianes;
    absolutoParam=-10;
    exponencialParam=1;
    potenciaBase=2;
    potenciaExponente=3;
    raizParam=9;

    seno=sin(senoParam);
    printf("seno de 90 grados es %f\n",seno);
    coseno=cos(cosenoParam);
    printf("coseno de 90 grados es %f\n",coseno);
    tangente=tan(tangenteParam);
    printf("tangente de 90 grados es %f\n",tangente);

    absoluto=abs(absolutoParam);
    printf("valor absoluto de %d es %d\n",absolutoParam,absoluto);

    exponencial=exp(exponencialParam);
    printf("\"e\" elevado a la %f es %f\n",exponencialParam,exponencial);

    logaritmoParam=exponencial;

    logaritmo=log(logaritmoParam);
    printf("el logaritmo natural de %f es %f\n",logaritmoParam,logaritmo);

    potencia=pow(potenciaBase,potenciaExponente);
    printf("%f elevado a la %f es %f\n",potenciaBase,potenciaExponente,potencia);

    raizCuadrada=sqrt(raizParam);
    printf("raiz cuadrada de %f es %f\n",raizParam,raizCuadrada);

    aleatorio=rand();
    printf("un numero aleatorio entre 0 y RAND_MAX=%d es: %d\n",RAND_MAX,aleatorio);
    aleatorio=rand();
    printf("un segundo numero aleatorio es: %d\n",aleatorio);
    /*solo se necesita llamar a srand() antes de la primera vez que se llame a rand()
        y el generador de números aleatorios iniciará siempre en valor distinto para
        cada vez que inicie la aplicación*/
    srand((unsigned)time(0));  //time regresa un valor entero representando la fecha
    aleatorio=rand();
    printf("despues de llamar a srand, este siempre es un numero aleatorio: %d\n",aleatorio);
    aleatorio=rand()%10;  //el módulo sirve para devolver el residuo (0 a 9) no?
    printf("un numero aleatorio entre 0 y 9 es %d\n",aleatorio);

    return 0;
}
