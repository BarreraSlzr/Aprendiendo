#include <stdio.h>
#include <stdlib.h>

typedef union u__tag{
    int ival;
    float fval;
    char* sval;
} type_u;

typedef union v__tag{
    int ival;
    double fval;
    char* sval;
} type_v;

typedef struct{
    int entero;
    float flotante;
    char* texto;
}Registro;

int main()
{
    Registro r;
    type_u u;
    type_v v;
    char* cad;
    char* cad2;

    printf("tamanio de r es:%d\n\n",sizeof(r));

    u.ival=10;
    printf("u.ival=%d\n",u.ival);
    printf("tamanio de u es:%d\n",sizeof(u));
    u.fval=11;
    printf("u.fval=%f\n",u.fval);
    printf("tamanio de u es:%d\n",sizeof(u));
    printf("u.ival=%d\n",u.ival);//convertir lo que imprima a binario
    printf("tamanio de u es:%d\n",sizeof(u));
    u.sval="Hola=)";
    cad=u.sval;
    printf("u.sval=%s\n",u.sval);
    printf("tamanio de u es:%d\n",sizeof(u));
    u.sval="Mundo";
    printf("u.sval=%s\n",u.sval);
    printf("tamanio de u es:%d\n\n",sizeof(u));

    v.ival=10;
    printf("v.ival=%d\n",v.ival);
    printf("tamanio de v es:%d\n",sizeof(v));
    v.fval=13;
    printf("v.fval=%f\n",v.fval);
    printf("tamanio de v es:%d\n",sizeof(v));
    v.sval="Hola=)";
    cad2=v.sval;
    printf("v.sval=%s\n",v.sval);
    printf("tamanio de v es:%d\n",sizeof(v));
    printf("v.ival=%d (direccion de memoria de la letra h)\n",v.ival);
    printf("tamanio de v es:%d\n",sizeof(v));
    printf("direccion de memoria de la cadena es en int   %d\n",(int)cad2);
    printf("direccion de memoria de cad  es en hexa %p---%s\n",cad,cad);
    printf("direccion de memoria de cad2 es en hexa %p---%s\n",cad2,cad2);
    return 0;
}
