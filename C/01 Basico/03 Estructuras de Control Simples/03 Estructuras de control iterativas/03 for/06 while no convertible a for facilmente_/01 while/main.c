#include <stdio.h>
#include <stdlib.h>

int main()
{
    //while dificil de convertir a for
    int i,j,k;
    i=0;
    k=j=10;
    while(i<j){
        i++;
        k+=i;
        printf("%d. Es bueno el celular en silencio en clase\n",i);
    }
    printf("k=%d",k);
    return 0;
}
