#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    int facto;
    if (n==0){
        facto=1;
    }
    else if (n>0){
        facto=n*factorial(n-1);
    }
    else facto=-1;
    return facto;
}

int fibonacci(int n){
    int fibo;
    if (n<2){
        fibo=n;
    }
    else{
        fibo=fibonacci(n-1)+fibonacci(n-2);
    }
    return fibo;
}

void sucesionFibonacci(int n){
    int i;
    printf("Sucesion de fibonacci hasta %d:\n",n);
    for(i=0;i<=n;i++){
        printf("f(%d)=%d\n",i,fibonacci(i));
    }
}

int main()
{
    int fact,n;
    printf("Dame la n para factorial y fibonacci:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial de %d es %d\n",n,fact);
    sucesionFibonacci(n);
    return 0;
}
