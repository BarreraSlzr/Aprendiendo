#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,m,n;
    for(i=1,j=5;i<=j;i++){
        for(m=i+1,n=m+4;m<n;m++){
            k=i+m;
            printf("i=%d, m=%d, k=i+m=%d\n",i,m,k);
        }
    }
    return 0;
}
