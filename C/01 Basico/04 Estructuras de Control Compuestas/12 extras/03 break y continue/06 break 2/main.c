#include <stdio.h>
#include <stdlib.h>

#define MAX_SUCESION 89
#define MAX_ITERACIONES 3

int main()
{
    //break
    int a,b,c,a1,b1,c1,i,finSucesion;
    printf("dame hasta cual valor de la sucesion imprimir (0 a %d): ",MAX_SUCESION);
    scanf("%d",&finSucesion);
    for(a1=-1,b1=1,i=0;i<MAX_ITERACIONES;i++){
        a=a1;
        b=b1;
        do{
            c=a+b;
            printf("%d ",c);
            if (c==finSucesion){
                break;
            }
            else{
                a=b;
                b=c;
            }
        }while(c<MAX_SUCESION);
        printf("\n");;
        c1=a1+b1;
        a1=b1;
        b1=c1;
    }
    return 0;
}
