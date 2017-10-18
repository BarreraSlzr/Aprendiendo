#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VALORES 3

typedef struct{
    int a;
    int b;
}intDual;

intDual leerValores(){
    intDual c;
    printf("dame un primer valor: ");
    scanf("%d",&c.a);
    printf("dame un segundo valor: ");
    scanf("%d",&c.b);
    return c;
}

void pedirValores(int* a,int* b){
    printf("dame un primer valor: ");
    scanf("%d",a);
    printf("dame un segundo valor: ");
    scanf("%d",b);
}

int main()
{
    intDual z;
    int x,y;
    z=leerValores();
    printf("z.a=%d\n",z.a);
    printf("z.b=%d\n",z.b);
    pedirValores(&x,&y);
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}
