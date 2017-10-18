#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void imprimeln(char* cadena){
    printf("%s\n",cadena);
}

void ejem_strchr(){
    char* cadena1="HABLAME";
    char* cadena2;
    cadena2=strchr(cadena1,65);
    imprimeln("EJEMPLO strchr");
    imprimeln(cadena1);
    imprimeln(cadena2);
    cadena2=strchr(cadena1,'B');
    imprimeln(cadena2);
    printf("direccion de memoria: %p\n",cadena2);
    cadena2=strchr(cadena1,'N');
    imprimeln(cadena2);
    printf("direccion de memoria: %p\n",cadena2);
    if (cadena2==NULL){
        printf("cadena2 es NULL\n");
    }
}

void ejem_strncat(){
    char bufer[20];
    char* cadena1="Luis";
    imprimeln("EJEMPLO strncat");
    bufer[0]='\0';
    bufer[3]='A';  //ve la diferencia en strncpy en la subrutina siguiente
    strncat(bufer,cadena1,3); //strncat incluye char \0
    imprimeln(bufer);
}

void ejem_strncpy(){
    char bufer[20];
    char* cadena1="Luis";
    imprimeln("EJEMPLO strncpy");
    bufer[0]='\0';
    bufer[3]='A';
    strncpy(bufer,cadena1,3);
    //bufer[3]='\0';  //que pasa si comento esta linea?
    imprimeln(bufer);
}

void ejem_strncmp(){
    char* cadena1="Luis";
    char* cadena2="Luis Alberto";
    imprimeln("EJEMPLO strncmp");
    if (strncmp(cadena1,cadena2,strlen(cadena2))==0){
        printf("%s y %s son iguales en caracteres y/o longitud\n",cadena1,cadena2);
    }
    else{
        printf("%s y %s son diferentes en caracteres y/o longitud\n",cadena1,cadena2);
    }
    if (strncmp(cadena1,cadena2,4)==0){
        printf("%s y %s son iguales en primeros 4 caracteres\n",cadena1,cadena2);
    }
    else{
        printf("%s y %s son diferentes en los primeros 4 caracteres\n",cadena1,cadena2);
    }
}

void ejem_tolower(){
    int ascii;
    imprimeln("EJEMPLO tolower");
    fflush(stdin);//no es portable
    ascii=tolower(65);
    printf("%c\n",ascii);
    imprimeln("dame una letra en mayusculas:");
    ascii=tolower(getchar());
    printf("%c\n",ascii);
}

void ejem_toupper(){
    int ascii;
    imprimeln("EJEMPLO toupper");
    fflush(stdin);//no es portable
    ascii=toupper('a');
    printf("%c\n",ascii);
    imprimeln("dame una letra en minusculas:");
    ascii=toupper(getchar());
    printf("%c\n",ascii);
}

void ejem_atoi(){
    int num;
    imprimeln("EJEMPLO atoi - convierte cadena a entero");
    num=atoi("47");
    printf("%d\n",num);
    num=atoi("Hola");
    printf("%d\n",num);
}

void ejem_itoa(){
    int num=15;
    char cad2[10],cad8[10],cad10[10],cad16[10];
    imprimeln("EJEMPLO itoa - convierte entero a cadena");
    itoa(num, cad2, 2);
    itoa(num, cad8, 8);
    itoa(num, cad10, 10);
    itoa(num, cad16, 16);

    printf("%d en binario es %s\n",num,cad2);
    printf("%d en octal es %s\n",num,cad8);
    printf("%d en decimal es %s\n",num,cad10);
    printf("%d en hexadecimal es %s\n",num,cad16);
}

void ejem_toascii(){
    char car;
    int ascii;
    imprimeln("EJEMPLO toascii");
    car='A';
    ascii=toascii(car);
    printf("el codigo ASCII de %c es %d\n",car,ascii);
    getchar();
    printf("Dame una letra: ");
    ascii=toascii(car=getchar());
    printf("el codigo ASCII de %c es %d\n",car,ascii);
}

int main()
{

    ejem_strchr();
    ejem_strncat();
    ejem_strncpy();
    ejem_strncmp();
    ejem_tolower();
    ejem_toupper();
    ejem_atoi();
    ejem_itoa();
    ejem_toascii();

    return 0;
}

