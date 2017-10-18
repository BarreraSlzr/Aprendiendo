#include <stdio.h>
#include <stdlib.h>

int main()
{
    //for que queda muy diferente a while
    int i,j,k,x;
    i=0;
    k=j=10;
    for(i=0,k=j=10;i<j;i++){
        k+=x=i+1;
        printf("%d. Es bueno el celular en silencio en clase\n",x);
    }
    printf("k=%d",k);
    return 0;
}
