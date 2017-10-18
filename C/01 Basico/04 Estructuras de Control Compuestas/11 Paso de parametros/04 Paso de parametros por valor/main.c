#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VALORES 3

int leerValor();
void pedirValor(int a);

int main()
{
    int x,y;
    y=leerValor();
    printf("y=%d\n",y);
    x=0;
    pedirValor(x);
    printf("x=%d\n",x);
    return 0;
}

int leerValor(){
    int b;
    printf("dame un valor: ");
    scanf("%d",&b);
    return b;
}

void pedirValor(int a){//paso de parametro por valor
    int b;
    printf("dame un valor: ");
    scanf("%d",&b);
    a=b;//esta asignacion no modifica la x de main
    printf("a=%d\n",a);
}

