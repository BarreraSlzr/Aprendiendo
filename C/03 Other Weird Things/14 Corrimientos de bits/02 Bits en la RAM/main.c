#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test1=0x01;
    int test2=0x02;
    int test3=0x04;
    int test4=0x08;
    int test8=0x80;
    int test9=0x100;
    int valor1;
    printf("Bits en la RAM...\n");
    printf("Dame el valor de prueba: ");
    scanf("%d",&valor1);
    printf("test1=%d\n",test1);
    printf("test2=%d\n",test2);
    printf("test3=%d\n",test3);
    printf("test4=%d\n",test4);
    printf("test8=%d\n",test8);
    printf("test9=%d\n",test9);
    printf("valor1=%d\n",valor1);
    if ((test1&valor1)!=0){
        printf("El primer bit de valor1 de esta encendido\n");
    }
    else{
        printf("El primer bit de valor1 esta apagado\n");
    }
    if ((test2&valor1)!=0){
        printf("El segundo bit de valor1 esta encendido\n");
    }
    else{
        printf("El segundo bit de valor1 esta apagado\n");
    }
    if ((test3&valor1)!=0){
        printf("El tercer bit de valor1 esta encendido\n");
    }
    else{
        printf("El tercer bit de valor1 esta apagado\n");
    }
    if ((test4&valor1)!=0){
        printf("El cuarto bit de valor1 esta encendido\n");
    }
    else{
        printf("El cuarto bit de valor1 esta apagado\n");
    }
    if ((test8&valor1)!=0){
        printf("El octavo bit de valor1 esta encendido\n");
    }
    else{
        printf("El octavo bit de valor1 esta apagado\n");
    }
    if ((test9&valor1)!=0){
        printf("El noveno bit de valor1 esta encendido\n");
    }
    else{
        printf("El noveno bit de valor1 esta apagado\n");
    }
    return 0;
}
