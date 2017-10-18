#include <stdio.h>
#include <stdlib.h>

int variableGlobal=10;  /*se usan para casos muy especiales
                          pues afectan a la independencia de los modulos,
                          una variable global se utiliza para representar
                          parte del estado del programa
                          una variable global en la mayoría de los casos
                          seria aquella que nos interesara almacenar en disco duro
                          */

void pausar(){
    printf("Presione entrar para continuar");
    getchar();
}

void subprogramaUsaLocal(int parametro){
    int resultado,variableLocal=10;  //lo mejor por modularidad son las variables locales
    variableLocal++;
    resultado=variableLocal*parametro;
    printf("usando variable local resultado es: %d\n",resultado);
    pausar();
}

void subprogramaUsaGlobal(int parametro){
    int resultado;
    variableGlobal++;
    resultado=variableGlobal*parametro;
    printf("usando variable global resultado es: %d\n",resultado);
    pausar();
}

void subprogramaUsaLocal2(int parametro){
    int resultado,variableGlobal=10;//variable local oculta a la global
    variableGlobal++;  //aunque se llame así, ésta es una variable local
    resultado=variableGlobal*parametro;
    printf("usando variable local con mismo nombre que global resultado es: %d\n",resultado);
    pausar();
}

int main()
{
    int varLocal;  //otra variale local
    varLocal=100;
    printf("variable local en main es: %d\n",varLocal);

    subprogramaUsaLocal(2);
    subprogramaUsaLocal(2);
    subprogramaUsaLocal(2);

    subprogramaUsaGlobal(2);
    subprogramaUsaGlobal(2);
    variableGlobal+=5;
    subprogramaUsaGlobal(2);
    printf("la variable global queda como: %d\n",variableGlobal);
    pausar();

    subprogramaUsaLocal2(2);
    subprogramaUsaLocal2(2);
    subprogramaUsaLocal2(2);
    printf("la variable global sigue con: %d\n",variableGlobal);
    pausar();

    return 0;
}
