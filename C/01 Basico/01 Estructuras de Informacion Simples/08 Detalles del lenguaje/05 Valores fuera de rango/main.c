#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    float b;
    double c;
    c=b=a=10;
    for(i=0;i<20;i++){
        a*=10;
        b*=10;
        c*=10;
        printf("a=%22d\n",a);
        printf("b=%22.0f\n",b);
        printf("c=%22.0f\n",c);
    }
    return 0;
}

